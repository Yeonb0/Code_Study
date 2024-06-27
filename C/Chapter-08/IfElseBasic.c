#include <stdio.h>

int main(){
  int num;
  printf("정수 입력: ");
  scanf("%d", &num);

  if(num<0)
    printf("입력 값은 0보다 작다. \n");
  else
    printf("입력 값은 0보다 크거나 같다. \n");

  return 0;
}