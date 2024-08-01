public class ContinueBasic {
  public static void main(String[] args) {
    int num = 0, count = 0;
    
    while((num++) < 100){
      if(((num % 5) != 0) || ((num % 7) != 0))
        continue;   // 5의 배수도 아니고 7의 배수도 아닌 경우 
      count++;  // 5의 배수이자 7의 배수인 경우만 실행
      System.out.println(num);  // 5의 배수이자 7의 배수인 수를 출력
    }
    System.out.println("count: " + count);
  }
}
