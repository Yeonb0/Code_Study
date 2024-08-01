public class Question2 {
  public static void main(String[] args) {
    int start = 1;
    while(start <= 100){
      System.out.print(start + " ");
      start++;
    }
    System.out.print("\n");
    start--;
    do{
      System.out.print(start + " ");
      start--;
    }while(start > 0);
  }
}
