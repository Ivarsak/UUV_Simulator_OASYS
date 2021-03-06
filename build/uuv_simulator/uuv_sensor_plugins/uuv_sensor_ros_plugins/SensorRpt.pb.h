// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SensorRpt.proto

#ifndef PROTOBUF_SensorRpt_2eproto__INCLUDED
#define PROTOBUF_SensorRpt_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "vector3d.pb.h"
// @@protoc_insertion_point(includes)

namespace sensor_msgs {
namespace msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_SensorRpt_2eproto();
void protobuf_AssignDesc_SensorRpt_2eproto();
void protobuf_ShutdownFile_SensorRpt_2eproto();

class Rpt;

// ===================================================================

class Rpt : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sensor_msgs.msgs.Rpt) */ {
 public:
  Rpt();
  virtual ~Rpt();

  Rpt(const Rpt& from);

  inline Rpt& operator=(const Rpt& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Rpt& default_instance();

  void Swap(Rpt* other);

  // implements Message ----------------------------------------------

  inline Rpt* New() const { return New(NULL); }

  Rpt* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Rpt& from);
  void MergeFrom(const Rpt& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Rpt* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .gazebo.msgs.Vector3d position = 1;
  bool has_position() const;
  void clear_position();
  static const int kPositionFieldNumber = 1;
  const ::gazebo::msgs::Vector3d& position() const;
  ::gazebo::msgs::Vector3d* mutable_position();
  ::gazebo::msgs::Vector3d* release_position();
  void set_allocated_position(::gazebo::msgs::Vector3d* position);

  // repeated float position_covariance = 2 [packed = true];
  int position_covariance_size() const;
  void clear_position_covariance();
  static const int kPositionCovarianceFieldNumber = 2;
  float position_covariance(int index) const;
  void set_position_covariance(int index, float value);
  void add_position_covariance(float value);
  const ::google::protobuf::RepeatedField< float >&
      position_covariance() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_position_covariance();

  // @@protoc_insertion_point(class_scope:sensor_msgs.msgs.Rpt)
 private:
  inline void set_has_position();
  inline void clear_has_position();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gazebo::msgs::Vector3d* position_;
  ::google::protobuf::RepeatedField< float > position_covariance_;
  mutable int _position_covariance_cached_byte_size_;
  friend void  protobuf_AddDesc_SensorRpt_2eproto();
  friend void protobuf_AssignDesc_SensorRpt_2eproto();
  friend void protobuf_ShutdownFile_SensorRpt_2eproto();

  void InitAsDefaultInstance();
  static Rpt* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Rpt

// required .gazebo.msgs.Vector3d position = 1;
inline bool Rpt::has_position() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Rpt::set_has_position() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Rpt::clear_has_position() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Rpt::clear_position() {
  if (position_ != NULL) position_->::gazebo::msgs::Vector3d::Clear();
  clear_has_position();
}
inline const ::gazebo::msgs::Vector3d& Rpt::position() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Rpt.position)
  return position_ != NULL ? *position_ : *default_instance_->position_;
}
inline ::gazebo::msgs::Vector3d* Rpt::mutable_position() {
  set_has_position();
  if (position_ == NULL) {
    position_ = new ::gazebo::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:sensor_msgs.msgs.Rpt.position)
  return position_;
}
inline ::gazebo::msgs::Vector3d* Rpt::release_position() {
  // @@protoc_insertion_point(field_release:sensor_msgs.msgs.Rpt.position)
  clear_has_position();
  ::gazebo::msgs::Vector3d* temp = position_;
  position_ = NULL;
  return temp;
}
inline void Rpt::set_allocated_position(::gazebo::msgs::Vector3d* position) {
  delete position_;
  position_ = position;
  if (position) {
    set_has_position();
  } else {
    clear_has_position();
  }
  // @@protoc_insertion_point(field_set_allocated:sensor_msgs.msgs.Rpt.position)
}

// repeated float position_covariance = 2 [packed = true];
inline int Rpt::position_covariance_size() const {
  return position_covariance_.size();
}
inline void Rpt::clear_position_covariance() {
  position_covariance_.Clear();
}
inline float Rpt::position_covariance(int index) const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Rpt.position_covariance)
  return position_covariance_.Get(index);
}
inline void Rpt::set_position_covariance(int index, float value) {
  position_covariance_.Set(index, value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Rpt.position_covariance)
}
inline void Rpt::add_position_covariance(float value) {
  position_covariance_.Add(value);
  // @@protoc_insertion_point(field_add:sensor_msgs.msgs.Rpt.position_covariance)
}
inline const ::google::protobuf::RepeatedField< float >&
Rpt::position_covariance() const {
  // @@protoc_insertion_point(field_list:sensor_msgs.msgs.Rpt.position_covariance)
  return position_covariance_;
}
inline ::google::protobuf::RepeatedField< float >*
Rpt::mutable_position_covariance() {
  // @@protoc_insertion_point(field_mutable_list:sensor_msgs.msgs.Rpt.position_covariance)
  return &position_covariance_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace sensor_msgs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SensorRpt_2eproto__INCLUDED
