public class BeatShiftOp {
  public static void main(String[] args) {
    byte num;

    num = 2;
    System.out.print((byte)(num << 1) + " ");  // 4
    System.out.print((byte)(num << 2) + " ");  // 8
    System.out.print((byte)(num << 3) + "\n");  // 16

    num = 8;
    System.out.print((byte)(num >> 1) + " ");  // 4
    System.out.print((byte)(num >> 2) + " ");  // 2
    System.out.print((byte)(num >> 3) + "\n");  // 1

    num = -8;
    System.out.print((byte)(num >> 1) + " ");  // -4
    System.out.print((byte)(num >> 2) + " ");  // -2
    System.out.print((byte)(num >> 3) + "\n");  // -1
  }
}