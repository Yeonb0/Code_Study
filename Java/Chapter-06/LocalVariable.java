public class LocalVariable {
  public static void main(String[] args) {
    boolean ste = true;
    int num1 = 11;

    if(ste){
      //int num1 = 22; // 주석 해체할 시 컴파일 에러
      num1++;
      System.out.println("num1 = " + num1);
    }

    {
      int num2 = 33;
      num2++;
      System.out.println("num2 = " + num2);
    }
    //System.out.println("num2 = " + num2); // 주석 해체할 시 컴파일 에러
  }
}
