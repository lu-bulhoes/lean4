/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <vector>
#include <string>
#include <limits>
#include <stdio.h>
#include <utility>
#include <ios>
#include "runtime/exception.h"
#include "runtime/serializer.h"
#include "runtime/object.h"
#include "runtime/mpz.h"

namespace lean {
void initialize_serializer() {
    serializer::initialize();
    deserializer::initialize();
}

void finalize_serializer() {
    deserializer::finalize();
    serializer::finalize();
}

serializer_core::~serializer_core() {
    for (std::pair<object*, unsigned> const & it : m_obj_table) {
        dec_ref(it.first);
    }
}

void serializer_core::write_unsigned_short(unsigned short i) {
    static_assert(sizeof(i) == 2, "unexpected unsigned short size");
    m_out.put((i >> 8) & 0xff);
    m_out.put(i & 0xff);
}

void serializer_core::write_unsigned(unsigned i) {
    static_assert(sizeof(i) == 4, "unexpected unsigned size");
    if (i < 255) {
        m_out.put(i & 0xff);
    } else {
        m_out.put(-1);
        m_out.put((i >> 24) & 0xff);
        m_out.put((i >> 16) & 0xff);
        m_out.put((i >> 8) & 0xff);
        m_out.put(i & 0xff);
    }
}

void serializer_core::write_uint64(uint64 i) {
    static_assert(sizeof(i) == 8, "unexpected uint64 size");
    write_unsigned((i >> 32) & 0xffffffff);
    write_unsigned(i & 0xffffffff);
}

void serializer_core::write_size_t(size_t i) {
    if (sizeof(i) == 8) {
        write_uint64(static_cast<uint64>(i));
    } else {
        lean_assert(sizeof(i) == 4);
        write_unsigned(static_cast<unsigned>(i));
    }
}

void serializer_core::write_int(int i) {
    static_assert(sizeof(i) == 4, "unexpected int size");
    write_unsigned(i);
}

void serializer_core::write_blob(std::string const & s) {
    write_unsigned(s.size());
    m_out.write(&s[0], s.size());
}

void serializer_core::write_constructor(object * o) {
    lean_assert(is_cnstr(o));
    unsigned num_objs  = cnstr_num_objs(o);
    unsigned scalar_sz = cnstr_scalar_size(o);
    write_unsigned_short(cnstr_tag(o));
    write_unsigned_short(num_objs);
    write_unsigned_short(scalar_sz);
    object ** it  = cnstr_obj_cptr(o);
    object ** end = it + num_objs;
    for (; it != end; ++it)
        write_object(*it);
    unsigned char * sit  = cnstr_scalar_cptr(o);
    unsigned char * send = sit + scalar_sz;
    for (; sit != send; ++sit)
        m_out.put(*sit);
}

void serializer_core::write_closure(object *) { // NOLINT
    /* TODO(Leo): we need a table from function pointer to unique name id.

       For serializing bytecode, we will need to retrieve the unique name id too.
       The trick of storing the bytecode index as the first argument of an "eval"
       C function is not going to work. It seems we will to store the index as
       a tagged pointer and handle it at `apply`.
    */
    throw exception("serializer for closures has not been implemented yet");
}

void serializer_core::write_array(object * o) {
    lean_assert(is_array(o));
    size_t sz    = sarray_size(o);
    write_size_t(sz);
    object ** it  = array_cptr(o);
    object ** end = it + sz;
    for (; it != end; ++it)
        write_object(*it);
}

void serializer_core::write_scalar_array(object * o) {
    lean_assert(is_sarray(o));
    unsigned esz = sarray_elem_size(o);
    size_t sz    = sarray_size(o);
    write_unsigned(esz);
    write_size_t(sz);
    size_t num_bytes = sz*esz;
    unsigned char const * it  = sarray_cptr_core<unsigned char>(o);
    unsigned char const * end = it + num_bytes;
    for (; it != end; ++it)
        m_out.put(*it);
}

void serializer_core::write_string_object(object * o) {
    size_t sz  = string_size(o);
    size_t len = string_len(o);
    write_size_t(sz);
    write_size_t(len);
    char const * it  = c_str(o);
    char const * end = it + sz;
    for (; it != end; ++it)
        m_out.put(*it);
}

void serializer_core::write_mpz(mpz const & n) {
    std::ostringstream out;
    out << n;
    write_string(out.str());
}

void serializer_core::write_external(object *) { // NOLINT
    /* TODO(Leo): we need support for registering serializers/deserializers
       for external objects.
    */
    throw exception("serializer for external objects has not been implemented yet");
}

void serializer_core::write_object(object * o) {
    if (is_scalar(o)) {
        m_out.put(0);
        write_unsigned(unbox(o));
    } else {
        auto it = m_obj_table.find(o);
        if (it != m_obj_table.end()) {
            m_out.put(1);
            write_unsigned(it->second);
        } else {
            object_kind k = get_kind(o);
            m_out.put(static_cast<unsigned>(k) + 2);
            switch (k) {
            case object_kind::Constructor:  write_constructor(o); break;
            case object_kind::Closure:      write_closure(o); break;
            case object_kind::Array:        write_array(o); break;
            case object_kind::ScalarArray:  write_scalar_array(o); break;
            case object_kind::String:       write_string_object(o); break;
            case object_kind::MPZ:          write_mpz(mpz_value(o)); break;
            case object_kind::External:     write_external(o); break;
            default: lean_unreachable();
            }
            inc_ref(o);
            m_obj_table.insert(std::make_pair(o, m_obj_table.size()));
        }
    }
}

corrupted_stream_exception::corrupted_stream_exception():
    exception("corrupted binary file") {}

void serializer_core::write_double(double d) {
    std::ostringstream out;
    // TODO(Leo): the following code may miss precision.
    // We should use std::ios::hexfloat, but it is not supported by
    // g++ yet.
    out.flags (std::ios::scientific);
    out.precision(std::numeric_limits<double>::digits10 + 1);
    out << std::hex << d;
    write_string(out.str());
}

deserializer_core::~deserializer_core() {
    for (object * o : m_objs)
        dec_ref(o);
}

std::string deserializer_core::read_string() {
    std::string r;
    while (true) {
        char c = m_in.get();
        if (c == 0)
            break;
        if (m_in.eof())
            throw corrupted_stream_exception();
        r += c;
    }
    return r;
}

unsigned deserializer_core::read_unsigned_ext() {
    unsigned r;
    static_assert(sizeof(r) == 4, "unexpected unsigned size");
    r  = static_cast<unsigned>(m_in.get()) << 24;
    r |= static_cast<unsigned>(m_in.get()) << 16;
    r |= static_cast<unsigned>(m_in.get()) << 8;
    r |= static_cast<unsigned>(m_in.get());
    return r;
}

unsigned short deserializer_core::read_unsigned_short() {
    unsigned short r;
    static_assert(sizeof(r) == 2, "unexpected unsigned short size");
    r  = static_cast<unsigned short>(m_in.get()) << 8;
    r |= static_cast<unsigned short>(m_in.get());
    return r;
}

uint64 deserializer_core::read_uint64() {
    uint64 r;
    static_assert(sizeof(r) == 8, "unexpected uint64 size");
    r  = static_cast<uint64>(read_unsigned()) << 32;
    r |= static_cast<uint64>(read_unsigned());
    return r;
}

size_t deserializer_core::read_size_t() {
    if (sizeof(size_t) == 8) {
        return static_cast<size_t>(read_uint64());
    } else {
        lean_assert(sizeof(size_t) == 4);
        return static_cast<size_t>(read_unsigned());
    }
}

double deserializer_core::read_double() {
    // TODO(Leo): use std::hexfloat as soon as it is supported by g++
    std::istringstream in(read_string());
    double r;
    in >> r;
    return r;
}

mpz deserializer_core::read_mpz() {
    return mpz(read_string().c_str());
}

std::string deserializer_core::read_blob() {
    unsigned sz = read_unsigned();
    std::string s(sz, '\0');
    m_in.read(&s[0], sz);
    return s;
}

object * deserializer_core::read_constructor() {
    unsigned tag       = read_unsigned_short();
    unsigned num_objs  = read_unsigned_short();
    unsigned scalar_sz = read_unsigned_short();
    object * r = alloc_cnstr(tag, num_objs, scalar_sz);
    for (unsigned i = 0; i < num_objs; i++) {
        object * o = read_object();
        inc(o);
        cnstr_set_obj(r, i, o);
    }
    unsigned char * it  = cnstr_scalar_cptr(r);
    unsigned char * end = it + scalar_sz;
    for (; it != end; ++it)
        *it = m_in.get();
    return r;
}

object * deserializer_core::read_closure() {
    throw exception("serializer for closures has not been implemented yet");
}

object * deserializer_core::read_array() {
    size_t sz    = read_size_t();
    object * r   = alloc_array(sz, sz);
    for (size_t i = 0; i < sz; i++) {
        object * o = read_object();
        inc(o);
        array_set_obj(r, i, o);
    }
    return r;
}

object * deserializer_core::read_scalar_array() {
    unsigned esz         = read_unsigned();
    size_t sz            = read_size_t();
    object * r           = alloc_sarray(esz, sz, sz);
    unsigned char * it   = sarray_cptr_core<unsigned char>(r);
    unsigned char * end  = it + sz*esz;
    for (; it != end; ++it)
        *it = m_in.get();
    return r;
}

object * deserializer_core::read_string_object() {
    size_t sz            = read_size_t();
    size_t len           = read_size_t();
    object * r           = alloc_string(sz, sz, len);
    unsigned char * it   = const_cast<unsigned char*>(reinterpret_cast<unsigned char const *>(c_str(r)));
    unsigned char * end  = it + sz;
    for (; it != end; ++it)
        *it = m_in.get();
    return r;
}

object * deserializer_core::read_external() {
    throw exception("serializer for external objects has not been implemented yet");
}

object * deserializer_core::read_object() {
    unsigned c = m_in.get();
    if (c == 0) {
        return box(read_unsigned());
    } else if (c == 1) {
        unsigned i = read_unsigned();
        if (i >= m_objs.size())
            throw corrupted_stream_exception();
        return m_objs[i];
    } else {
        object_kind k = static_cast<object_kind>(c - 2);
        object * r;
        switch (k) {
        case object_kind::Constructor:  r = read_constructor(); break;
        case object_kind::Closure:      r = read_closure(); break;
        case object_kind::Array:        r = read_array(); break;
        case object_kind::ScalarArray:  r = read_scalar_array(); break;
        case object_kind::String:       r = read_string_object(); break;
        case object_kind::MPZ:          r = alloc_mpz(read_mpz()); break;
        case object_kind::External:     r = read_external(); break;
        default: throw corrupted_stream_exception();
        }
        inc_ref(r);
        m_objs.push_back(r);
        return r;
    }
}
}
