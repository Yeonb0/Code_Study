#include <iostream>
using namespace std;

void PlusOne(int &ref){
  ref++;
}

void ChangeSign(int &ref){
  ref=-ref;
}

int main(){
  int val=10;
  PlusOne(val);
  cout<<"VAL: "<<val<<endl;

  ChangeSign(val);
  cout<<"VAL: "<<val<<endl;

  return 0;
}