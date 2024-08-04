import java.time.LocalDateTime;

public class DataOfExecution {
  static String date;

  static {  // 클래스 로딩 시 단 한번 실행
    LocalDateTime current = LocalDateTime.now();
    date = current.toString();
  }

  public static void main(String[] args) {
    System.out.println(date);
  }
}
