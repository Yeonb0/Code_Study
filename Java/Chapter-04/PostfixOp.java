public class PostfixOp {
  public static void main(String[] args) {
    int num = 5;
    System.out.print((num++) + " ");  // 출력 후에 값이 추가
    System.out.print((num++) + " ");  // 출력 후에 값이 추가
    System.out.print(num + "\n");  

    System.out.print((num--) + " ");  // 출력 후에 값이 감소
    System.out.print((num--) + " ");  // 출력 후에 값이 감소
    System.out.print(num + "\n");
  }
}
