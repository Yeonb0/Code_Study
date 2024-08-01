public class Question2 {
  public static void main(String[] args) {
    int num1 = -50, num2 = 30;
    int result = Abs(num1, num2);
    System.out.println("절댓값: " + result);
  }

  public static int Abs(int num1, int num2) {
    return num1 > num2 ? num1 - num2 : num2 - num1;
  }
}
