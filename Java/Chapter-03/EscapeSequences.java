public class EscapeSequences {
  public static void main(String[] args) {
    System.out.println("AB" + '\b' + 'C'); // "A" + "C"
    System.out.println("AB" + '\t' + 'C'); // "A" + "    " + "C"
    System.out.println("AB" + '\n' + 'C'); // "A" + 줄바꿈 + "C"
    System.out.println("AB" + '\r' + 'C'); // "C" + "B"
  }
}
