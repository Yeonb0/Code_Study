public class Question6 {
  public static void main(String[] args) {
    int num = 15678;
    // 오른쪽에서 3번째, 5번째 비트 출력
    System.out.println("3번째 비트: " + ((num & 0b100) >> 2));
    System.out.println("5번째 비트: " + ((num & 0b10000) >> 4));
  }
}
