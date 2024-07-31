#include <iostream>
using namespace std;

int main(){
  int num1=1020;
  int &num2=num1;  // num2는 num1에 대한 참조자

  num2=3047;  // num2를 통해 num1의 값을 변경
  cout<<"VAL: "<<num1<<endl;
  cout<<"REF: "<<num2<<endl;

  cout<<"VAL: "<<&num1<<endl;
  cout<<"REF: "<<&num2<<endl;

  return 0;
}