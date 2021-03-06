/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial", "unchecked" })
public class Nada extends TUnion<Nada> implements Comparable<Nada> {
  private static final TStruct STRUCT_DESC = new TStruct("Nada");


  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  public Nada() {
    super();
  }

  public Nada(int setField, Object __value) {
    super(setField, __value);
  }

  public Nada(Nada other) {
    super(other);
  }

  public Nada deepCopy() {
    return new Nada(this);
  }


  @Override
  protected void checkType(short setField, Object __value) throws ClassCastException {
    switch (setField) {
      default:
        throw new IllegalArgumentException("Unknown field id " + setField);
    }
  }

  @Override
  public void read(TProtocol iprot) throws TException {
    setField_ = 0;
    value_ = null;
    iprot.readStructBegin(metaDataMap);
    TField __field = iprot.readFieldBegin();
    if (__field.type != TType.STOP)
    {
      value_ = readValue(iprot, __field);
      if (value_ != null)
      {
        switch (__field.id) {
        }
      }
      iprot.readFieldEnd();
      iprot.readFieldBegin();
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();
  }

  @Override
  protected Object readValue(TProtocol iprot, TField __field) throws TException {
    switch (__field.id) {
    }
    TProtocolUtil.skip(iprot, __field.type);
    return null;
  }

  @Override
  protected void writeValue(TProtocol oprot, short setField, Object __value) throws TException {
    switch (setField) {
      default:
        throw new IllegalStateException("Cannot write union with unknown field " + setField);
    }
  }

  @Override
  protected TField getFieldDesc(int setField) {
    switch (setField) {
      default:
        throw new IllegalArgumentException("Unknown field id " + setField);
    }
  }

  @Override
  protected TStruct getStructDesc() {
    return STRUCT_DESC;
  }

  @Override
  protected Map<Integer, FieldMetaData> getMetaDataMap() { return metaDataMap; }

  private Object __getValue(int expectedFieldId) {
    if (getSetField() == expectedFieldId) {
      return getFieldValue();
    } else {
      throw new RuntimeException("Cannot get field '" + getFieldDesc(expectedFieldId).name + "' because union is currently set to " + getFieldDesc(getSetField()).name);
    }
  }

  private void __setValue(int fieldId, Object __value) {
    if (__value == null) throw new NullPointerException();
    setField_ = fieldId;
    value_ = __value;
  }


  public boolean equals(Object other) {
    if (other instanceof Nada) {
      return equals((Nada)other);
    } else {
      return false;
    }
  }

  public boolean equals(Nada other) {
    return equalsNobinaryImpl(other);
  }

  @Override
  public int compareTo(Nada other) {
    return compareToImpl(other);
  }


  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {getSetField(), getFieldValue()});
  }

}
