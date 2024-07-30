public class Constants {
  public static void main(String[] args) {
    final int MAX_SIZE = 100; // 상수 선언
    final char CONST_CHAR = '상'; 
    final int CONST_ASSIGNED; 
    CONST_ASSIGNED = 12; // 할당하지 않았던 상수의 값 할당, 한 번만 가능
    System.out.println("상수1 : " + MAX_SIZE);
    System.out.println("상수2 : " + CONST_CHAR);
    System.out.println("상수3 : " + CONST_ASSIGNED);
  }
}