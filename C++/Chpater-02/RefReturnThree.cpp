#include <iostream>
using namespace std;

int RefRetFuncTwo(int &ref){  // 반환형이 int
  ref++;  
  return ref;
}

int main(){
  int num1=1;
  int num2=RefRetFuncTwo(num1);

  num1+=1;
  num2+=100;  // num1 과 num2 는 다른 변수
  cout<<"num1: "<<num1<<endl;
  cout<<"num2: "<<num2<<endl;
  
  return 0;
}