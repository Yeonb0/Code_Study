import static java.lang.Math.*;

public class StaticImport {
  public static void main(String[] args) {
    System.out.println(E);
    System.out.println(PI);

    System.out.println(abs(-55));  // 절댓값 반환
    System.out.println(max(55, 77));  // 더 큰 값 반환
    System.out.println(min(55, 77));  // 더 작은 값 반환
  }
}
