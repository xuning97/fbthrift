/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/service2AsyncClient.h"
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/reflection_dep_B_types.h"
#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/reflection_dep_C_types.h"
#include "thrift/test/fatal_custom_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace test_cpp2 { namespace cpp_reflection {

class service2SvAsyncIf {
 public:
  virtual ~service2SvAsyncIf() {}
  virtual void async_tm_methodA(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual folly::Future<folly::Unit> future_methodA() = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_methodA() = 0;
  virtual void async_tm_methodB(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) = 0;
  virtual folly::Future<folly::Unit> future_methodB(int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_methodB(int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) = 0;
  virtual void async_tm_methodC(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) = 0;
  virtual folly::Future<int32_t> future_methodC() = 0;
  virtual folly::SemiFuture<int32_t> semifuture_methodC() = 0;
  virtual void async_tm_methodD(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback, int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) = 0;
  virtual folly::Future<int32_t> future_methodD(int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) = 0;
  virtual folly::SemiFuture<int32_t> semifuture_methodD(int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) = 0;
  virtual void async_tm_methodE(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback) = 0;
  virtual folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> future_methodE() = 0;
  virtual folly::SemiFuture<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> semifuture_methodE() = 0;
  virtual void async_tm_methodF(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback, int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) = 0;
  virtual folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> future_methodF(int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) = 0;
  virtual folly::SemiFuture<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> semifuture_methodF(int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) = 0;
};

class service2AsyncProcessor;

class service2SvIf : public service2SvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef service2AsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual void methodA();
  folly::Future<folly::Unit> future_methodA() override;
  folly::SemiFuture<folly::Unit> semifuture_methodA() override;
  void async_tm_methodA(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual void methodB(int32_t /*x*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/);
  folly::Future<folly::Unit> future_methodB(int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) override;
  folly::SemiFuture<folly::Unit> semifuture_methodB(int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) override;
  void async_tm_methodB(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) override;
  virtual int32_t methodC();
  folly::Future<int32_t> future_methodC() override;
  folly::SemiFuture<int32_t> semifuture_methodC() override;
  void async_tm_methodC(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) override;
  virtual int32_t methodD(int32_t /*i*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/);
  folly::Future<int32_t> future_methodD(int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) override;
  folly::SemiFuture<int32_t> semifuture_methodD(int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) override;
  void async_tm_methodD(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback, int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) override;
  virtual void methodE( ::test_cpp2::cpp_reflection::struct2& /*_return*/);
  folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> future_methodE() override;
  folly::SemiFuture<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> semifuture_methodE() override;
  void async_tm_methodE(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback) override;
  virtual void methodF( ::test_cpp2::cpp_reflection::struct2& /*_return*/, int32_t /*l*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/);
  folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> future_methodF(int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) override;
  folly::SemiFuture<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> semifuture_methodF(int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) override;
  void async_tm_methodF(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback, int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) override;
};

class service2SvNull : public service2SvIf {
 public:
  void methodA() override;
  void methodB(int32_t /*x*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/) override;
  int32_t methodC() override;
  int32_t methodD(int32_t /*i*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/) override;
  void methodE( ::test_cpp2::cpp_reflection::struct2& /*_return*/) override;
  void methodF( ::test_cpp2::cpp_reflection::struct2& /*_return*/, int32_t /*l*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/) override;
};

class service2AsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  service2SvIf* iface_;
 public:
  void process(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
  std::shared_ptr<folly::RequestContext> getBaseContextForRequest() override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
 public:
  using ProcessFunc = GeneratedAsyncProcessor::ProcessFunc<service2AsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFunc>;
  static const service2AsyncProcessor::ProcessMap& getBinaryProtocolProcessMap();
  static const service2AsyncProcessor::ProcessMap& getCompactProtocolProcessMap();
 private:
  static const service2AsyncProcessor::ProcessMap binaryProcessMap_;
   static const service2AsyncProcessor::ProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_methodA(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodA(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_methodA(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodA(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_methodB(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodB(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_methodB(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodB(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_methodC(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodC(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_methodC(int32_t protoSeqId, apache::thrift::ContextStack* ctx, int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodC(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_methodD(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodD(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_methodD(int32_t protoSeqId, apache::thrift::ContextStack* ctx, int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodD(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_methodE(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodE(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_methodE(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::test_cpp2::cpp_reflection::struct2 const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodE(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_methodF(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodF(apache::thrift::ResponseChannelRequest::UniquePtr req, std::unique_ptr<folly::IOBuf> buf,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_methodF(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::test_cpp2::cpp_reflection::struct2 const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodF(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  service2AsyncProcessor(service2SvIf* iface) :
      iface_(iface) {}

  virtual ~service2AsyncProcessor() {}
};

}} // test_cpp2::cpp_reflection
