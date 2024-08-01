class BankAccountID {
  String accNumber;  // 계좌번호
  String ssNumber;   // 주민번호
  int balance = 0;   // 예금 잔액

  public BankAccountID(String acc, String ss, int bal) {  // 생성자
    accNumber = acc;
    ssNumber = ss;
    balance = bal;
  }

  public int deposit(int amount) {  // 입금 메소드
    balance += amount;
    return balance;
  }

  public int withdraw(int amount) {  // 출금 메소드
    balance -= amount;
    return balance;
  }

  public int checkMyBalance() {  // 잔액 확인 메소드
    System.out.println("계좌번호: " + accNumber);
    System.out.println("주민번호: " + ssNumber);
    System.out.println("잔액: " + balance + '\n');
    return balance;
  }
}

public class BankAccountConstructor{
  public static void main(String[] args) {
    BankAccountID yoon = new BankAccountID("12-34-89", "990990-9090990", 10000);

    BankAccountID park = new BankAccountID("33-55-09", "770088-5959007", 10000);

    yoon.deposit(5000);
    park.deposit(3000);

    yoon.withdraw(2000);
    park.withdraw(2000);

    yoon.checkMyBalance();
    park.checkMyBalance();
  }
}
