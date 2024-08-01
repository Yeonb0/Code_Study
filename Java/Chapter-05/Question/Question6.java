public class Question6 {
  public static void main(String[] args) {
    int sum = 0;
    for(int i = 1; ; i++){
      if(i % 2 != 0){
        sum += i;
      }
      if(sum > 1000){
        System.out.println("sum = " + sum);
        System.out.println("i = " + i);
        break;
      }
    }
  }
}
