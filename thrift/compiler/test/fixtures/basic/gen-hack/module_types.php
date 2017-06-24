<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift enum:-
 * MyEnum
 */
enum MyEnum : int {
  MyValue1 = 0;
  MyValue2 = 1;
}
type MyEnumType = MyEnum;

/**
 * Original thrift struct:-
 * MyStruct
 */
class MyStruct implements \IThriftStruct, \IThriftShapishStruct {
  public static array $_TSPEC = array(
    1 => array(
      'var' => 'MyIntField',
      'type' => \TType::I64,
      ),
    2 => array(
      'var' => 'MyStringField',
      'type' => \TType::STRING,
      ),
    );
  public static Map<string, int> $_TFIELDMAP = Map {
    'MyIntField' => 1,
    'MyStringField' => 2,
  };
  const type TShape = shape(
    'MyIntField' => int,
    'MyStringField' => string,
  );
  const int STRUCTURAL_ID = 4929291502389600438;
  /**
   * Original thrift field:-
   * 1: i64 MyIntField
   */
  public int $MyIntField;
  /**
   * Original thrift field:-
   * 2: string MyStringField
   */
  public string $MyStringField;

  public function __construct(?int $MyIntField = null, ?string $MyStringField = null  ) {
    if ($MyIntField === null) {
      $this->MyIntField = 0;
    } else {
      $this->MyIntField = $MyIntField;
    }
    if ($MyStringField === null) {
      $this->MyStringField = '';
    } else {
      $this->MyStringField = $MyStringField;
    }
  }

  public function getName(): string {
    return 'MyStruct';
  }

  public static function __jsonArrayToShape(
    array<arraykey, mixed> $json_data,
  ): ?self::TShape {
    $shape_data = $json_data;

    if (!array_key_exists('MyIntField', $shape_data)) {
      $shape_data['MyIntField'] = 0;
    }
    if (!is_int($shape_data['MyIntField'])) {
      return null;
    }

    if (!array_key_exists('MyStringField', $shape_data)) {
      $shape_data['MyStringField'] = '';
    }
    if (!is_string($shape_data['MyStringField'])) {
      return null;
    }

    return /* HH_IGNORE_ERROR[4110] */ $shape_data;
  }

  public static function __fromShape(self::TShape $shape): this {
    $me = /* HH_IGNORE_ERROR[4060] */ new static();
    $me->MyIntField = $shape['MyIntField'];
    $me->MyStringField = $shape['MyStringField'];
    return $me;
  }

  public function __toShape(): self::TShape {
    return shape(
      'MyIntField' => $this->MyIntField,
      'MyStringField' => $this->MyStringField,
    );
  }
  public function read(\TProtocol $input): int {
    $xfer = 0;
    $fname = '';
    $ftype = 0;
    $fid = 0;
    $xfer += $input->readStructBegin($fname);
    while (true)
    {
      $xfer += $input->readFieldBegin($fname, $ftype, $fid);
      if ($ftype == \TType::STOP) {
        break;
      }
      if (!$fid && $fname !== null) {
        $fid = (int) self::$_TFIELDMAP->get($fname);
        if ($fid !== 0) {
          $ftype = self::$_TSPEC[$fid]['type'];
        }
      }
      switch ($fid)
      {
        case 1:
          if ($ftype == \TType::I64) {
            $xfer += $input->readI64($this->MyIntField);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        case 2:
          if ($ftype == \TType::STRING) {
            $xfer += $input->readString($this->MyStringField);
          } else {
            $xfer += $input->skip($ftype);
          }
          break;
        default:
          $xfer += $input->skip($ftype);
          break;
      }
      $xfer += $input->readFieldEnd();
    }
    $xfer += $input->readStructEnd();
    return $xfer;
  }

  public function write(\TProtocol $output): int {
    $xfer = 0;
    $xfer += $output->writeStructBegin('MyStruct');
    if ($this->MyIntField !== null) {
      $_val0 = $this->MyIntField;
      $xfer += $output->writeFieldBegin('MyIntField', \TType::I64, 1);
      $xfer += $output->writeI64($_val0);
      $xfer += $output->writeFieldEnd();
    }
    if ($this->MyStringField !== null) {
      $_val1 = $this->MyStringField;
      $xfer += $output->writeFieldBegin('MyStringField', \TType::STRING, 2);
      $xfer += $output->writeString($_val1);
      $xfer += $output->writeFieldEnd();
    }
    $xfer += $output->writeFieldStop();
    $xfer += $output->writeStructEnd();
    return $xfer;
  }

}

