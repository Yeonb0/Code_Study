public class InfRecul {
  public static void main(String[] args) {
    ShowHi(3);
  }

  public static void ShowHi(int n) {
    if (n == 0) {
      return;
    }
    System.out.println("Hi~");
    ShowHi(n - 1);
  }
}
