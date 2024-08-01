public class Question3 {
  public static void main(String[] args) {
    double radius = 3.5;
    System.out.println("반지름이 3.5인 원의 넓이: " + circleArea(radius));
    System.out.println("반지름이 3.5인 원의 둘레: " + circleRound(radius));
  }

  public static double circleArea(double radius) {
    return 3.14 * radius * radius;
  }

  public static double circleRound(double radius) {
    return 2 * 3.14 * radius;
  }
}
