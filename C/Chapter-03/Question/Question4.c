#include <stdio.h>

int main(){
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("몫은 %d, 나머지는 %d 입니다.", num1/num2, num1%num2);

  return 0; 
}