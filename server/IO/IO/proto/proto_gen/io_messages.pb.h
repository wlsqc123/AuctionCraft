// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: io_messages.proto
// Protobuf C++ Version: 4.25.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_io_5fmessages_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_io_5fmessages_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025003 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_io_5fmessages_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_io_5fmessages_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_io_5fmessages_2eproto;
namespace io {
class Request;
struct RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
class Response;
struct ResponseDefaultTypeInternal;
extern ResponseDefaultTypeInternal _Response_default_instance_;
class echo;
struct echoDefaultTypeInternal;
extern echoDefaultTypeInternal _echo_default_instance_;
}  // namespace io
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace io {

// ===================================================================


// -------------------------------------------------------------------

class echo final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:io.echo) */ {
 public:
  inline echo() : echo(nullptr) {}
  ~echo() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR echo(::google::protobuf::internal::ConstantInitialized);

  inline echo(const echo& from)
      : echo(nullptr, from) {}
  echo(echo&& from) noexcept
    : echo() {
    *this = ::std::move(from);
  }

  inline echo& operator=(const echo& from) {
    CopyFrom(from);
    return *this;
  }
  inline echo& operator=(echo&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const echo& default_instance() {
    return *internal_default_instance();
  }
  static inline const echo* internal_default_instance() {
    return reinterpret_cast<const echo*>(
               &_echo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(echo& a, echo& b) {
    a.Swap(&b);
  }
  inline void Swap(echo* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(echo* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  echo* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<echo>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const echo& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const echo& from) {
    echo::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(echo* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "io.echo";
  }
  protected:
  explicit echo(::google::protobuf::Arena* arena);
  echo(::google::protobuf::Arena* arena, const echo& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTextFieldNumber = 1,
  };
  // string text = 1;
  void clear_text() ;
  const std::string& text() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_text(Arg_&& arg, Args_... args);
  std::string* mutable_text();
  PROTOBUF_NODISCARD std::string* release_text();
  void set_allocated_text(std::string* value);

  private:
  const std::string& _internal_text() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_text(
      const std::string& value);
  std::string* _internal_mutable_text();

  public:
  // @@protoc_insertion_point(class_scope:io.echo)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      20, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr text_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_io_5fmessages_2eproto;
};// -------------------------------------------------------------------

class Response final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:io.Response) */ {
 public:
  inline Response() : Response(nullptr) {}
  ~Response() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Response(::google::protobuf::internal::ConstantInitialized);

  inline Response(const Response& from)
      : Response(nullptr, from) {}
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  inline Response& operator=(Response&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Response& default_instance() {
    return *internal_default_instance();
  }
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }
  inline void Swap(Response* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Response* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Response* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Response>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Response& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Response& from) {
    Response::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Response* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "io.Response";
  }
  protected:
  explicit Response(::google::protobuf::Arena* arena);
  Response(::google::protobuf::Arena* arena, const Response& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kResponseIdFieldNumber = 1,
    kPayloadFieldNumber = 2,
    kErrorMessageFieldNumber = 4,
    kSuccessFieldNumber = 3,
  };
  // string response_id = 1;
  void clear_response_id() ;
  const std::string& response_id() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_response_id(Arg_&& arg, Args_... args);
  std::string* mutable_response_id();
  PROTOBUF_NODISCARD std::string* release_response_id();
  void set_allocated_response_id(std::string* value);

  private:
  const std::string& _internal_response_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_response_id(
      const std::string& value);
  std::string* _internal_mutable_response_id();

  public:
  // string payload = 2;
  void clear_payload() ;
  const std::string& payload() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_payload(Arg_&& arg, Args_... args);
  std::string* mutable_payload();
  PROTOBUF_NODISCARD std::string* release_payload();
  void set_allocated_payload(std::string* value);

  private:
  const std::string& _internal_payload() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_payload(
      const std::string& value);
  std::string* _internal_mutable_payload();

  public:
  // string error_message = 4;
  void clear_error_message() ;
  const std::string& error_message() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_error_message(Arg_&& arg, Args_... args);
  std::string* mutable_error_message();
  PROTOBUF_NODISCARD std::string* release_error_message();
  void set_allocated_error_message(std::string* value);

  private:
  const std::string& _internal_error_message() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_error_message(
      const std::string& value);
  std::string* _internal_mutable_error_message();

  public:
  // bool success = 3;
  void clear_success() ;
  bool success() const;
  void set_success(bool value);

  private:
  bool _internal_success() const;
  void _internal_set_success(bool value);

  public:
  // @@protoc_insertion_point(class_scope:io.Response)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 4, 0,
      51, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr response_id_;
    ::google::protobuf::internal::ArenaStringPtr payload_;
    ::google::protobuf::internal::ArenaStringPtr error_message_;
    bool success_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_io_5fmessages_2eproto;
};// -------------------------------------------------------------------

class Request final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:io.Request) */ {
 public:
  inline Request() : Request(nullptr) {}
  ~Request() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Request(::google::protobuf::internal::ConstantInitialized);

  inline Request(const Request& from)
      : Request(nullptr, from) {}
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request& operator=(Request&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Request& default_instance() {
    return *internal_default_instance();
  }
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }
  inline void Swap(Request* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Request* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Request* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Request>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Request& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Request& from) {
    Request::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Request* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "io.Request";
  }
  protected:
  explicit Request(::google::protobuf::Arena* arena);
  Request(::google::protobuf::Arena* arena, const Request& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRequestIdFieldNumber = 1,
    kPayloadFieldNumber = 2,
  };
  // string request_id = 1;
  void clear_request_id() ;
  const std::string& request_id() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_request_id(Arg_&& arg, Args_... args);
  std::string* mutable_request_id();
  PROTOBUF_NODISCARD std::string* release_request_id();
  void set_allocated_request_id(std::string* value);

  private:
  const std::string& _internal_request_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_request_id(
      const std::string& value);
  std::string* _internal_mutable_request_id();

  public:
  // string payload = 2;
  void clear_payload() ;
  const std::string& payload() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_payload(Arg_&& arg, Args_... args);
  std::string* mutable_payload();
  PROTOBUF_NODISCARD std::string* release_payload();
  void set_allocated_payload(std::string* value);

  private:
  const std::string& _internal_payload() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_payload(
      const std::string& value);
  std::string* _internal_mutable_payload();

  public:
  // @@protoc_insertion_point(class_scope:io.Request)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      36, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr request_id_;
    ::google::protobuf::internal::ArenaStringPtr payload_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_io_5fmessages_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// echo

// string text = 1;
inline void echo::clear_text() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.text_.ClearToEmpty();
}
inline const std::string& echo::text() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:io.echo.text)
  return _internal_text();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void echo::set_text(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.text_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:io.echo.text)
}
inline std::string* echo::mutable_text() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_text();
  // @@protoc_insertion_point(field_mutable:io.echo.text)
  return _s;
}
inline const std::string& echo::_internal_text() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.text_.Get();
}
inline void echo::_internal_set_text(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.text_.Set(value, GetArena());
}
inline std::string* echo::_internal_mutable_text() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.text_.Mutable( GetArena());
}
inline std::string* echo::release_text() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:io.echo.text)
  return _impl_.text_.Release();
}
inline void echo::set_allocated_text(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.text_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.text_.IsDefault()) {
          _impl_.text_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:io.echo.text)
}

// -------------------------------------------------------------------

// Request

// string request_id = 1;
inline void Request::clear_request_id() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.request_id_.ClearToEmpty();
}
inline const std::string& Request::request_id() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:io.Request.request_id)
  return _internal_request_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Request::set_request_id(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.request_id_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:io.Request.request_id)
}
inline std::string* Request::mutable_request_id() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_request_id();
  // @@protoc_insertion_point(field_mutable:io.Request.request_id)
  return _s;
}
inline const std::string& Request::_internal_request_id() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.request_id_.Get();
}
inline void Request::_internal_set_request_id(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.request_id_.Set(value, GetArena());
}
inline std::string* Request::_internal_mutable_request_id() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.request_id_.Mutable( GetArena());
}
inline std::string* Request::release_request_id() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:io.Request.request_id)
  return _impl_.request_id_.Release();
}
inline void Request::set_allocated_request_id(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.request_id_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.request_id_.IsDefault()) {
          _impl_.request_id_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:io.Request.request_id)
}

// string payload = 2;
inline void Request::clear_payload() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.payload_.ClearToEmpty();
}
inline const std::string& Request::payload() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:io.Request.payload)
  return _internal_payload();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Request::set_payload(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.payload_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:io.Request.payload)
}
inline std::string* Request::mutable_payload() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_payload();
  // @@protoc_insertion_point(field_mutable:io.Request.payload)
  return _s;
}
inline const std::string& Request::_internal_payload() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.payload_.Get();
}
inline void Request::_internal_set_payload(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.payload_.Set(value, GetArena());
}
inline std::string* Request::_internal_mutable_payload() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.payload_.Mutable( GetArena());
}
inline std::string* Request::release_payload() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:io.Request.payload)
  return _impl_.payload_.Release();
}
inline void Request::set_allocated_payload(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.payload_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.payload_.IsDefault()) {
          _impl_.payload_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:io.Request.payload)
}

// -------------------------------------------------------------------

// Response

// string response_id = 1;
inline void Response::clear_response_id() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.response_id_.ClearToEmpty();
}
inline const std::string& Response::response_id() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:io.Response.response_id)
  return _internal_response_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Response::set_response_id(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.response_id_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:io.Response.response_id)
}
inline std::string* Response::mutable_response_id() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_response_id();
  // @@protoc_insertion_point(field_mutable:io.Response.response_id)
  return _s;
}
inline const std::string& Response::_internal_response_id() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.response_id_.Get();
}
inline void Response::_internal_set_response_id(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.response_id_.Set(value, GetArena());
}
inline std::string* Response::_internal_mutable_response_id() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.response_id_.Mutable( GetArena());
}
inline std::string* Response::release_response_id() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:io.Response.response_id)
  return _impl_.response_id_.Release();
}
inline void Response::set_allocated_response_id(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.response_id_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.response_id_.IsDefault()) {
          _impl_.response_id_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:io.Response.response_id)
}

// string payload = 2;
inline void Response::clear_payload() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.payload_.ClearToEmpty();
}
inline const std::string& Response::payload() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:io.Response.payload)
  return _internal_payload();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Response::set_payload(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.payload_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:io.Response.payload)
}
inline std::string* Response::mutable_payload() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_payload();
  // @@protoc_insertion_point(field_mutable:io.Response.payload)
  return _s;
}
inline const std::string& Response::_internal_payload() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.payload_.Get();
}
inline void Response::_internal_set_payload(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.payload_.Set(value, GetArena());
}
inline std::string* Response::_internal_mutable_payload() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.payload_.Mutable( GetArena());
}
inline std::string* Response::release_payload() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:io.Response.payload)
  return _impl_.payload_.Release();
}
inline void Response::set_allocated_payload(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.payload_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.payload_.IsDefault()) {
          _impl_.payload_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:io.Response.payload)
}

// bool success = 3;
inline void Response::clear_success() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.success_ = false;
}
inline bool Response::success() const {
  // @@protoc_insertion_point(field_get:io.Response.success)
  return _internal_success();
}
inline void Response::set_success(bool value) {
  _internal_set_success(value);
  // @@protoc_insertion_point(field_set:io.Response.success)
}
inline bool Response::_internal_success() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.success_;
}
inline void Response::_internal_set_success(bool value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.success_ = value;
}

// string error_message = 4;
inline void Response::clear_error_message() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.error_message_.ClearToEmpty();
}
inline const std::string& Response::error_message() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:io.Response.error_message)
  return _internal_error_message();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Response::set_error_message(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.error_message_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:io.Response.error_message)
}
inline std::string* Response::mutable_error_message() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_error_message();
  // @@protoc_insertion_point(field_mutable:io.Response.error_message)
  return _s;
}
inline const std::string& Response::_internal_error_message() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.error_message_.Get();
}
inline void Response::_internal_set_error_message(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.error_message_.Set(value, GetArena());
}
inline std::string* Response::_internal_mutable_error_message() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.error_message_.Mutable( GetArena());
}
inline std::string* Response::release_error_message() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:io.Response.error_message)
  return _impl_.error_message_.Release();
}
inline void Response::set_allocated_error_message(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.error_message_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.error_message_.IsDefault()) {
          _impl_.error_message_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:io.Response.error_message)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace io


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_io_5fmessages_2eproto_2epb_2eh
