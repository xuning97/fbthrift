/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);

void EnumMetadata<::facebook::ns::qwerty::AnEnumA>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("enums.AnEnumA", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "enums.AnEnumA";
  for (const auto& p : ::facebook::ns::qwerty::_AnEnumA_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::facebook::ns::qwerty::AnEnumB>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("enums.AnEnumB", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "enums.AnEnumB";
  for (const auto& p : ::facebook::ns::qwerty::_AnEnumB_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::facebook::ns::qwerty::AnEnumC>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("enums.AnEnumC", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "enums.AnEnumC";
  for (const auto& p : ::facebook::ns::qwerty::_AnEnumC_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::facebook::ns::qwerty::AnEnumD>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("enums.AnEnumD", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "enums.AnEnumD";
  for (const auto& p : ::facebook::ns::qwerty::_AnEnumD_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}
void EnumMetadata<::facebook::ns::qwerty::AnEnumE>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums.emplace("enums.AnEnumE", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name = "enums.AnEnumE";
  for (const auto& p : ::facebook::ns::qwerty::_AnEnumE_VALUES_TO_NAMES) {
    enum_metadata.elements.emplace(static_cast<int32_t>(p.first), p.second) ;
  }
}

void StructMetadata<::facebook::ns::qwerty::SomeStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("enums.SomeStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& enums_SomeStruct = res.first->second;
  enums_SomeStruct.name = "enums.SomeStruct";
  enums_SomeStruct.is_union = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  enums_SomeStruct_fields[] = {
    std::make_tuple(1, "fieldA", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
  };
  for (const auto& f : enums_SomeStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id = std::get<0>(f);
    field.name = std::get<1>(f);
    field.is_optional = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(field.type, metadata);
    enums_SomeStruct.fields.push_back(std::move(field));
  }
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
