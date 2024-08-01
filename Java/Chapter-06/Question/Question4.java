public class Question4 {
  public static void main(String[] args) {
    for(int i=1;i<=100;i++){
      if(primeCheck(i)){
        System.out.print(i + " ");
      }
    }
  }

  public static boolean primeCheck(int num) {
    if(num == 1) return false;
    for(int i=2;i<num;i++){
      if(num % i == 0) return false;
    }
    return true;
  }
}
