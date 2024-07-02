#include <stdio.h>

int SimpleFuncOne(void){
  int num = 0;  // num 유효
  num++;
  printf("SimpleFuncOne num: %d\n", num);
  return 0;  // num 소멸
}

int SimpleFuncTwo(void){
  int num1 = 20;  // num1 유효
  int num2 = 30;  // num2 유효 
  num1++, num2--;
  printf("num1 & num2: %d %d\n", num1, num2);
  return 0;  // num1, num2 소멸
}

int main(void){
  int num = 17;  // main의 num 유효
  SimpleFuncOne();
  SimpleFuncTwo();
  printf("main num: %d\n", num);
  return 0;  // main의 num 소멸
}