public class Question1 {
  public static void main(String[] args) {
    int num1 = 30, num2= 10;
    Calculate(num1, num2);
  }

  public static void Calculate(int num1, int num2) {
    System.out.println(num1 + " + " + num2 + " = " + (num1 + num2));
    System.out.println(num1 + " - " + num2 + " = " + (num1 - num2));
    System.out.println(num1 + " * " + num2 + " = " + (num1 * num2));
    System.out.println(num1 + " / " + num2 + " = " + (num1 / num2));
    System.out.println(num1 + " % " + num2 + " = " + (num1 % num2));
  }
}
