#include <stdio.h>

int main(){
  int num1, num2, num3;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  printf("(%d-%d)x(%d+%d)x(%d%%%d)=%d", num1, num2, num2, num3, num3, num1, (num1-num2)*(num2+num3)*(num3%num1));

  return 0;
}