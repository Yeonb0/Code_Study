#include <stdio.h>
int GetMaxNum(int num1, int num2, int num3);
int GetMinNum(int num1, int num2, int num3);

int main(){
  int num1, num2, num3;
  printf("Enter three integers: ");
  scanf("%d %d %d", &num1, &num2, &num3);
  
  printf("Largest value: %d \n", GetMaxNum(num1, num2, num3));
  printf("Smallest value: %d \n", GetMinNum(num1, num2, num3));
  
  return 0;
}

int GetMaxNum(int num1, int num2, int num3){
  return (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
}

int GetMinNum(int num1, int num2, int num3){
  return (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
}