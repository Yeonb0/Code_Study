#include <stdio.h>

int main(){
  int num1, num2, num3;
  printf("세 개의 정수 입력: ");
  scanf("%d %o %x", &num1, &num2, &num3);

  printf("입력된 정수 10진수 출력: ");
  printf("%d %d %d", num1, num2, num3);

  return 0;
}