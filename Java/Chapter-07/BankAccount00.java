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

public class BankAccount00 {
  public static void main(String[] args) {
    // 두 개의 인스턴스 생성
    BankAccount yoon = new BankAccount();
    BankAccount park = new BankAccount();

    // 각 인스턴스 대상 예금 진행
    yoon.deposit(5000);
    park.deposit(3000);

    // 각 인스턴스 대상 출금 진행
    yoon.withdraw(2000);
    park.withdraw(2000);

    // 각 인스턴스 대상 잔액 확인
    yoon.checkMyBalance();
    park.checkMyBalance();
  }
}
