class Circle{
  static final double PI = 3.1415;  // 변하지 않는, 참조가 목적인 값
  private double radius;

  Circle(double rad){
    radius = rad;
  }
  void showPerimeter(){
    double peri = (radius * 2) * PI;
    System.out.println("둘레: " + peri);
  }
  void showArea(){
    double area = (radius * radius) * PI;
    System.out.println("넓이: " + area);
  }
}

public class CircleConstPI {
  public static void main(String[] args){
    Circle c = new Circle(1.2);
    c.showPerimeter();
    c.showArea();
  }
}
