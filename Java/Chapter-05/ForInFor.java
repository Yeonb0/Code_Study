public class ForInFor {
  public static void main(String[] args) {
    for(int i=0; i<3; i++){
      System.err.println("--------------------");
      for(int j=0; j<3; j++){
        System.out.print("[" + i + ", " + j + "] "); 
      }
      System.err.print("\n");
    }
  }
}
