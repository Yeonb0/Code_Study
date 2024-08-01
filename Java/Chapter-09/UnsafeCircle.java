class Circle{
  double rad = 0; // 원의 반지름
  final double PI = 3.14;

  public void setRad(double r){
    if(r < 0){
      rad = 0;
      return;
    }
    rad = r;
  }

  public double getArea(){
    return rad * rad * PI;  // 원의 넓이 반환
  }
}

public class UnsafeCircle {
  public static void main(String[] args) {
    Circle c = new Circle();
    c.setRad(1.5);  
    System.out.println("반지름 1.5인 원의 넓이: " + c.getArea());

    c.setRad(2.5); 
    System.out.println("반지름 2.5인 원의 넓이: " + c.getArea());

    c.setRad(-3.3);  
    System.out.println("반지름 -3.3인 원의 넓이: " + c.getArea());

    c.rad = -4.5;  // 올바르지 않은 접근
    System.out.println("반지름 -4.5인 원의 넓이: " + c.getArea());
  }
}