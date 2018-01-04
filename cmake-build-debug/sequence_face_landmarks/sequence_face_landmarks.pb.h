// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sequence_face_landmarks.proto

#ifndef PROTOBUF_sequence_5fface_5flandmarks_2eproto__INCLUDED
#define PROTOBUF_sequence_5fface_5flandmarks_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace sfl {
namespace io {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_sequence_5fface_5flandmarks_2eproto();
void protobuf_AssignDesc_sequence_5fface_5flandmarks_2eproto();
void protobuf_ShutdownFile_sequence_5fface_5flandmarks_2eproto();

class BoundingBox;
class Face;
class Frame;
class Point;
class Sequence;

// ===================================================================

class Sequence : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sfl.io.Sequence) */ {
 public:
  Sequence();
  virtual ~Sequence();

  Sequence(const Sequence& from);

  inline Sequence& operator=(const Sequence& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Sequence& default_instance();

  void Swap(Sequence* other);

  // implements Message ----------------------------------------------

  inline Sequence* New() const { return New(NULL); }

  Sequence* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sequence& from);
  void MergeFrom(const Sequence& from);
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
  void InternalSwap(Sequence* other);
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

  // repeated .sfl.io.Frame frames = 1;
  int frames_size() const;
  void clear_frames();
  static const int kFramesFieldNumber = 1;
  const ::sfl::io::Frame& frames(int index) const;
  ::sfl::io::Frame* mutable_frames(int index);
  ::sfl::io::Frame* add_frames();
  ::google::protobuf::RepeatedPtrField< ::sfl::io::Frame >*
      mutable_frames();
  const ::google::protobuf::RepeatedPtrField< ::sfl::io::Frame >&
      frames() const;

  // optional string input_path = 2;
  void clear_input_path();
  static const int kInputPathFieldNumber = 2;
  const ::std::string& input_path() const;
  void set_input_path(const ::std::string& value);
  void set_input_path(const char* value);
  void set_input_path(const char* value, size_t size);
  ::std::string* mutable_input_path();
  ::std::string* release_input_path();
  void set_allocated_input_path(::std::string* input_path);

  // @@protoc_insertion_point(class_scope:sfl.io.Sequence)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::sfl::io::Frame > frames_;
  ::google::protobuf::internal::ArenaStringPtr input_path_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_sequence_5fface_5flandmarks_2eproto();
  friend void protobuf_AssignDesc_sequence_5fface_5flandmarks_2eproto();
  friend void protobuf_ShutdownFile_sequence_5fface_5flandmarks_2eproto();

  void InitAsDefaultInstance();
  static Sequence* default_instance_;
};
// -------------------------------------------------------------------

class Frame : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sfl.io.Frame) */ {
 public:
  Frame();
  virtual ~Frame();

  Frame(const Frame& from);

  inline Frame& operator=(const Frame& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Frame& default_instance();

  void Swap(Frame* other);

  // implements Message ----------------------------------------------

  inline Frame* New() const { return New(NULL); }

  Frame* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Frame& from);
  void MergeFrom(const Frame& from);
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
  void InternalSwap(Frame* other);
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

  // optional uint32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // optional uint32 width = 2;
  void clear_width();
  static const int kWidthFieldNumber = 2;
  ::google::protobuf::uint32 width() const;
  void set_width(::google::protobuf::uint32 value);

  // optional uint32 height = 3;
  void clear_height();
  static const int kHeightFieldNumber = 3;
  ::google::protobuf::uint32 height() const;
  void set_height(::google::protobuf::uint32 value);

  // repeated .sfl.io.Face faces = 4;
  int faces_size() const;
  void clear_faces();
  static const int kFacesFieldNumber = 4;
  const ::sfl::io::Face& faces(int index) const;
  ::sfl::io::Face* mutable_faces(int index);
  ::sfl::io::Face* add_faces();
  ::google::protobuf::RepeatedPtrField< ::sfl::io::Face >*
      mutable_faces();
  const ::google::protobuf::RepeatedPtrField< ::sfl::io::Face >&
      faces() const;

  // @@protoc_insertion_point(class_scope:sfl.io.Frame)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint32 id_;
  ::google::protobuf::uint32 width_;
  ::google::protobuf::RepeatedPtrField< ::sfl::io::Face > faces_;
  ::google::protobuf::uint32 height_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_sequence_5fface_5flandmarks_2eproto();
  friend void protobuf_AssignDesc_sequence_5fface_5flandmarks_2eproto();
  friend void protobuf_ShutdownFile_sequence_5fface_5flandmarks_2eproto();

  void InitAsDefaultInstance();
  static Frame* default_instance_;
};
// -------------------------------------------------------------------

class Face : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sfl.io.Face) */ {
 public:
  Face();
  virtual ~Face();

  Face(const Face& from);

  inline Face& operator=(const Face& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Face& default_instance();

  void Swap(Face* other);

  // implements Message ----------------------------------------------

  inline Face* New() const { return New(NULL); }

  Face* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Face& from);
  void MergeFrom(const Face& from);
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
  void InternalSwap(Face* other);
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

  // optional uint32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // optional .sfl.io.BoundingBox bbox = 2;
  bool has_bbox() const;
  void clear_bbox();
  static const int kBboxFieldNumber = 2;
  const ::sfl::io::BoundingBox& bbox() const;
  ::sfl::io::BoundingBox* mutable_bbox();
  ::sfl::io::BoundingBox* release_bbox();
  void set_allocated_bbox(::sfl::io::BoundingBox* bbox);

  // repeated .sfl.io.Point landmarks = 3;
  int landmarks_size() const;
  void clear_landmarks();
  static const int kLandmarksFieldNumber = 3;
  const ::sfl::io::Point& landmarks(int index) const;
  ::sfl::io::Point* mutable_landmarks(int index);
  ::sfl::io::Point* add_landmarks();
  ::google::protobuf::RepeatedPtrField< ::sfl::io::Point >*
      mutable_landmarks();
  const ::google::protobuf::RepeatedPtrField< ::sfl::io::Point >&
      landmarks() const;

  // @@protoc_insertion_point(class_scope:sfl.io.Face)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::sfl::io::BoundingBox* bbox_;
  ::google::protobuf::RepeatedPtrField< ::sfl::io::Point > landmarks_;
  ::google::protobuf::uint32 id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_sequence_5fface_5flandmarks_2eproto();
  friend void protobuf_AssignDesc_sequence_5fface_5flandmarks_2eproto();
  friend void protobuf_ShutdownFile_sequence_5fface_5flandmarks_2eproto();

  void InitAsDefaultInstance();
  static Face* default_instance_;
};
// -------------------------------------------------------------------

class BoundingBox : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sfl.io.BoundingBox) */ {
 public:
  BoundingBox();
  virtual ~BoundingBox();

  BoundingBox(const BoundingBox& from);

  inline BoundingBox& operator=(const BoundingBox& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BoundingBox& default_instance();

  void Swap(BoundingBox* other);

  // implements Message ----------------------------------------------

  inline BoundingBox* New() const { return New(NULL); }

  BoundingBox* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BoundingBox& from);
  void MergeFrom(const BoundingBox& from);
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
  void InternalSwap(BoundingBox* other);
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

  // optional int32 left = 1;
  void clear_left();
  static const int kLeftFieldNumber = 1;
  ::google::protobuf::int32 left() const;
  void set_left(::google::protobuf::int32 value);

  // optional int32 top = 2;
  void clear_top();
  static const int kTopFieldNumber = 2;
  ::google::protobuf::int32 top() const;
  void set_top(::google::protobuf::int32 value);

  // optional uint32 width = 3;
  void clear_width();
  static const int kWidthFieldNumber = 3;
  ::google::protobuf::uint32 width() const;
  void set_width(::google::protobuf::uint32 value);

  // optional uint32 height = 4;
  void clear_height();
  static const int kHeightFieldNumber = 4;
  ::google::protobuf::uint32 height() const;
  void set_height(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:sfl.io.BoundingBox)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 left_;
  ::google::protobuf::int32 top_;
  ::google::protobuf::uint32 width_;
  ::google::protobuf::uint32 height_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_sequence_5fface_5flandmarks_2eproto();
  friend void protobuf_AssignDesc_sequence_5fface_5flandmarks_2eproto();
  friend void protobuf_ShutdownFile_sequence_5fface_5flandmarks_2eproto();

  void InitAsDefaultInstance();
  static BoundingBox* default_instance_;
};
// -------------------------------------------------------------------

class Point : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sfl.io.Point) */ {
 public:
  Point();
  virtual ~Point();

  Point(const Point& from);

  inline Point& operator=(const Point& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Point& default_instance();

  void Swap(Point* other);

  // implements Message ----------------------------------------------

  inline Point* New() const { return New(NULL); }

  Point* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Point& from);
  void MergeFrom(const Point& from);
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
  void InternalSwap(Point* other);
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

  // optional int32 x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  ::google::protobuf::int32 x() const;
  void set_x(::google::protobuf::int32 value);

  // optional int32 y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  ::google::protobuf::int32 y() const;
  void set_y(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:sfl.io.Point)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_sequence_5fface_5flandmarks_2eproto();
  friend void protobuf_AssignDesc_sequence_5fface_5flandmarks_2eproto();
  friend void protobuf_ShutdownFile_sequence_5fface_5flandmarks_2eproto();

  void InitAsDefaultInstance();
  static Point* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Sequence

// repeated .sfl.io.Frame frames = 1;
inline int Sequence::frames_size() const {
  return frames_.size();
}
inline void Sequence::clear_frames() {
  frames_.Clear();
}
inline const ::sfl::io::Frame& Sequence::frames(int index) const {
  // @@protoc_insertion_point(field_get:sfl.io.Sequence.frames)
  return frames_.Get(index);
}
inline ::sfl::io::Frame* Sequence::mutable_frames(int index) {
  // @@protoc_insertion_point(field_mutable:sfl.io.Sequence.frames)
  return frames_.Mutable(index);
}
inline ::sfl::io::Frame* Sequence::add_frames() {
  // @@protoc_insertion_point(field_add:sfl.io.Sequence.frames)
  return frames_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::sfl::io::Frame >*
Sequence::mutable_frames() {
  // @@protoc_insertion_point(field_mutable_list:sfl.io.Sequence.frames)
  return &frames_;
}
inline const ::google::protobuf::RepeatedPtrField< ::sfl::io::Frame >&
Sequence::frames() const {
  // @@protoc_insertion_point(field_list:sfl.io.Sequence.frames)
  return frames_;
}

// optional string input_path = 2;
inline void Sequence::clear_input_path() {
  input_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Sequence::input_path() const {
  // @@protoc_insertion_point(field_get:sfl.io.Sequence.input_path)
  return input_path_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Sequence::set_input_path(const ::std::string& value) {
  
  input_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sfl.io.Sequence.input_path)
}
inline void Sequence::set_input_path(const char* value) {
  
  input_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sfl.io.Sequence.input_path)
}
inline void Sequence::set_input_path(const char* value, size_t size) {
  
  input_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sfl.io.Sequence.input_path)
}
inline ::std::string* Sequence::mutable_input_path() {
  
  // @@protoc_insertion_point(field_mutable:sfl.io.Sequence.input_path)
  return input_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Sequence::release_input_path() {
  // @@protoc_insertion_point(field_release:sfl.io.Sequence.input_path)
  
  return input_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Sequence::set_allocated_input_path(::std::string* input_path) {
  if (input_path != NULL) {
    
  } else {
    
  }
  input_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), input_path);
  // @@protoc_insertion_point(field_set_allocated:sfl.io.Sequence.input_path)
}

// -------------------------------------------------------------------

// Frame

// optional uint32 id = 1;
inline void Frame::clear_id() {
  id_ = 0u;
}
inline ::google::protobuf::uint32 Frame::id() const {
  // @@protoc_insertion_point(field_get:sfl.io.Frame.id)
  return id_;
}
inline void Frame::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:sfl.io.Frame.id)
}

// optional uint32 width = 2;
inline void Frame::clear_width() {
  width_ = 0u;
}
inline ::google::protobuf::uint32 Frame::width() const {
  // @@protoc_insertion_point(field_get:sfl.io.Frame.width)
  return width_;
}
inline void Frame::set_width(::google::protobuf::uint32 value) {
  
  width_ = value;
  // @@protoc_insertion_point(field_set:sfl.io.Frame.width)
}

// optional uint32 height = 3;
inline void Frame::clear_height() {
  height_ = 0u;
}
inline ::google::protobuf::uint32 Frame::height() const {
  // @@protoc_insertion_point(field_get:sfl.io.Frame.height)
  return height_;
}
inline void Frame::set_height(::google::protobuf::uint32 value) {
  
  height_ = value;
  // @@protoc_insertion_point(field_set:sfl.io.Frame.height)
}

// repeated .sfl.io.Face faces = 4;
inline int Frame::faces_size() const {
  return faces_.size();
}
inline void Frame::clear_faces() {
  faces_.Clear();
}
inline const ::sfl::io::Face& Frame::faces(int index) const {
  // @@protoc_insertion_point(field_get:sfl.io.Frame.faces)
  return faces_.Get(index);
}
inline ::sfl::io::Face* Frame::mutable_faces(int index) {
  // @@protoc_insertion_point(field_mutable:sfl.io.Frame.faces)
  return faces_.Mutable(index);
}
inline ::sfl::io::Face* Frame::add_faces() {
  // @@protoc_insertion_point(field_add:sfl.io.Frame.faces)
  return faces_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::sfl::io::Face >*
Frame::mutable_faces() {
  // @@protoc_insertion_point(field_mutable_list:sfl.io.Frame.faces)
  return &faces_;
}
inline const ::google::protobuf::RepeatedPtrField< ::sfl::io::Face >&
Frame::faces() const {
  // @@protoc_insertion_point(field_list:sfl.io.Frame.faces)
  return faces_;
}

// -------------------------------------------------------------------

// Face

// optional uint32 id = 1;
inline void Face::clear_id() {
  id_ = 0u;
}
inline ::google::protobuf::uint32 Face::id() const {
  // @@protoc_insertion_point(field_get:sfl.io.Face.id)
  return id_;
}
inline void Face::set_id(::google::protobuf::uint32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:sfl.io.Face.id)
}

// optional .sfl.io.BoundingBox bbox = 2;
inline bool Face::has_bbox() const {
  return !_is_default_instance_ && bbox_ != NULL;
}
inline void Face::clear_bbox() {
  if (GetArenaNoVirtual() == NULL && bbox_ != NULL) delete bbox_;
  bbox_ = NULL;
}
inline const ::sfl::io::BoundingBox& Face::bbox() const {
  // @@protoc_insertion_point(field_get:sfl.io.Face.bbox)
  return bbox_ != NULL ? *bbox_ : *default_instance_->bbox_;
}
inline ::sfl::io::BoundingBox* Face::mutable_bbox() {
  
  if (bbox_ == NULL) {
    bbox_ = new ::sfl::io::BoundingBox;
  }
  // @@protoc_insertion_point(field_mutable:sfl.io.Face.bbox)
  return bbox_;
}
inline ::sfl::io::BoundingBox* Face::release_bbox() {
  // @@protoc_insertion_point(field_release:sfl.io.Face.bbox)
  
  ::sfl::io::BoundingBox* temp = bbox_;
  bbox_ = NULL;
  return temp;
}
inline void Face::set_allocated_bbox(::sfl::io::BoundingBox* bbox) {
  delete bbox_;
  bbox_ = bbox;
  if (bbox) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:sfl.io.Face.bbox)
}

// repeated .sfl.io.Point landmarks = 3;
inline int Face::landmarks_size() const {
  return landmarks_.size();
}
inline void Face::clear_landmarks() {
  landmarks_.Clear();
}
inline const ::sfl::io::Point& Face::landmarks(int index) const {
  // @@protoc_insertion_point(field_get:sfl.io.Face.landmarks)
  return landmarks_.Get(index);
}
inline ::sfl::io::Point* Face::mutable_landmarks(int index) {
  // @@protoc_insertion_point(field_mutable:sfl.io.Face.landmarks)
  return landmarks_.Mutable(index);
}
inline ::sfl::io::Point* Face::add_landmarks() {
  // @@protoc_insertion_point(field_add:sfl.io.Face.landmarks)
  return landmarks_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::sfl::io::Point >*
Face::mutable_landmarks() {
  // @@protoc_insertion_point(field_mutable_list:sfl.io.Face.landmarks)
  return &landmarks_;
}
inline const ::google::protobuf::RepeatedPtrField< ::sfl::io::Point >&
Face::landmarks() const {
  // @@protoc_insertion_point(field_list:sfl.io.Face.landmarks)
  return landmarks_;
}

// -------------------------------------------------------------------

// BoundingBox

// optional int32 left = 1;
inline void BoundingBox::clear_left() {
  left_ = 0;
}
inline ::google::protobuf::int32 BoundingBox::left() const {
  // @@protoc_insertion_point(field_get:sfl.io.BoundingBox.left)
  return left_;
}
inline void BoundingBox::set_left(::google::protobuf::int32 value) {
  
  left_ = value;
  // @@protoc_insertion_point(field_set:sfl.io.BoundingBox.left)
}

// optional int32 top = 2;
inline void BoundingBox::clear_top() {
  top_ = 0;
}
inline ::google::protobuf::int32 BoundingBox::top() const {
  // @@protoc_insertion_point(field_get:sfl.io.BoundingBox.top)
  return top_;
}
inline void BoundingBox::set_top(::google::protobuf::int32 value) {
  
  top_ = value;
  // @@protoc_insertion_point(field_set:sfl.io.BoundingBox.top)
}

// optional uint32 width = 3;
inline void BoundingBox::clear_width() {
  width_ = 0u;
}
inline ::google::protobuf::uint32 BoundingBox::width() const {
  // @@protoc_insertion_point(field_get:sfl.io.BoundingBox.width)
  return width_;
}
inline void BoundingBox::set_width(::google::protobuf::uint32 value) {
  
  width_ = value;
  // @@protoc_insertion_point(field_set:sfl.io.BoundingBox.width)
}

// optional uint32 height = 4;
inline void BoundingBox::clear_height() {
  height_ = 0u;
}
inline ::google::protobuf::uint32 BoundingBox::height() const {
  // @@protoc_insertion_point(field_get:sfl.io.BoundingBox.height)
  return height_;
}
inline void BoundingBox::set_height(::google::protobuf::uint32 value) {
  
  height_ = value;
  // @@protoc_insertion_point(field_set:sfl.io.BoundingBox.height)
}

// -------------------------------------------------------------------

// Point

// optional int32 x = 1;
inline void Point::clear_x() {
  x_ = 0;
}
inline ::google::protobuf::int32 Point::x() const {
  // @@protoc_insertion_point(field_get:sfl.io.Point.x)
  return x_;
}
inline void Point::set_x(::google::protobuf::int32 value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:sfl.io.Point.x)
}

// optional int32 y = 2;
inline void Point::clear_y() {
  y_ = 0;
}
inline ::google::protobuf::int32 Point::y() const {
  // @@protoc_insertion_point(field_get:sfl.io.Point.y)
  return y_;
}
inline void Point::set_y(::google::protobuf::int32 value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:sfl.io.Point.y)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace io
}  // namespace sfl

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sequence_5fface_5flandmarks_2eproto__INCLUDED