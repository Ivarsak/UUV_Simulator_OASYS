// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SensorMagnetic.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SensorMagnetic.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace sensor_msgs {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* Magnetic_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Magnetic_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_SensorMagnetic_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_SensorMagnetic_2eproto() {
  protobuf_AddDesc_SensorMagnetic_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SensorMagnetic.proto");
  GOOGLE_CHECK(file != NULL);
  Magnetic_descriptor_ = file->message_type(0);
  static const int Magnetic_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Magnetic, magnetic_field_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Magnetic, magnetic_field_covariance_),
  };
  Magnetic_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Magnetic_descriptor_,
      Magnetic::default_instance_,
      Magnetic_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Magnetic, _has_bits_[0]),
      -1,
      -1,
      sizeof(Magnetic),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Magnetic, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SensorMagnetic_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Magnetic_descriptor_, &Magnetic::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SensorMagnetic_2eproto() {
  delete Magnetic::default_instance_;
  delete Magnetic_reflection_;
}

void protobuf_AddDesc_SensorMagnetic_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_SensorMagnetic_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::gazebo::msgs::protobuf_AddDesc_vector3d_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024SensorMagnetic.proto\022\020sensor_msgs.msgs"
    "\032\016vector3d.proto\"`\n\010Magnetic\022-\n\016magnetic"
    "_field\030\001 \002(\0132\025.gazebo.msgs.Vector3d\022%\n\031m"
    "agnetic_field_covariance\030\002 \003(\002B\002\020\001", 154);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SensorMagnetic.proto", &protobuf_RegisterTypes);
  Magnetic::default_instance_ = new Magnetic();
  Magnetic::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SensorMagnetic_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SensorMagnetic_2eproto {
  StaticDescriptorInitializer_SensorMagnetic_2eproto() {
    protobuf_AddDesc_SensorMagnetic_2eproto();
  }
} static_descriptor_initializer_SensorMagnetic_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Magnetic::kMagneticFieldFieldNumber;
const int Magnetic::kMagneticFieldCovarianceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Magnetic::Magnetic()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:sensor_msgs.msgs.Magnetic)
}

void Magnetic::InitAsDefaultInstance() {
  magnetic_field_ = const_cast< ::gazebo::msgs::Vector3d*>(&::gazebo::msgs::Vector3d::default_instance());
}

Magnetic::Magnetic(const Magnetic& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:sensor_msgs.msgs.Magnetic)
}

void Magnetic::SharedCtor() {
  _cached_size_ = 0;
  magnetic_field_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Magnetic::~Magnetic() {
  // @@protoc_insertion_point(destructor:sensor_msgs.msgs.Magnetic)
  SharedDtor();
}

void Magnetic::SharedDtor() {
  if (this != default_instance_) {
    delete magnetic_field_;
  }
}

void Magnetic::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Magnetic::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Magnetic_descriptor_;
}

const Magnetic& Magnetic::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SensorMagnetic_2eproto();
  return *default_instance_;
}

Magnetic* Magnetic::default_instance_ = NULL;

Magnetic* Magnetic::New(::google::protobuf::Arena* arena) const {
  Magnetic* n = new Magnetic;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Magnetic::Clear() {
// @@protoc_insertion_point(message_clear_start:sensor_msgs.msgs.Magnetic)
  if (has_magnetic_field()) {
    if (magnetic_field_ != NULL) magnetic_field_->::gazebo::msgs::Vector3d::Clear();
  }
  magnetic_field_covariance_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Magnetic::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sensor_msgs.msgs.Magnetic)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .gazebo.msgs.Vector3d magnetic_field = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_magnetic_field()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_magnetic_field_covariance;
        break;
      }

      // repeated float magnetic_field_covariance = 2 [packed = true];
      case 2: {
        if (tag == 18) {
         parse_magnetic_field_covariance:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_magnetic_field_covariance())));
        } else if (tag == 21) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 18, input, this->mutable_magnetic_field_covariance())));
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sensor_msgs.msgs.Magnetic)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sensor_msgs.msgs.Magnetic)
  return false;
#undef DO_
}

void Magnetic::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sensor_msgs.msgs.Magnetic)
  // required .gazebo.msgs.Vector3d magnetic_field = 1;
  if (has_magnetic_field()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->magnetic_field_, output);
  }

  // repeated float magnetic_field_covariance = 2 [packed = true];
  if (this->magnetic_field_covariance_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_magnetic_field_covariance_cached_byte_size_);
  }
  for (int i = 0; i < this->magnetic_field_covariance_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->magnetic_field_covariance(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:sensor_msgs.msgs.Magnetic)
}

::google::protobuf::uint8* Magnetic::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:sensor_msgs.msgs.Magnetic)
  // required .gazebo.msgs.Vector3d magnetic_field = 1;
  if (has_magnetic_field()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->magnetic_field_, false, target);
  }

  // repeated float magnetic_field_covariance = 2 [packed = true];
  if (this->magnetic_field_covariance_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _magnetic_field_covariance_cached_byte_size_, target);
  }
  for (int i = 0; i < this->magnetic_field_covariance_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->magnetic_field_covariance(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sensor_msgs.msgs.Magnetic)
  return target;
}

int Magnetic::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:sensor_msgs.msgs.Magnetic)
  int total_size = 0;

  // required .gazebo.msgs.Vector3d magnetic_field = 1;
  if (has_magnetic_field()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->magnetic_field_);
  }
  // repeated float magnetic_field_covariance = 2 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->magnetic_field_covariance_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _magnetic_field_covariance_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Magnetic::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sensor_msgs.msgs.Magnetic)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Magnetic* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Magnetic>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sensor_msgs.msgs.Magnetic)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sensor_msgs.msgs.Magnetic)
    MergeFrom(*source);
  }
}

void Magnetic::MergeFrom(const Magnetic& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sensor_msgs.msgs.Magnetic)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  magnetic_field_covariance_.MergeFrom(from.magnetic_field_covariance_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_magnetic_field()) {
      mutable_magnetic_field()->::gazebo::msgs::Vector3d::MergeFrom(from.magnetic_field());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void Magnetic::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sensor_msgs.msgs.Magnetic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Magnetic::CopyFrom(const Magnetic& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sensor_msgs.msgs.Magnetic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Magnetic::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_magnetic_field()) {
    if (!this->magnetic_field_->IsInitialized()) return false;
  }
  return true;
}

void Magnetic::Swap(Magnetic* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Magnetic::InternalSwap(Magnetic* other) {
  std::swap(magnetic_field_, other->magnetic_field_);
  magnetic_field_covariance_.UnsafeArenaSwap(&other->magnetic_field_covariance_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Magnetic::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Magnetic_descriptor_;
  metadata.reflection = Magnetic_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Magnetic

// required .gazebo.msgs.Vector3d magnetic_field = 1;
bool Magnetic::has_magnetic_field() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Magnetic::set_has_magnetic_field() {
  _has_bits_[0] |= 0x00000001u;
}
void Magnetic::clear_has_magnetic_field() {
  _has_bits_[0] &= ~0x00000001u;
}
void Magnetic::clear_magnetic_field() {
  if (magnetic_field_ != NULL) magnetic_field_->::gazebo::msgs::Vector3d::Clear();
  clear_has_magnetic_field();
}
const ::gazebo::msgs::Vector3d& Magnetic::magnetic_field() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Magnetic.magnetic_field)
  return magnetic_field_ != NULL ? *magnetic_field_ : *default_instance_->magnetic_field_;
}
::gazebo::msgs::Vector3d* Magnetic::mutable_magnetic_field() {
  set_has_magnetic_field();
  if (magnetic_field_ == NULL) {
    magnetic_field_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:sensor_msgs.msgs.Magnetic.magnetic_field)
  return magnetic_field_;
}
::gazebo::msgs::Vector3d* Magnetic::release_magnetic_field() {
  // @@protoc_insertion_point(field_release:sensor_msgs.msgs.Magnetic.magnetic_field)
  clear_has_magnetic_field();
  ::gazebo::msgs::Vector3d* temp = magnetic_field_;
  magnetic_field_ = NULL;
  return temp;
}
void Magnetic::set_allocated_magnetic_field(::gazebo::msgs::Vector3d* magnetic_field) {
  delete magnetic_field_;
  magnetic_field_ = magnetic_field;
  if (magnetic_field) {
    set_has_magnetic_field();
  } else {
    clear_has_magnetic_field();
  }
  // @@protoc_insertion_point(field_set_allocated:sensor_msgs.msgs.Magnetic.magnetic_field)
}

// repeated float magnetic_field_covariance = 2 [packed = true];
int Magnetic::magnetic_field_covariance_size() const {
  return magnetic_field_covariance_.size();
}
void Magnetic::clear_magnetic_field_covariance() {
  magnetic_field_covariance_.Clear();
}
 float Magnetic::magnetic_field_covariance(int index) const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Magnetic.magnetic_field_covariance)
  return magnetic_field_covariance_.Get(index);
}
 void Magnetic::set_magnetic_field_covariance(int index, float value) {
  magnetic_field_covariance_.Set(index, value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Magnetic.magnetic_field_covariance)
}
 void Magnetic::add_magnetic_field_covariance(float value) {
  magnetic_field_covariance_.Add(value);
  // @@protoc_insertion_point(field_add:sensor_msgs.msgs.Magnetic.magnetic_field_covariance)
}
 const ::google::protobuf::RepeatedField< float >&
Magnetic::magnetic_field_covariance() const {
  // @@protoc_insertion_point(field_list:sensor_msgs.msgs.Magnetic.magnetic_field_covariance)
  return magnetic_field_covariance_;
}
 ::google::protobuf::RepeatedField< float >*
Magnetic::mutable_magnetic_field_covariance() {
  // @@protoc_insertion_point(field_mutable_list:sensor_msgs.msgs.Magnetic.magnetic_field_covariance)
  return &magnetic_field_covariance_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace sensor_msgs

// @@protoc_insertion_point(global_scope)
