#include <stdio.h>

int main(){
  int num1, num2;
  int result;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  result = (num1>num2) ? (num1-num2) : (num2-num1);
  printf("계산 결과: %d", result);

  return 0;
}