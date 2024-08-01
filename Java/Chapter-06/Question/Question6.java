public class Question6 {
  public static void main(String[] args) {
    System.out.println("12의 이진수: " );
    printBinaryNum(12);
    System.out.print("\n");
    System.out.println("30의 이진수: " );
    printBinaryNum(30);
  }

  public static void printBinaryNum(int n){  // n의 이진수 출력
    if(n < 2){
      System.out.print(n);
    }else{
      printBinaryNum(n/2);
      System.out.print(n%2);
    }
  } 
}
