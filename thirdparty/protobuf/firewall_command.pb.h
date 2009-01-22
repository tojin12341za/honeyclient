// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_firewall_5fcommand_2eproto__INCLUDED
#define PROTOBUF_firewall_5fcommand_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2000003
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2000003 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>

namespace HoneyClient {
namespace Message {
namespace Firewall {

// Internal implementation detail -- do not call these.
void  protobuf_BuildDesc_firewall_5fcommand_2eproto();
void protobuf_BuildDesc_firewall_5fcommand_2eproto_AssignGlobalDescriptors(
    ::google::protobuf::FileDescriptor* file);

class Command;

enum Command_ActionType {
  Command_ActionType_UNKNOWN = 1,
  Command_ActionType_DENY_ALL = 2,
  Command_ActionType_DENY_VM = 3,
  Command_ActionType_ALLOW_VM = 4,
  Command_ActionType_ALLOW_ALL = 5
};
const ::google::protobuf::EnumDescriptor* Command_ActionType_descriptor();
bool Command_ActionType_IsValid(int value);
const Command_ActionType Command_ActionType_ActionType_MIN = Command_ActionType_UNKNOWN;
const Command_ActionType Command_ActionType_ActionType_MAX = Command_ActionType_ALLOW_ALL;

enum Command_ResponseType {
  Command_ResponseType_ERROR = 1,
  Command_ResponseType_OK = 2
};
const ::google::protobuf::EnumDescriptor* Command_ResponseType_descriptor();
bool Command_ResponseType_IsValid(int value);
const Command_ResponseType Command_ResponseType_ResponseType_MIN = Command_ResponseType_ERROR;
const Command_ResponseType Command_ResponseType_ResponseType_MAX = Command_ResponseType_OK;

// ===================================================================

class Command : public ::google::protobuf::Message {
 public:
  Command();
  virtual ~Command();
  
  Command(const Command& from);
  
  inline Command& operator=(const Command& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Command& default_instance();
  void Swap(Command* other);
  
  // implements Message ----------------------------------------------
  
  Command* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Command& from);
  void MergeFrom(const Command& from);
  void Clear();
  bool IsInitialized() const;
  int ByteSize() const;
  
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  bool SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  const ::google::protobuf::Descriptor* GetDescriptor() const;
  const ::google::protobuf::Reflection* GetReflection() const;
  
  // nested types ----------------------------------------------------
  
  typedef Command_ActionType ActionType;
  static const ActionType UNKNOWN = Command_ActionType_UNKNOWN;
  static const ActionType DENY_ALL = Command_ActionType_DENY_ALL;
  static const ActionType DENY_VM = Command_ActionType_DENY_VM;
  static const ActionType ALLOW_VM = Command_ActionType_ALLOW_VM;
  static const ActionType ALLOW_ALL = Command_ActionType_ALLOW_ALL;
  static inline const ::google::protobuf::EnumDescriptor*
  ActionType_descriptor() {
    return Command_ActionType_descriptor();
  }
  static inline bool ActionType_IsValid(int value) {
    return Command_ActionType_IsValid(value);
  }
  static const ActionType ActionType_MIN =
    Command_ActionType_ActionType_MIN;
  static const ActionType ActionType_MAX =
    Command_ActionType_ActionType_MAX;
  
  typedef Command_ResponseType ResponseType;
  static const ResponseType ERROR = Command_ResponseType_ERROR;
  static const ResponseType OK = Command_ResponseType_OK;
  static inline const ::google::protobuf::EnumDescriptor*
  ResponseType_descriptor() {
    return Command_ResponseType_descriptor();
  }
  static inline bool ResponseType_IsValid(int value) {
    return Command_ResponseType_IsValid(value);
  }
  static const ResponseType ResponseType_MIN =
    Command_ResponseType_ResponseType_MIN;
  static const ResponseType ResponseType_MAX =
    Command_ResponseType_ResponseType_MAX;
  
  // accessors -------------------------------------------------------
  
  // required .HoneyClient.Message.Firewall.Command.ActionType action = 1 [default = UNKNOWN];
  inline bool has_action() const;
  inline void clear_action();
  inline ::HoneyClient::Message::Firewall::Command_ActionType action() const;
  inline void set_action(::HoneyClient::Message::Firewall::Command_ActionType value);
  
  // optional .HoneyClient.Message.Firewall.Command.ResponseType response = 2 [default = ERROR];
  inline bool has_response() const;
  inline void clear_response();
  inline ::HoneyClient::Message::Firewall::Command_ResponseType response() const;
  inline void set_response(::HoneyClient::Message::Firewall::Command_ResponseType value);
  
  // optional string err_message = 3;
  inline bool has_err_message() const;
  inline void clear_err_message();
  inline const ::std::string& err_message() const;
  inline void set_err_message(const ::std::string& value);
  inline void set_err_message(const char* value);
  inline ::std::string* mutable_err_message();
  
  // optional string chain_name = 4;
  inline bool has_chain_name() const;
  inline void clear_chain_name();
  inline const ::std::string& chain_name() const;
  inline void set_chain_name(const ::std::string& value);
  inline void set_chain_name(const char* value);
  inline ::std::string* mutable_chain_name();
  
  // optional string mac_address = 5;
  inline bool has_mac_address() const;
  inline void clear_mac_address();
  inline const ::std::string& mac_address() const;
  inline void set_mac_address(const ::std::string& value);
  inline void set_mac_address(const char* value);
  inline ::std::string* mutable_mac_address();
  
  // optional string ip_address = 6;
  inline bool has_ip_address() const;
  inline void clear_ip_address();
  inline const ::std::string& ip_address() const;
  inline void set_ip_address(const ::std::string& value);
  inline void set_ip_address(const char* value);
  inline ::std::string* mutable_ip_address();
  
  // optional string protocol = 7;
  inline bool has_protocol() const;
  inline void clear_protocol();
  inline const ::std::string& protocol() const;
  inline void set_protocol(const ::std::string& value);
  inline void set_protocol(const char* value);
  inline ::std::string* mutable_protocol();
  
  // repeated uint32 port = 8;
  inline int port_size() const;
  inline void clear_port();
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >& port() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >* mutable_port();
  inline ::google::protobuf::uint32 port(int index) const;
  inline void set_port(int index, ::google::protobuf::uint32 value);
  inline void add_port(::google::protobuf::uint32 value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  int action_;
  int response_;
  ::std::string* err_message_;
  static const ::std::string _default_err_message_;
  ::std::string* chain_name_;
  static const ::std::string _default_chain_name_;
  ::std::string* mac_address_;
  static const ::std::string _default_mac_address_;
  ::std::string* ip_address_;
  static const ::std::string _default_ip_address_;
  ::std::string* protocol_;
  static const ::std::string _default_protocol_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > port_;
  friend void protobuf_BuildDesc_firewall_5fcommand_2eproto_AssignGlobalDescriptors(
      const ::google::protobuf::FileDescriptor* file);
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static Command* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// Command

// required .HoneyClient.Message.Firewall.Command.ActionType action = 1 [default = UNKNOWN];
inline bool Command::has_action() const {
  return _has_bit(0);
}
inline void Command::clear_action() {
  action_ = 1;
  _clear_bit(0);
}
inline ::HoneyClient::Message::Firewall::Command_ActionType Command::action() const {
  return static_cast< ::HoneyClient::Message::Firewall::Command_ActionType >(action_);
}
inline void Command::set_action(::HoneyClient::Message::Firewall::Command_ActionType value) {
  GOOGLE_DCHECK(::HoneyClient::Message::Firewall::Command_ActionType_IsValid(value));
  _set_bit(0);
  action_ = value;
}

// optional .HoneyClient.Message.Firewall.Command.ResponseType response = 2 [default = ERROR];
inline bool Command::has_response() const {
  return _has_bit(1);
}
inline void Command::clear_response() {
  response_ = 1;
  _clear_bit(1);
}
inline ::HoneyClient::Message::Firewall::Command_ResponseType Command::response() const {
  return static_cast< ::HoneyClient::Message::Firewall::Command_ResponseType >(response_);
}
inline void Command::set_response(::HoneyClient::Message::Firewall::Command_ResponseType value) {
  GOOGLE_DCHECK(::HoneyClient::Message::Firewall::Command_ResponseType_IsValid(value));
  _set_bit(1);
  response_ = value;
}

// optional string err_message = 3;
inline bool Command::has_err_message() const {
  return _has_bit(2);
}
inline void Command::clear_err_message() {
  if (err_message_ != &_default_err_message_) {
    err_message_->clear();
  }
  _clear_bit(2);
}
inline const ::std::string& Command::err_message() const {
  return *err_message_;
}
inline void Command::set_err_message(const ::std::string& value) {
  _set_bit(2);
  if (err_message_ == &_default_err_message_) {
    err_message_ = new ::std::string;
  }
  err_message_->assign(value);
}
inline void Command::set_err_message(const char* value) {
  _set_bit(2);
  if (err_message_ == &_default_err_message_) {
    err_message_ = new ::std::string;
  }
  err_message_->assign(value);
}
inline ::std::string* Command::mutable_err_message() {
  _set_bit(2);
  if (err_message_ == &_default_err_message_) {
    err_message_ = new ::std::string;
  }
  return err_message_;
}

// optional string chain_name = 4;
inline bool Command::has_chain_name() const {
  return _has_bit(3);
}
inline void Command::clear_chain_name() {
  if (chain_name_ != &_default_chain_name_) {
    chain_name_->clear();
  }
  _clear_bit(3);
}
inline const ::std::string& Command::chain_name() const {
  return *chain_name_;
}
inline void Command::set_chain_name(const ::std::string& value) {
  _set_bit(3);
  if (chain_name_ == &_default_chain_name_) {
    chain_name_ = new ::std::string;
  }
  chain_name_->assign(value);
}
inline void Command::set_chain_name(const char* value) {
  _set_bit(3);
  if (chain_name_ == &_default_chain_name_) {
    chain_name_ = new ::std::string;
  }
  chain_name_->assign(value);
}
inline ::std::string* Command::mutable_chain_name() {
  _set_bit(3);
  if (chain_name_ == &_default_chain_name_) {
    chain_name_ = new ::std::string;
  }
  return chain_name_;
}

// optional string mac_address = 5;
inline bool Command::has_mac_address() const {
  return _has_bit(4);
}
inline void Command::clear_mac_address() {
  if (mac_address_ != &_default_mac_address_) {
    mac_address_->clear();
  }
  _clear_bit(4);
}
inline const ::std::string& Command::mac_address() const {
  return *mac_address_;
}
inline void Command::set_mac_address(const ::std::string& value) {
  _set_bit(4);
  if (mac_address_ == &_default_mac_address_) {
    mac_address_ = new ::std::string;
  }
  mac_address_->assign(value);
}
inline void Command::set_mac_address(const char* value) {
  _set_bit(4);
  if (mac_address_ == &_default_mac_address_) {
    mac_address_ = new ::std::string;
  }
  mac_address_->assign(value);
}
inline ::std::string* Command::mutable_mac_address() {
  _set_bit(4);
  if (mac_address_ == &_default_mac_address_) {
    mac_address_ = new ::std::string;
  }
  return mac_address_;
}

// optional string ip_address = 6;
inline bool Command::has_ip_address() const {
  return _has_bit(5);
}
inline void Command::clear_ip_address() {
  if (ip_address_ != &_default_ip_address_) {
    ip_address_->clear();
  }
  _clear_bit(5);
}
inline const ::std::string& Command::ip_address() const {
  return *ip_address_;
}
inline void Command::set_ip_address(const ::std::string& value) {
  _set_bit(5);
  if (ip_address_ == &_default_ip_address_) {
    ip_address_ = new ::std::string;
  }
  ip_address_->assign(value);
}
inline void Command::set_ip_address(const char* value) {
  _set_bit(5);
  if (ip_address_ == &_default_ip_address_) {
    ip_address_ = new ::std::string;
  }
  ip_address_->assign(value);
}
inline ::std::string* Command::mutable_ip_address() {
  _set_bit(5);
  if (ip_address_ == &_default_ip_address_) {
    ip_address_ = new ::std::string;
  }
  return ip_address_;
}

// optional string protocol = 7;
inline bool Command::has_protocol() const {
  return _has_bit(6);
}
inline void Command::clear_protocol() {
  if (protocol_ != &_default_protocol_) {
    protocol_->clear();
  }
  _clear_bit(6);
}
inline const ::std::string& Command::protocol() const {
  return *protocol_;
}
inline void Command::set_protocol(const ::std::string& value) {
  _set_bit(6);
  if (protocol_ == &_default_protocol_) {
    protocol_ = new ::std::string;
  }
  protocol_->assign(value);
}
inline void Command::set_protocol(const char* value) {
  _set_bit(6);
  if (protocol_ == &_default_protocol_) {
    protocol_ = new ::std::string;
  }
  protocol_->assign(value);
}
inline ::std::string* Command::mutable_protocol() {
  _set_bit(6);
  if (protocol_ == &_default_protocol_) {
    protocol_ = new ::std::string;
  }
  return protocol_;
}

// repeated uint32 port = 8;
inline int Command::port_size() const {
  return port_.size();
}
inline void Command::clear_port() {
  port_.Clear();
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
Command::port() const {
  return port_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
Command::mutable_port() {
  return &port_;
}
inline ::google::protobuf::uint32 Command::port(int index) const {
  return port_.Get(index);
}
inline void Command::set_port(int index, ::google::protobuf::uint32 value) {
  port_.Set(index, value);
}
inline void Command::add_port(::google::protobuf::uint32 value) {
  port_.Add(value);
}


}  // namespace Firewall
}  // namespace Message
}  // namespace HoneyClient
#endif  // PROTOBUF_firewall_5fcommand_2eproto__INCLUDED
