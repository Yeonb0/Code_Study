#include <stdio.h>

int SquareByValue(int num){
  return num * num;
}

void SquareByReference(int *num){
  *num = *num * *num;
}

int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  
  printf("Square by value: %d\n", SquareByValue(num));
  SquareByReference(&num);
  printf("Square by reference: %d\n", num);
  
  return 0;
}