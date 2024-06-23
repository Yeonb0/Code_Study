#include <stdio.h>

int main(){
  int num1, num2;  // 변수 num1, num2 선언
  int num3=30, num4=40;  // 변수 num3, num4 선언 및 초기화

  printf("num1: %d, num2: %d\n", num1, num2);  // 쓰레기값 출력
  num1=10;  // 변수 num1 초기화
  num2=20;  // 변수 num2 초기화

  printf("num1: %d, num2: %d\n", num1, num2);
  printf("num3: %d, num4: %d\n", num3, num4);

  return 0;
}