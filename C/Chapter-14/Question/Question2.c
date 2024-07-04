#include <stdio.h>

void Swap3(int *num1, int *num2, int *num3){
  int temp = *num3;
  *num3 = *num1;
  *num1 = *num2;
  *num2 = temp;
}

int main(){
  int num1, num2, num3;
  printf("Enter three integers: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  printf("Before swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
  Swap3(&num1, &num2, &num3);
  printf("After swapping: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
  return 0;
}