public class Question8 {
  public static void main(String[] args) {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        if (11 * (i + j) == 99) {
          System.out.println(i + "" + j + " + " + j + "" + i + " = " + 11 * (i + j));
        }
      }
    }
  }
}
