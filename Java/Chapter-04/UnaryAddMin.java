public class UnaryAddMin {
  public static void main(String[] args) {
    short num1 = 5;
    System.out.println(+num1);  // 5
    System.out.println(-num1);  // -5

    short num2 = 7;
    short num3 = (short)(+num2);  // 형 변환 안할 시 오류 발생
    short num4 = (short)(-num2);  // 형 변환 안할 시 오류 발생
    System.out.println(num3);  // 7
    System.out.println(num4);  // -7
  }
}
