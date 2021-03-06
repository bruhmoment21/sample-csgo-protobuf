// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: uifontfile_format.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "uifontfile_format.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* CUIFontFilePB_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CUIFontFilePB_reflection_ = NULL;
const ::google::protobuf::Descriptor* CUIFontFilePackagePB_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CUIFontFilePackagePB_reflection_ = NULL;
const ::google::protobuf::Descriptor* CUIFontFilePackagePB_CUIEncryptedFontFilePB_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CUIFontFilePackagePB_CUIEncryptedFontFilePB_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_uifontfile_5fformat_2eproto() {
  protobuf_AddDesc_uifontfile_5fformat_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "uifontfile_format.proto");
  GOOGLE_CHECK(file != NULL);
  CUIFontFilePB_descriptor_ = file->message_type(0);
  static const int CUIFontFilePB_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CUIFontFilePB, font_file_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CUIFontFilePB, opentype_font_data_),
  };
  CUIFontFilePB_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CUIFontFilePB_descriptor_,
      CUIFontFilePB::default_instance_,
      CUIFontFilePB_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CUIFontFilePB, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CUIFontFilePB, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CUIFontFilePB));
  CUIFontFilePackagePB_descriptor_ = file->message_type(1);
  static const int CUIFontFilePackagePB_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CUIFontFilePackagePB, package_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CUIFontFilePackagePB, encrypted_font_files_),
  };
  CUIFontFilePackagePB_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CUIFontFilePackagePB_descriptor_,
      CUIFontFilePackagePB::default_instance_,
      CUIFontFilePackagePB_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CUIFontFilePackagePB, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CUIFontFilePackagePB, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CUIFontFilePackagePB));
  CUIFontFilePackagePB_CUIEncryptedFontFilePB_descriptor_ = CUIFontFilePackagePB_descriptor_->nested_type(0);
  static const int CUIFontFilePackagePB_CUIEncryptedFontFilePB_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CUIFontFilePackagePB_CUIEncryptedFontFilePB, encrypted_contents_),
  };
  CUIFontFilePackagePB_CUIEncryptedFontFilePB_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CUIFontFilePackagePB_CUIEncryptedFontFilePB_descriptor_,
      CUIFontFilePackagePB_CUIEncryptedFontFilePB::default_instance_,
      CUIFontFilePackagePB_CUIEncryptedFontFilePB_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CUIFontFilePackagePB_CUIEncryptedFontFilePB, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CUIFontFilePackagePB_CUIEncryptedFontFilePB, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CUIFontFilePackagePB_CUIEncryptedFontFilePB));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_uifontfile_5fformat_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CUIFontFilePB_descriptor_, &CUIFontFilePB::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CUIFontFilePackagePB_descriptor_, &CUIFontFilePackagePB::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CUIFontFilePackagePB_CUIEncryptedFontFilePB_descriptor_, &CUIFontFilePackagePB_CUIEncryptedFontFilePB::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_uifontfile_5fformat_2eproto() {
  delete CUIFontFilePB::default_instance_;
  delete CUIFontFilePB_reflection_;
  delete CUIFontFilePackagePB::default_instance_;
  delete CUIFontFilePackagePB_reflection_;
  delete CUIFontFilePackagePB_CUIEncryptedFontFilePB::default_instance_;
  delete CUIFontFilePackagePB_CUIEncryptedFontFilePB_reflection_;
}

void protobuf_AddDesc_uifontfile_5fformat_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027uifontfile_format.proto\"C\n\rCUIFontFile"
    "PB\022\026\n\016font_file_name\030\001 \001(\t\022\032\n\022opentype_f"
    "ont_data\030\002 \001(\014\"\261\001\n\024CUIFontFilePackagePB\022"
    "\027\n\017package_version\030\001 \002(\r\022J\n\024encrypted_fo"
    "nt_files\030\002 \003(\0132,.CUIFontFilePackagePB.CU"
    "IEncryptedFontFilePB\0324\n\026CUIEncryptedFont"
    "FilePB\022\032\n\022encrypted_contents\030\001 \001(\014B\005H\001\200\001"
    "\000", 281);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "uifontfile_format.proto", &protobuf_RegisterTypes);
  CUIFontFilePB::default_instance_ = new CUIFontFilePB();
  CUIFontFilePackagePB::default_instance_ = new CUIFontFilePackagePB();
  CUIFontFilePackagePB_CUIEncryptedFontFilePB::default_instance_ = new CUIFontFilePackagePB_CUIEncryptedFontFilePB();
  CUIFontFilePB::default_instance_->InitAsDefaultInstance();
  CUIFontFilePackagePB::default_instance_->InitAsDefaultInstance();
  CUIFontFilePackagePB_CUIEncryptedFontFilePB::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_uifontfile_5fformat_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_uifontfile_5fformat_2eproto {
  StaticDescriptorInitializer_uifontfile_5fformat_2eproto() {
    protobuf_AddDesc_uifontfile_5fformat_2eproto();
  }
} static_descriptor_initializer_uifontfile_5fformat_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CUIFontFilePB::kFontFileNameFieldNumber;
const int CUIFontFilePB::kOpentypeFontDataFieldNumber;
#endif  // !_MSC_VER

CUIFontFilePB::CUIFontFilePB()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CUIFontFilePB::InitAsDefaultInstance() {
}

CUIFontFilePB::CUIFontFilePB(const CUIFontFilePB& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CUIFontFilePB::SharedCtor() {
  _cached_size_ = 0;
  font_file_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  opentype_font_data_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CUIFontFilePB::~CUIFontFilePB() {
  SharedDtor();
}

void CUIFontFilePB::SharedDtor() {
  if (font_file_name_ != &::google::protobuf::internal::kEmptyString) {
    delete font_file_name_;
  }
  if (opentype_font_data_ != &::google::protobuf::internal::kEmptyString) {
    delete opentype_font_data_;
  }
  if (this != default_instance_) {
  }
}

void CUIFontFilePB::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CUIFontFilePB::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CUIFontFilePB_descriptor_;
}

const CUIFontFilePB& CUIFontFilePB::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_uifontfile_5fformat_2eproto();
  return *default_instance_;
}

CUIFontFilePB* CUIFontFilePB::default_instance_ = NULL;

CUIFontFilePB* CUIFontFilePB::New() const {
  return new CUIFontFilePB;
}

void CUIFontFilePB::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_font_file_name()) {
      if (font_file_name_ != &::google::protobuf::internal::kEmptyString) {
        font_file_name_->clear();
      }
    }
    if (has_opentype_font_data()) {
      if (opentype_font_data_ != &::google::protobuf::internal::kEmptyString) {
        opentype_font_data_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CUIFontFilePB::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string font_file_name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_font_file_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->font_file_name().data(), this->font_file_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_opentype_font_data;
        break;
      }

      // optional bytes opentype_font_data = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_opentype_font_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_opentype_font_data()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CUIFontFilePB::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string font_file_name = 1;
  if (has_font_file_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->font_file_name().data(), this->font_file_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->font_file_name(), output);
  }

  // optional bytes opentype_font_data = 2;
  if (has_opentype_font_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->opentype_font_data(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CUIFontFilePB::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string font_file_name = 1;
  if (has_font_file_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->font_file_name().data(), this->font_file_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->font_file_name(), target);
  }

  // optional bytes opentype_font_data = 2;
  if (has_opentype_font_data()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->opentype_font_data(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CUIFontFilePB::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string font_file_name = 1;
    if (has_font_file_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->font_file_name());
    }

    // optional bytes opentype_font_data = 2;
    if (has_opentype_font_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->opentype_font_data());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CUIFontFilePB::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CUIFontFilePB* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CUIFontFilePB*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CUIFontFilePB::MergeFrom(const CUIFontFilePB& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_font_file_name()) {
      set_font_file_name(from.font_file_name());
    }
    if (from.has_opentype_font_data()) {
      set_opentype_font_data(from.opentype_font_data());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CUIFontFilePB::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CUIFontFilePB::CopyFrom(const CUIFontFilePB& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CUIFontFilePB::IsInitialized() const {

  return true;
}

void CUIFontFilePB::Swap(CUIFontFilePB* other) {
  if (other != this) {
    std::swap(font_file_name_, other->font_file_name_);
    std::swap(opentype_font_data_, other->opentype_font_data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CUIFontFilePB::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CUIFontFilePB_descriptor_;
  metadata.reflection = CUIFontFilePB_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CUIFontFilePackagePB_CUIEncryptedFontFilePB::kEncryptedContentsFieldNumber;
#endif  // !_MSC_VER

CUIFontFilePackagePB_CUIEncryptedFontFilePB::CUIFontFilePackagePB_CUIEncryptedFontFilePB()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CUIFontFilePackagePB_CUIEncryptedFontFilePB::InitAsDefaultInstance() {
}

CUIFontFilePackagePB_CUIEncryptedFontFilePB::CUIFontFilePackagePB_CUIEncryptedFontFilePB(const CUIFontFilePackagePB_CUIEncryptedFontFilePB& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CUIFontFilePackagePB_CUIEncryptedFontFilePB::SharedCtor() {
  _cached_size_ = 0;
  encrypted_contents_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CUIFontFilePackagePB_CUIEncryptedFontFilePB::~CUIFontFilePackagePB_CUIEncryptedFontFilePB() {
  SharedDtor();
}

void CUIFontFilePackagePB_CUIEncryptedFontFilePB::SharedDtor() {
  if (encrypted_contents_ != &::google::protobuf::internal::kEmptyString) {
    delete encrypted_contents_;
  }
  if (this != default_instance_) {
  }
}

void CUIFontFilePackagePB_CUIEncryptedFontFilePB::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CUIFontFilePackagePB_CUIEncryptedFontFilePB::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CUIFontFilePackagePB_CUIEncryptedFontFilePB_descriptor_;
}

const CUIFontFilePackagePB_CUIEncryptedFontFilePB& CUIFontFilePackagePB_CUIEncryptedFontFilePB::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_uifontfile_5fformat_2eproto();
  return *default_instance_;
}

CUIFontFilePackagePB_CUIEncryptedFontFilePB* CUIFontFilePackagePB_CUIEncryptedFontFilePB::default_instance_ = NULL;

CUIFontFilePackagePB_CUIEncryptedFontFilePB* CUIFontFilePackagePB_CUIEncryptedFontFilePB::New() const {
  return new CUIFontFilePackagePB_CUIEncryptedFontFilePB;
}

void CUIFontFilePackagePB_CUIEncryptedFontFilePB::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_encrypted_contents()) {
      if (encrypted_contents_ != &::google::protobuf::internal::kEmptyString) {
        encrypted_contents_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CUIFontFilePackagePB_CUIEncryptedFontFilePB::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes encrypted_contents = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_encrypted_contents()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CUIFontFilePackagePB_CUIEncryptedFontFilePB::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bytes encrypted_contents = 1;
  if (has_encrypted_contents()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      1, this->encrypted_contents(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CUIFontFilePackagePB_CUIEncryptedFontFilePB::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional bytes encrypted_contents = 1;
  if (has_encrypted_contents()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->encrypted_contents(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CUIFontFilePackagePB_CUIEncryptedFontFilePB::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bytes encrypted_contents = 1;
    if (has_encrypted_contents()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->encrypted_contents());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CUIFontFilePackagePB_CUIEncryptedFontFilePB::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CUIFontFilePackagePB_CUIEncryptedFontFilePB* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CUIFontFilePackagePB_CUIEncryptedFontFilePB*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CUIFontFilePackagePB_CUIEncryptedFontFilePB::MergeFrom(const CUIFontFilePackagePB_CUIEncryptedFontFilePB& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_encrypted_contents()) {
      set_encrypted_contents(from.encrypted_contents());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CUIFontFilePackagePB_CUIEncryptedFontFilePB::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CUIFontFilePackagePB_CUIEncryptedFontFilePB::CopyFrom(const CUIFontFilePackagePB_CUIEncryptedFontFilePB& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CUIFontFilePackagePB_CUIEncryptedFontFilePB::IsInitialized() const {

  return true;
}

void CUIFontFilePackagePB_CUIEncryptedFontFilePB::Swap(CUIFontFilePackagePB_CUIEncryptedFontFilePB* other) {
  if (other != this) {
    std::swap(encrypted_contents_, other->encrypted_contents_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CUIFontFilePackagePB_CUIEncryptedFontFilePB::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CUIFontFilePackagePB_CUIEncryptedFontFilePB_descriptor_;
  metadata.reflection = CUIFontFilePackagePB_CUIEncryptedFontFilePB_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int CUIFontFilePackagePB::kPackageVersionFieldNumber;
const int CUIFontFilePackagePB::kEncryptedFontFilesFieldNumber;
#endif  // !_MSC_VER

CUIFontFilePackagePB::CUIFontFilePackagePB()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CUIFontFilePackagePB::InitAsDefaultInstance() {
}

CUIFontFilePackagePB::CUIFontFilePackagePB(const CUIFontFilePackagePB& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CUIFontFilePackagePB::SharedCtor() {
  _cached_size_ = 0;
  package_version_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CUIFontFilePackagePB::~CUIFontFilePackagePB() {
  SharedDtor();
}

void CUIFontFilePackagePB::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CUIFontFilePackagePB::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CUIFontFilePackagePB::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CUIFontFilePackagePB_descriptor_;
}

const CUIFontFilePackagePB& CUIFontFilePackagePB::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_uifontfile_5fformat_2eproto();
  return *default_instance_;
}

CUIFontFilePackagePB* CUIFontFilePackagePB::default_instance_ = NULL;

CUIFontFilePackagePB* CUIFontFilePackagePB::New() const {
  return new CUIFontFilePackagePB;
}

void CUIFontFilePackagePB::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    package_version_ = 0u;
  }
  encrypted_font_files_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CUIFontFilePackagePB::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 package_version = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &package_version_)));
          set_has_package_version();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_encrypted_font_files;
        break;
      }

      // repeated .CUIFontFilePackagePB.CUIEncryptedFontFilePB encrypted_font_files = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_encrypted_font_files:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_encrypted_font_files()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_encrypted_font_files;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CUIFontFilePackagePB::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 package_version = 1;
  if (has_package_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->package_version(), output);
  }

  // repeated .CUIFontFilePackagePB.CUIEncryptedFontFilePB encrypted_font_files = 2;
  for (int i = 0; i < this->encrypted_font_files_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->encrypted_font_files(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CUIFontFilePackagePB::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 package_version = 1;
  if (has_package_version()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->package_version(), target);
  }

  // repeated .CUIFontFilePackagePB.CUIEncryptedFontFilePB encrypted_font_files = 2;
  for (int i = 0; i < this->encrypted_font_files_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->encrypted_font_files(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CUIFontFilePackagePB::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 package_version = 1;
    if (has_package_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->package_version());
    }

  }
  // repeated .CUIFontFilePackagePB.CUIEncryptedFontFilePB encrypted_font_files = 2;
  total_size += 1 * this->encrypted_font_files_size();
  for (int i = 0; i < this->encrypted_font_files_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->encrypted_font_files(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CUIFontFilePackagePB::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CUIFontFilePackagePB* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CUIFontFilePackagePB*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CUIFontFilePackagePB::MergeFrom(const CUIFontFilePackagePB& from) {
  GOOGLE_CHECK_NE(&from, this);
  encrypted_font_files_.MergeFrom(from.encrypted_font_files_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_package_version()) {
      set_package_version(from.package_version());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CUIFontFilePackagePB::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CUIFontFilePackagePB::CopyFrom(const CUIFontFilePackagePB& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CUIFontFilePackagePB::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void CUIFontFilePackagePB::Swap(CUIFontFilePackagePB* other) {
  if (other != this) {
    std::swap(package_version_, other->package_version_);
    encrypted_font_files_.Swap(&other->encrypted_font_files_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CUIFontFilePackagePB::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CUIFontFilePackagePB_descriptor_;
  metadata.reflection = CUIFontFilePackagePB_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
