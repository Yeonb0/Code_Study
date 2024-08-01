public class Question5 {
  public static void main(String[] args) {
    System.out.println("2^10 = " + powerTwo(10));
    System.out.println("2^20 = " + powerTwo(20));
  }

  public static int powerTwo(int n) {
    if(n==1)
      return 2;
    else
      return (2 * powerTwo(n-1));
  }
}
