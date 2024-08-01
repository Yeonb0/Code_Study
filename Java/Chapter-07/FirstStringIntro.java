public class FirstStringIntro {
  public static void main(String[] args) {
    // 문자열 선언과 동시에 참조변수로 참조
    String str1 = "Happy";
    String str2 = "Birthday";
    System.out.println(str1 + " " + str2);

    // 메소드에 문자열 전달하는 다양한 방법
    printString(str1);
    printString(" ");
    printString(str2);
    printString("\n");
    printString("End of program!\n");
  }

  public static void printString(String str){
    System.out.print(str);
  }
}
