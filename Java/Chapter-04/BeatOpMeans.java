public class BeatOpMeans {
  public static void main(String[] args) {
    byte n1 = 13;
    byte n2 = 7;
    byte n3 = (byte)(n1 & n2);  // 비트 연산 &의 결과는 int형
    System.out.println(n3);  // 5
  }
}
