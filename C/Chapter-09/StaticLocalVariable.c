#include <stdio.h>

void SimpleFunc(void){
  static int num1=0;  // 초기화 안하면 0으로 자동 초기화
  int num2=0; // 초기화 안하면 쓰레기 값 초기화
  num1++, num2++;
  printf("static: %d, local: %d \n", num1, num2);
}

int main(){
  int i;
  for(i=0;i<3;i++){
    SimpleFunc();
  }
  return 0;
}