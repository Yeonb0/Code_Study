public class Question7 {
  public static void main(String[] args) {
    for(int i = 2; i<=8; i+=2){
      for(int j = 1; j<=i; j++){
        System.out.print(i + " X " + j + " = " + i*j + "   ");
      }
      System.out.println();
    }
  }
}
