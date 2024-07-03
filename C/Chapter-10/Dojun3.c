#include <stdio.h>

int GetGCD(int num1, int num2){
  while(num2!= 0){
    int temp = num2;
    num2 = num1 % num2;
    num1 = temp;
  }
  return num1;
}

int main(){
  int num1, num2;
  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);
  printf("GCD: %d\n", GetGCD(num1, num2));

  return 0;
}