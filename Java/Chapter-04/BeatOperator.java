public class BeatOperator {
  public static void main(String[] args) {
    byte num1 = 5;
    byte num2 = 3;
    byte num3 = -1;

    byte result1 = (byte)(num1 & num2);  // 1
    byte result2 = (byte)(num1 | num2);  // 7
    byte result3 = (byte)(num1 ^ num2);  // 6
    byte result4 = (byte)(~num3);  // 0

    System.out.println(result1);
    System.out.println(result2);
    System.out.println(result3);
    System.out.println(result4);
  }
}
