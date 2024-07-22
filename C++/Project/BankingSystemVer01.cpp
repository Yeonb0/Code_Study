#include <iostream>
#include <cstring>
using namespace std;

const int NAME_LEN = 20;

void ShowMenu();        // 메뉴 출력
void MakeAccount();     // 계좌 개설
void DepositMoney();    // 입금
void WithdrawMoney();   // 출금
void ShowAllAccInfo();  // 잔액 조회

typedef struct {
  int accountID;     // 계좌ID
  char name[NAME_LEN];   // 이름
  int balance;           // 잔액
} Account;

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

Account accArr[100];  // 계좌 정보 저장 배열
int accNum = 0;       // 등록된 계좌 개수

int main() {
  int choice;
  while (true) {
    ShowMenu();
    cout << "선택: ";
    cin >> choice;
    cout << endl;
    switch (choice) {
      case MAKE:
        MakeAccount();
        break;
      case DEPOSIT:
        DepositMoney();
        break;
      case WITHDRAW:
        WithdrawMoney();
        break;
      case INQUIRE:
        ShowAllAccInfo();
        break;
      case EXIT:
        return 0;
      default:
        cout << "Invalid choice. Try again." << endl;
    }
  }
  return 0;
}

void ShowMenu() {
  cout << "----- Menu -----" << endl;
  cout << "1. 계좌개설" << endl;
  cout << "2. 입 금" << endl;
  cout << "3. 출 금" << endl;
  cout << "4. 계좌정보 전체 출력" << endl;
  cout << "5. 프로그램 종료" << endl;
}

void MakeAccount() {
  int id;
  char name[NAME_LEN];
  int balance;
  cout<<"[계좌계설]"<<endl;
  cout<<"계좌ID: ";
  cin>>id;
  cout<<"이름: ";
  cin>>name;
  cout<<"입금액: ";
  cin>>balance;
  accArr[accNum].accountID = id;
  strcpy(accArr[accNum].name, name);
  accArr[accNum].balance = balance;
  accNum++;
}

void DepositMoney() {
  int id, amount;
  cout<<"[입금]"<<endl;
  cout<<"계좌 ID: ";
  cin>>id;
  cout<<"입금액: ";
  cin>>amount;
  for(int i=0; i<accNum; i++) {
    if(accArr[i].accountID == id) {
      accArr[i].balance += amount;
      cout<<"입금 성공!"<<endl;
      cout<<"계좌 잔액: "<<accArr[i].balance<<endl<<endl;
      return;
    }
  }
  cout<<"유효하지 않은 ID 입니다."<<endl<<endl;
}

void WithdrawMoney() {
  int id, amount;
  cout<<"[출금]"<<endl;
  cout<<"계좌 ID: ";
  cin>>id;
  cout<<"출금액: ";
  cin>>amount;
  for(int i=0; i<accNum; i++) {
    if(accArr[i].accountID == id) {
      if(accArr[i].balance >= amount) {
        accArr[i].balance -= amount;
        cout<<"출금 성공!"<<endl;
        cout<<"계좌 잔액: "<<accArr[i].balance<<endl<<endl;
        return;
      } else {
        cout<<"잔액이 부족합니다."<<endl<<endl;
        return;
      }
    }
  }
  cout<<"유효하지 않은 ID 입니다."<<endl<<endl;
}

void ShowAllAccInfo() {
  for(int i=0; i<accNum; i++) {
    cout<<"ID: "<<accArr[i].accountID<<endl;
    cout<<"이름: "<<accArr[i].name<<endl;
    cout<<"����: "<<accArr[i].balance<<endl;
    cout<<endl;
  }
}