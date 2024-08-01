public class LabeledBreakPoint {
  public static void main(String[] args) {
outer : for(int i=1; i<10; i++){
    for(int j=1; j<10; j++){
      if((i*j)==72){
        System.out.println(i + " X " + j + " = " + i*j);
        break outer;  // outer로 명시된 반복문까지 빠져나감
        }
      }
    }
  }
}
