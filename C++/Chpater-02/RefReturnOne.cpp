#include <iostream>
using namespace std;

int & RefRetFuncOne(int &ref){
  ref++;
  return ref;
}

int main(){
  int num1=1;
  int &num2=RefRetFuncOne(num1);

  num1++;
  num2++;
  cout<<"num1: "<<num1<<endl;
  cout<<"num2: "<<num2<<endl;  // num1 과 num2 는 같은 변수
  
  return 0;
}