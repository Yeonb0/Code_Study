class BankAccount {
  int balance = 0;  // 예금 잔액

  public int deposit(int amount) {  // 입금 메소드
    balance += amount;
    return balance;
  }

  public int withdraw(int amount) {  // 출금 메소드
    balance -= amount;
    return balance;
  }

  public int checkMyBalance() {  // 잔액 확인 메소드
    System.out.println("잔액: " + balance);
    return balance;
  }
}

public class PassingRef {
  public static void main(String[] args) {
    BankAccount ref = new BankAccount();
    ref.deposit(3000);
    ref.withdraw(300);
    check(ref);  // '참조 값의 전달'
  }

  public static void check(BankAccount acc) {
    acc.checkMyBalance();
  }
}