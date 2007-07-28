package java.lang;

public final class Short extends Number {
  public static final Class TYPE = Class.forCanonicalName("S");

  private final short value;

  public Short(short value) {
    this.value = value;
  }

  public byte byteValue() {
    return (byte) value;
  }

  public short shortValue() {
    return value;
  }

  public int intValue() {
    return value;
  }

  public long longValue() {
    return value;
  }

  public float floatValue() {
    return (float) value;
  }

  public double doubleValue() {
    return (double) value;
  }
}