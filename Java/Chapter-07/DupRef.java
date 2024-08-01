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

public class DupRef{
  public static void main(String[] args) {
    BankAccount ref1 = new BankAccount();
    BankAccount ref2 = ref1;

    ref1.deposit(3000);
    ref2.deposit(2000);
    ref1.withdraw(400);
    ref2.withdraw(300);
    ref1.checkMyBalance();
    ref2.checkMyBalance();
  }
}