public class OperatePromotion {
  public static void main(String[] args) {
    short num1 = 11;
    short num2 = 22;
    // short result = num1 + num2; // 컴파일 오류 발생
    int result = num1 + num2; // short형 변수를 int형 변수에 대입
    System.out.println(result);
  }
}

// 자바는 정수형 연산을 int형으로 진행
