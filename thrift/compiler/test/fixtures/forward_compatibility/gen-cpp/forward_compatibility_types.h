/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp/Thrift.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/protocol/TProtocol.h>
#include <thrift/lib/cpp/transport/TTransport.h>

namespace apache { namespace thrift { namespace reflection {
class Schema;
}}}




class OldStructure;

class NewStructure;

class NewStructure2;

class NewStructureNested;

typedef std::map<int16_t, float>  FloatFeatures;

void swap(OldStructure &a, OldStructure &b);

class OldStructure : public apache::thrift::TStructType<OldStructure> {
 public:

  static const uint64_t _reflection_id = 4131921941933986764U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  OldStructure() {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit OldStructure(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    OldStructure(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    features = arg.move();
    __isset.features = true;
  }

  OldStructure(const OldStructure&) = default;
  OldStructure& operator=(const OldStructure& src)= default;
  OldStructure(OldStructure&&) = default;
  OldStructure& operator=(OldStructure&&) = default;

  void __clear();

  virtual ~OldStructure() noexcept {}

  std::map<int16_t, double>  features;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      features = false;
    }
    bool features;
  } __isset;

  bool operator == (const OldStructure &) const;
  bool operator != (const OldStructure& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const OldStructure & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class OldStructure;
void merge(const OldStructure& from, OldStructure& to);
void merge(OldStructure&& from, OldStructure& to);
void swap(NewStructure &a, NewStructure &b);

class NewStructure : public apache::thrift::TStructType<NewStructure> {
 public:

  static const uint64_t _reflection_id = 13282492778586199212U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  NewStructure() {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit NewStructure(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    NewStructure(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    features = arg.move();
    __isset.features = true;
  }

  NewStructure(const NewStructure&) = default;
  NewStructure& operator=(const NewStructure& src)= default;
  NewStructure(NewStructure&&) = default;
  NewStructure& operator=(NewStructure&&) = default;

  void __clear();

  virtual ~NewStructure() noexcept {}

  std::map<int16_t, double>  features;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      features = false;
    }
    bool features;
  } __isset;

  bool operator == (const NewStructure &) const;
  bool operator != (const NewStructure& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NewStructure & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class NewStructure;
void merge(const NewStructure& from, NewStructure& to);
void merge(NewStructure&& from, NewStructure& to);
void swap(NewStructure2 &a, NewStructure2 &b);

class NewStructure2 : public apache::thrift::TStructType<NewStructure2> {
 public:

  static const uint64_t _reflection_id = 8404079032344701484U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  NewStructure2() {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit NewStructure2(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    NewStructure2(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    features = arg.move();
    __isset.features = true;
  }

  NewStructure2(const NewStructure2&) = default;
  NewStructure2& operator=(const NewStructure2& src)= default;
  NewStructure2(NewStructure2&&) = default;
  NewStructure2& operator=(NewStructure2&&) = default;

  void __clear();

  virtual ~NewStructure2() noexcept {}

  FloatFeatures features;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      features = false;
    }
    bool features;
  } __isset;

  bool operator == (const NewStructure2 &) const;
  bool operator != (const NewStructure2& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NewStructure2 & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class NewStructure2;
void merge(const NewStructure2& from, NewStructure2& to);
void merge(NewStructure2&& from, NewStructure2& to);
void swap(NewStructureNested &a, NewStructureNested &b);

class NewStructureNested : public apache::thrift::TStructType<NewStructureNested> {
 public:

  static const uint64_t _reflection_id = 8209486072152767468U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  NewStructureNested() {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit NewStructureNested(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    NewStructureNested(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    lst = arg.move();
    __isset.lst = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit NewStructureNested(
    ::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    NewStructureNested(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    mp = arg.move();
    __isset.mp = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit NewStructureNested(
    ::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    NewStructureNested(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    s = arg.move();
    __isset.s = true;
  }

  NewStructureNested(const NewStructureNested&) = default;
  NewStructureNested& operator=(const NewStructureNested& src)= default;
  NewStructureNested(NewStructureNested&&) = default;
  NewStructureNested& operator=(NewStructureNested&&) = default;

  void __clear();

  virtual ~NewStructureNested() noexcept {}

  std::vector<FloatFeatures>  lst;
  std::map<int16_t, FloatFeatures>  mp;
  std::set<FloatFeatures>  s;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      lst = false;
      mp = false;
      s = false;
    }
    bool lst;
    bool mp;
    bool s;
  } __isset;

  bool operator == (const NewStructureNested &) const;
  bool operator != (const NewStructureNested& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const NewStructureNested & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class NewStructureNested;
void merge(const NewStructureNested& from, NewStructureNested& to);
void merge(NewStructureNested&& from, NewStructureNested& to);


