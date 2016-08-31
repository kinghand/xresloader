// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dependency.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dependency.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_dependency_2eproto() {
  delete dep_cfg::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_dependency_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_dependency_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::protobuf_AddDesc_dep_5flevel2_2eproto();
  dep_cfg::default_instance_ = new dep_cfg();
  dep_cfg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dependency_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_dependency_2eproto_once_);
void protobuf_AddDesc_dependency_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_dependency_2eproto_once_,
                 &protobuf_AddDesc_dependency_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dependency_2eproto {
  StaticDescriptorInitializer_dependency_2eproto() {
    protobuf_AddDesc_dependency_2eproto();
  }
} static_descriptor_initializer_dependency_2eproto_;
#endif
bool game_const_config_IsValid(int value) {
  switch(value) {
    case 10:
    case 100:
    case 268:
    case 640:
    case 999:
    case 1000:
    case 1136:
    case 10000:
    case 9999999:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int dep_cfg::kIdFieldNumber;
const int dep_cfg::kNameFieldNumber;
const int dep_cfg::kDep2FieldNumber;
#endif  // !_MSC_VER

dep_cfg::dep_cfg()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:dep_cfg)
}

void dep_cfg::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  dep2_ = const_cast< ::dep2_cfg*>(
      ::dep2_cfg::internal_default_instance());
#else
  dep2_ = const_cast< ::dep2_cfg*>(&::dep2_cfg::default_instance());
#endif
}

dep_cfg::dep_cfg(const dep_cfg& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:dep_cfg)
}

void dep_cfg::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0u;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dep2_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

dep_cfg::~dep_cfg() {
  // @@protoc_insertion_point(destructor:dep_cfg)
  SharedDtor();
}

void dep_cfg::SharedDtor() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete dep2_;
  }
}

void dep_cfg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const dep_cfg& dep_cfg::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_dependency_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_dependency_2eproto();
#endif
  return *default_instance_;
}

dep_cfg* dep_cfg::default_instance_ = NULL;

dep_cfg* dep_cfg::New() const {
  return new dep_cfg;
}

void dep_cfg::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    id_ = 0u;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        name_->clear();
      }
    }
    if (has_dep2()) {
      if (dep2_ != NULL) dep2_->::dep2_cfg::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->clear();
}

bool dep_cfg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::StringOutputStream unknown_fields_string(
      mutable_unknown_fields());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string);
  // @@protoc_insertion_point(parse_start:dep_cfg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // optional string name = 2;
      case 2: {
        if (tag == 18) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_dep2;
        break;
      }

      // optional .dep2_cfg dep2 = 3;
      case 3: {
        if (tag == 26) {
         parse_dep2:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_dep2()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:dep_cfg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:dep_cfg)
  return false;
#undef DO_
}

void dep_cfg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:dep_cfg)
  // optional uint32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // optional string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // optional .dep2_cfg dep2 = 3;
  if (has_dep2()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, this->dep2(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   unknown_fields().size());
  // @@protoc_insertion_point(serialize_end:dep_cfg)
}

int dep_cfg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->id());
    }

    // optional string name = 2;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional .dep2_cfg dep2 = 3;
    if (has_dep2()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->dep2());
    }

  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void dep_cfg::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const dep_cfg*>(&from));
}

void dep_cfg::MergeFrom(const dep_cfg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_dep2()) {
      mutable_dep2()->::dep2_cfg::MergeFrom(from.dep2());
    }
  }
  mutable_unknown_fields()->append(from.unknown_fields());
}

void dep_cfg::CopyFrom(const dep_cfg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool dep_cfg::IsInitialized() const {

  return true;
}

void dep_cfg::Swap(dep_cfg* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(name_, other->name_);
    std::swap(dep2_, other->dep2_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.swap(other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string dep_cfg::GetTypeName() const {
  return "dep_cfg";
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
