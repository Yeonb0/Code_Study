public class Question3 {
  public static void main(String[] args) {
    int num = 1, sum = 0;
    while(num < 1000){
      if((num % 2==0) && (num % 7==0)){
        System.out.print(num + " ");
        sum += num;
      }
      num++;
    }
    System.out.println("\nsum = " + sum);
  }
}
