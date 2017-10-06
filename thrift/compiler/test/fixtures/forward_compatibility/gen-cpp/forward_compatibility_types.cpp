/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/forward_compatibility/gen-cpp/forward_compatibility_types.h"
#include "thrift/compiler/test/fixtures/forward_compatibility/gen-cpp/forward_compatibility_data.h"

#include "thrift/compiler/test/fixtures/forward_compatibility/gen-cpp/forward_compatibility_reflection.h"

#include <algorithm>
#include <string.h>

#include <folly/Indestructible.h>



const uint64_t OldStructure::_reflection_id;
void OldStructure::_reflection_register(::apache::thrift::reflection::Schema& schema) {
   ::forward_compatibility_reflection_::reflectionInitializer_4131921941933986764(schema);
}

bool OldStructure::operator == (const OldStructure & rhs) const {
  if (!(this->features == rhs.features))
    return false;
  return true;
}

void OldStructure::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "features") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_MAP;
  }
};

uint32_t OldStructure::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::forward_compatibility_reflection_::reflectionInitializer_4131921941933986764(*schema);
    iprot->setNextStructType(OldStructure::_reflection_id);
  }
  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->features.clear();
            uint32_t _size1;
            bool _sizeUnknown2;
            apache::thrift::protocol::TType _ktype3 = apache::thrift::protocol::T_STOP;
            apache::thrift::protocol::TType _vtype4 = apache::thrift::protocol::T_STOP;
            xfer += iprot->readMapBegin(_ktype3, _vtype4, _size1, _sizeUnknown2);
            if (!_sizeUnknown2) {
              uint32_t _i7;
              for (_i7 = 0; _i7 < _size1; ++_i7)
              {
                int16_t _key8;
                xfer += iprot->readI16(_key8);
                double& _val9 = this->features[_key8];
                xfer += iprot->readDouble(_val9);
              }
            } else {
              while (iprot->peekMap())
              {
                int16_t _key10;
                xfer += iprot->readI16(_key10);
                double& _val11 = this->features[_key10];
                xfer += iprot->readDouble(_val11);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.features = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      default:
        xfer += iprot->skip(_ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void OldStructure::__clear() {
  features.clear();
  __isset.__clear();
}
uint32_t OldStructure::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("OldStructure");
  xfer += oprot->writeFieldBegin("features", apache::thrift::protocol::T_MAP, 1);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_DOUBLE, this->features.size());
    std::map<int16_t, double> ::const_iterator _iter12;
    for (_iter12 = this->features.begin(); _iter12 != this->features.end(); ++_iter12)
    {
      xfer += oprot->writeI16(_iter12->first);
      xfer += oprot->writeDouble(_iter12->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(OldStructure &a, OldStructure &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.features, b.features);
  swap(a.__isset, b.__isset);
}

void merge(const OldStructure& from, OldStructure& to) {
  using apache::thrift::merge;
  merge(from.features, to.features);
  to.__isset.features = to.__isset.features || from.__isset.features;
}

void merge(OldStructure&& from, OldStructure& to) {
  using apache::thrift::merge;
  merge(std::move(from.features), to.features);
  to.__isset.features = to.__isset.features || from.__isset.features;
}

const uint64_t NewStructure::_reflection_id;
void NewStructure::_reflection_register(::apache::thrift::reflection::Schema& schema) {
   ::forward_compatibility_reflection_::reflectionInitializer_13282492778586199212(schema);
}

bool NewStructure::operator == (const NewStructure & rhs) const {
  if (!(this->features == rhs.features))
    return false;
  return true;
}

void NewStructure::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "features") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_MAP;
  }
};

uint32_t NewStructure::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::forward_compatibility_reflection_::reflectionInitializer_13282492778586199212(*schema);
    iprot->setNextStructType(NewStructure::_reflection_id);
  }
  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->features.clear();
            uint32_t _size14;
            bool _sizeUnknown15;
            apache::thrift::protocol::TType _ktype16 = apache::thrift::protocol::T_STOP;
            apache::thrift::protocol::TType _vtype17 = apache::thrift::protocol::T_STOP;
            xfer += iprot->readMapBegin(_ktype16, _vtype17, _size14, _sizeUnknown15);
            if (_ktype16 == apache::thrift::protocol::T_STOP) {_ktype16 = apache::thrift::protocol::T_I16;}
            if (_vtype17 == apache::thrift::protocol::T_STOP) {_vtype17 = apache::thrift::protocol::T_DOUBLE;}
            if (!_sizeUnknown15) {
              uint32_t _i20;
              for (_i20 = 0; _i20 < _size14; ++_i20)
              {
                int16_t _key21;
                xfer += readIntegral(*iprot, _ktype16, _key21);
                double& _val22 = this->features[_key21];
                xfer += readFloatingPoint(*iprot, _vtype17, _val22);
              }
            } else {
              while (iprot->peekMap())
              {
                int16_t _key23;
                xfer += readIntegral(*iprot, _ktype16, _key23);
                double& _val24 = this->features[_key23];
                xfer += readFloatingPoint(*iprot, _vtype17, _val24);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.features = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      default:
        xfer += iprot->skip(_ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void NewStructure::__clear() {
  features.clear();
  __isset.__clear();
}
uint32_t NewStructure::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("NewStructure");
  xfer += oprot->writeFieldBegin("features", apache::thrift::protocol::T_MAP, 1);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_DOUBLE, this->features.size());
    std::map<int16_t, double> ::const_iterator _iter25;
    for (_iter25 = this->features.begin(); _iter25 != this->features.end(); ++_iter25)
    {
      xfer += oprot->writeI16(_iter25->first);
      xfer += oprot->writeDouble(_iter25->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(NewStructure &a, NewStructure &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.features, b.features);
  swap(a.__isset, b.__isset);
}

void merge(const NewStructure& from, NewStructure& to) {
  using apache::thrift::merge;
  merge(from.features, to.features);
  to.__isset.features = to.__isset.features || from.__isset.features;
}

void merge(NewStructure&& from, NewStructure& to) {
  using apache::thrift::merge;
  merge(std::move(from.features), to.features);
  to.__isset.features = to.__isset.features || from.__isset.features;
}

const uint64_t NewStructure2::_reflection_id;
void NewStructure2::_reflection_register(::apache::thrift::reflection::Schema& schema) {
   ::forward_compatibility_reflection_::reflectionInitializer_8404079032344701484(schema);
}

bool NewStructure2::operator == (const NewStructure2 & rhs) const {
  if (!(this->features == rhs.features))
    return false;
  return true;
}

void NewStructure2::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "features") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_MAP;
  }
};

uint32_t NewStructure2::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::forward_compatibility_reflection_::reflectionInitializer_8404079032344701484(*schema);
    iprot->setNextStructType(NewStructure2::_reflection_id);
  }
  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->features.clear();
            uint32_t _size27;
            bool _sizeUnknown28;
            apache::thrift::protocol::TType _ktype29 = apache::thrift::protocol::T_STOP;
            apache::thrift::protocol::TType _vtype30 = apache::thrift::protocol::T_STOP;
            xfer += iprot->readMapBegin(_ktype29, _vtype30, _size27, _sizeUnknown28);
            if (_ktype29 == apache::thrift::protocol::T_STOP) {_ktype29 = apache::thrift::protocol::T_I16;}
            if (_vtype30 == apache::thrift::protocol::T_STOP) {_vtype30 = apache::thrift::protocol::T_FLOAT;}
            if (!_sizeUnknown28) {
              uint32_t _i33;
              for (_i33 = 0; _i33 < _size27; ++_i33)
              {
                int16_t _key34;
                xfer += readIntegral(*iprot, _ktype29, _key34);
                float& _val35 = this->features[_key34];
                xfer += readFloatingPoint(*iprot, _vtype30, _val35);
              }
            } else {
              while (iprot->peekMap())
              {
                int16_t _key36;
                xfer += readIntegral(*iprot, _ktype29, _key36);
                float& _val37 = this->features[_key36];
                xfer += readFloatingPoint(*iprot, _vtype30, _val37);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.features = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      default:
        xfer += iprot->skip(_ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void NewStructure2::__clear() {
  features.clear();
  __isset.__clear();
}
uint32_t NewStructure2::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("NewStructure2");
  xfer += oprot->writeFieldBegin("features", apache::thrift::protocol::T_MAP, 1);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_FLOAT, this->features.size());
    std::map<int16_t, float> ::const_iterator _iter38;
    for (_iter38 = this->features.begin(); _iter38 != this->features.end(); ++_iter38)
    {
      xfer += oprot->writeI16(_iter38->first);
      xfer += oprot->writeFloat(_iter38->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(NewStructure2 &a, NewStructure2 &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.features, b.features);
  swap(a.__isset, b.__isset);
}

void merge(const NewStructure2& from, NewStructure2& to) {
  using apache::thrift::merge;
  merge(from.features, to.features);
  to.__isset.features = to.__isset.features || from.__isset.features;
}

void merge(NewStructure2&& from, NewStructure2& to) {
  using apache::thrift::merge;
  merge(std::move(from.features), to.features);
  to.__isset.features = to.__isset.features || from.__isset.features;
}

const uint64_t NewStructureNested::_reflection_id;
void NewStructureNested::_reflection_register(::apache::thrift::reflection::Schema& schema) {
   ::forward_compatibility_reflection_::reflectionInitializer_8209486072152767468(schema);
}

bool NewStructureNested::operator == (const NewStructureNested & rhs) const {
  if (!(this->lst == rhs.lst))
    return false;
  if (!(this->mp == rhs.mp))
    return false;
  if (!(this->s == rhs.s))
    return false;
  return true;
}

void NewStructureNested::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "lst") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "mp") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "s") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_SET;
  }
};

uint32_t NewStructureNested::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::forward_compatibility_reflection_::reflectionInitializer_8209486072152767468(*schema);
    iprot->setNextStructType(NewStructureNested::_reflection_id);
  }
  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (_ftype == apache::thrift::protocol::T_LIST) {
          {
            this->lst.clear();
            uint32_t _size40;
            bool _sizeUnknown41;
            apache::thrift::protocol::TType _etype44;
            xfer += iprot->readListBegin(_etype44, _size40, _sizeUnknown41);
            if (!_sizeUnknown41) {
              this->lst.resize(_size40);
              uint32_t _i46;
              for (_i46 = 0; _i46 < _size40; ++_i46)
              {
                {
                  this->lst[_i46].clear();
                  uint32_t _size47;
                  bool _sizeUnknown48;
                  apache::thrift::protocol::TType _ktype49 = apache::thrift::protocol::T_STOP;
                  apache::thrift::protocol::TType _vtype50 = apache::thrift::protocol::T_STOP;
                  xfer += iprot->readMapBegin(_ktype49, _vtype50, _size47, _sizeUnknown48);
                  if (_ktype49 == apache::thrift::protocol::T_STOP) {_ktype49 = apache::thrift::protocol::T_I16;}
                  if (_vtype50 == apache::thrift::protocol::T_STOP) {_vtype50 = apache::thrift::protocol::T_FLOAT;}
                  if (!_sizeUnknown48) {
                    uint32_t _i53;
                    for (_i53 = 0; _i53 < _size47; ++_i53)
                    {
                      int16_t _key54;
                      xfer += readIntegral(*iprot, _ktype49, _key54);
                      float& _val55 = this->lst[_i46][_key54];
                      xfer += readFloatingPoint(*iprot, _vtype50, _val55);
                    }
                  } else {
                    while (iprot->peekMap())
                    {
                      int16_t _key56;
                      xfer += readIntegral(*iprot, _ktype49, _key56);
                      float& _val57 = this->lst[_i46][_key56];
                      xfer += readFloatingPoint(*iprot, _vtype50, _val57);
                    }
                  }
                  xfer += iprot->readMapEnd();
                }
              }
            } else {
              while (iprot->peekList())
              {
                FloatFeatures _elem58;
                {
                  _elem58.clear();
                  uint32_t _size59;
                  bool _sizeUnknown60;
                  apache::thrift::protocol::TType _ktype61 = apache::thrift::protocol::T_STOP;
                  apache::thrift::protocol::TType _vtype62 = apache::thrift::protocol::T_STOP;
                  xfer += iprot->readMapBegin(_ktype61, _vtype62, _size59, _sizeUnknown60);
                  if (_ktype61 == apache::thrift::protocol::T_STOP) {_ktype61 = apache::thrift::protocol::T_I16;}
                  if (_vtype62 == apache::thrift::protocol::T_STOP) {_vtype62 = apache::thrift::protocol::T_FLOAT;}
                  if (!_sizeUnknown60) {
                    uint32_t _i65;
                    for (_i65 = 0; _i65 < _size59; ++_i65)
                    {
                      int16_t _key66;
                      xfer += readIntegral(*iprot, _ktype61, _key66);
                      float& _val67 = _elem58[_key66];
                      xfer += readFloatingPoint(*iprot, _vtype62, _val67);
                    }
                  } else {
                    while (iprot->peekMap())
                    {
                      int16_t _key68;
                      xfer += readIntegral(*iprot, _ktype61, _key68);
                      float& _val69 = _elem58[_key68];
                      xfer += readFloatingPoint(*iprot, _vtype62, _val69);
                    }
                  }
                  xfer += iprot->readMapEnd();
                }
                this->lst.push_back(_elem58);
              }
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.lst = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 2:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->mp.clear();
            uint32_t _size70;
            bool _sizeUnknown71;
            apache::thrift::protocol::TType _ktype72 = apache::thrift::protocol::T_STOP;
            apache::thrift::protocol::TType _vtype73 = apache::thrift::protocol::T_STOP;
            xfer += iprot->readMapBegin(_ktype72, _vtype73, _size70, _sizeUnknown71);
            if (!_sizeUnknown71) {
              uint32_t _i76;
              for (_i76 = 0; _i76 < _size70; ++_i76)
              {
                int16_t _key77;
                xfer += iprot->readI16(_key77);
                FloatFeatures& _val78 = this->mp[_key77];
                {
                  _val78.clear();
                  uint32_t _size79;
                  bool _sizeUnknown80;
                  apache::thrift::protocol::TType _ktype81 = apache::thrift::protocol::T_STOP;
                  apache::thrift::protocol::TType _vtype82 = apache::thrift::protocol::T_STOP;
                  xfer += iprot->readMapBegin(_ktype81, _vtype82, _size79, _sizeUnknown80);
                  if (_ktype81 == apache::thrift::protocol::T_STOP) {_ktype81 = apache::thrift::protocol::T_I16;}
                  if (_vtype82 == apache::thrift::protocol::T_STOP) {_vtype82 = apache::thrift::protocol::T_FLOAT;}
                  if (!_sizeUnknown80) {
                    uint32_t _i85;
                    for (_i85 = 0; _i85 < _size79; ++_i85)
                    {
                      int16_t _key86;
                      xfer += readIntegral(*iprot, _ktype81, _key86);
                      float& _val87 = _val78[_key86];
                      xfer += readFloatingPoint(*iprot, _vtype82, _val87);
                    }
                  } else {
                    while (iprot->peekMap())
                    {
                      int16_t _key88;
                      xfer += readIntegral(*iprot, _ktype81, _key88);
                      float& _val89 = _val78[_key88];
                      xfer += readFloatingPoint(*iprot, _vtype82, _val89);
                    }
                  }
                  xfer += iprot->readMapEnd();
                }
              }
            } else {
              while (iprot->peekMap())
              {
                int16_t _key90;
                xfer += iprot->readI16(_key90);
                FloatFeatures& _val91 = this->mp[_key90];
                {
                  _val91.clear();
                  uint32_t _size92;
                  bool _sizeUnknown93;
                  apache::thrift::protocol::TType _ktype94 = apache::thrift::protocol::T_STOP;
                  apache::thrift::protocol::TType _vtype95 = apache::thrift::protocol::T_STOP;
                  xfer += iprot->readMapBegin(_ktype94, _vtype95, _size92, _sizeUnknown93);
                  if (_ktype94 == apache::thrift::protocol::T_STOP) {_ktype94 = apache::thrift::protocol::T_I16;}
                  if (_vtype95 == apache::thrift::protocol::T_STOP) {_vtype95 = apache::thrift::protocol::T_FLOAT;}
                  if (!_sizeUnknown93) {
                    uint32_t _i98;
                    for (_i98 = 0; _i98 < _size92; ++_i98)
                    {
                      int16_t _key99;
                      xfer += readIntegral(*iprot, _ktype94, _key99);
                      float& _val100 = _val91[_key99];
                      xfer += readFloatingPoint(*iprot, _vtype95, _val100);
                    }
                  } else {
                    while (iprot->peekMap())
                    {
                      int16_t _key101;
                      xfer += readIntegral(*iprot, _ktype94, _key101);
                      float& _val102 = _val91[_key101];
                      xfer += readFloatingPoint(*iprot, _vtype95, _val102);
                    }
                  }
                  xfer += iprot->readMapEnd();
                }
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.mp = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 3:
        if (_ftype == apache::thrift::protocol::T_SET) {
          {
            this->s.clear();
            uint32_t _size103;
            bool _sizeUnknown104;
            apache::thrift::protocol::TType _etype107;
            xfer += iprot->readSetBegin(_etype107, _size103, _sizeUnknown104);
            if (!_sizeUnknown104) {
              uint32_t _i109;
              for (_i109 = 0; _i109 < _size103; ++_i109)
              {
                FloatFeatures _elem110;
                {
                  _elem110.clear();
                  uint32_t _size111;
                  bool _sizeUnknown112;
                  apache::thrift::protocol::TType _ktype113 = apache::thrift::protocol::T_STOP;
                  apache::thrift::protocol::TType _vtype114 = apache::thrift::protocol::T_STOP;
                  xfer += iprot->readMapBegin(_ktype113, _vtype114, _size111, _sizeUnknown112);
                  if (_ktype113 == apache::thrift::protocol::T_STOP) {_ktype113 = apache::thrift::protocol::T_I16;}
                  if (_vtype114 == apache::thrift::protocol::T_STOP) {_vtype114 = apache::thrift::protocol::T_FLOAT;}
                  if (!_sizeUnknown112) {
                    uint32_t _i117;
                    for (_i117 = 0; _i117 < _size111; ++_i117)
                    {
                      int16_t _key118;
                      xfer += readIntegral(*iprot, _ktype113, _key118);
                      float& _val119 = _elem110[_key118];
                      xfer += readFloatingPoint(*iprot, _vtype114, _val119);
                    }
                  } else {
                    while (iprot->peekMap())
                    {
                      int16_t _key120;
                      xfer += readIntegral(*iprot, _ktype113, _key120);
                      float& _val121 = _elem110[_key120];
                      xfer += readFloatingPoint(*iprot, _vtype114, _val121);
                    }
                  }
                  xfer += iprot->readMapEnd();
                }
                this->s.insert(_elem110);
              }
            } else {
              while (iprot->peekSet())
              {
                FloatFeatures _elem122;
                {
                  _elem122.clear();
                  uint32_t _size123;
                  bool _sizeUnknown124;
                  apache::thrift::protocol::TType _ktype125 = apache::thrift::protocol::T_STOP;
                  apache::thrift::protocol::TType _vtype126 = apache::thrift::protocol::T_STOP;
                  xfer += iprot->readMapBegin(_ktype125, _vtype126, _size123, _sizeUnknown124);
                  if (_ktype125 == apache::thrift::protocol::T_STOP) {_ktype125 = apache::thrift::protocol::T_I16;}
                  if (_vtype126 == apache::thrift::protocol::T_STOP) {_vtype126 = apache::thrift::protocol::T_FLOAT;}
                  if (!_sizeUnknown124) {
                    uint32_t _i129;
                    for (_i129 = 0; _i129 < _size123; ++_i129)
                    {
                      int16_t _key130;
                      xfer += readIntegral(*iprot, _ktype125, _key130);
                      float& _val131 = _elem122[_key130];
                      xfer += readFloatingPoint(*iprot, _vtype126, _val131);
                    }
                  } else {
                    while (iprot->peekMap())
                    {
                      int16_t _key132;
                      xfer += readIntegral(*iprot, _ktype125, _key132);
                      float& _val133 = _elem122[_key132];
                      xfer += readFloatingPoint(*iprot, _vtype126, _val133);
                    }
                  }
                  xfer += iprot->readMapEnd();
                }
                this->s.insert(_elem122);
              }
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.s = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      default:
        xfer += iprot->skip(_ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void NewStructureNested::__clear() {
  lst.clear();
  mp.clear();
  s.clear();
  __isset.__clear();
}
uint32_t NewStructureNested::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("NewStructureNested");
  xfer += oprot->writeFieldBegin("lst", apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(apache::thrift::protocol::T_MAP, this->lst.size());
    std::vector<FloatFeatures> ::const_iterator _iter134;
    for (_iter134 = this->lst.begin(); _iter134 != this->lst.end(); ++_iter134)
    {
      {
        xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_FLOAT, (*_iter134).size());
        std::map<int16_t, float> ::const_iterator _iter135;
        for (_iter135 = (*_iter134).begin(); _iter135 != (*_iter134).end(); ++_iter135)
        {
          xfer += oprot->writeI16(_iter135->first);
          xfer += oprot->writeFloat(_iter135->second);
        }
        xfer += oprot->writeMapEnd();
      }
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("mp", apache::thrift::protocol::T_MAP, 2);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_MAP, this->mp.size());
    std::map<int16_t, FloatFeatures> ::const_iterator _iter136;
    for (_iter136 = this->mp.begin(); _iter136 != this->mp.end(); ++_iter136)
    {
      xfer += oprot->writeI16(_iter136->first);
      {
        xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_FLOAT, _iter136->second.size());
        std::map<int16_t, float> ::const_iterator _iter137;
        for (_iter137 = _iter136->second.begin(); _iter137 != _iter136->second.end(); ++_iter137)
        {
          xfer += oprot->writeI16(_iter137->first);
          xfer += oprot->writeFloat(_iter137->second);
        }
        xfer += oprot->writeMapEnd();
      }
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("s", apache::thrift::protocol::T_SET, 3);
  {
    xfer += oprot->writeSetBegin(apache::thrift::protocol::T_MAP, this->s.size());
    std::set<FloatFeatures> ::const_iterator _iter138;
    for (_iter138 = this->s.begin(); _iter138 != this->s.end(); ++_iter138)
    {
      {
        xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I16, apache::thrift::protocol::T_FLOAT, (*_iter138).size());
        std::map<int16_t, float> ::const_iterator _iter139;
        for (_iter139 = (*_iter138).begin(); _iter139 != (*_iter138).end(); ++_iter139)
        {
          xfer += oprot->writeI16(_iter139->first);
          xfer += oprot->writeFloat(_iter139->second);
        }
        xfer += oprot->writeMapEnd();
      }
    }
    xfer += oprot->writeSetEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(NewStructureNested &a, NewStructureNested &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.lst, b.lst);
  swap(a.mp, b.mp);
  swap(a.s, b.s);
  swap(a.__isset, b.__isset);
}

void merge(const NewStructureNested& from, NewStructureNested& to) {
  using apache::thrift::merge;
  merge(from.lst, to.lst);
  to.__isset.lst = to.__isset.lst || from.__isset.lst;
  merge(from.mp, to.mp);
  to.__isset.mp = to.__isset.mp || from.__isset.mp;
  merge(from.s, to.s);
  to.__isset.s = to.__isset.s || from.__isset.s;
}

void merge(NewStructureNested&& from, NewStructureNested& to) {
  using apache::thrift::merge;
  merge(std::move(from.lst), to.lst);
  to.__isset.lst = to.__isset.lst || from.__isset.lst;
  merge(std::move(from.mp), to.mp);
  to.__isset.mp = to.__isset.mp || from.__isset.mp;
  merge(std::move(from.s), to.s);
  to.__isset.s = to.__isset.s || from.__isset.s;
}


