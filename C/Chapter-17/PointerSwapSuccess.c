#include <stdio.h>

void SwapIntPtr(int **dp1, int **dp2){
  int *temp = *dp1;
  *dp1 = *dp2;
  *dp2 = temp;
}

int main(){
  int num1 = 10;
  int num2 = 20;
  int *p1 = &num1;
  int *p2 = &num2;
  printf("*ptr1, *ptr2: %d %d \n", *p1, *p2);

  SwapIntPtr(&p1, &p2);  // 주소 값 전달
  printf("*ptr1, *ptr2: %d %d \n", *p1, *p2);
  return 0;
}