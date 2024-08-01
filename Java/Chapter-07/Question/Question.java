class Triangle{
  double base;
  double height;

  public Triangle(double base, double height){
    this.base = base;
    this.height = height;
  }

  public double findArea(){
    return base * height / 2;
  }
}

public class Question {
  public static void main(String[] args) {
    Triangle t = new Triangle(10.0, 5.0);
    System.out.println("삼각형의 넓이: " + t.findArea());
  }
}
