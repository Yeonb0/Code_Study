#include <stdio.h>

void Dan(int num){
  for(int i=1; i<=9; i++){
    printf("%2d x %2d = %2d   ", num, i, num*i);
  }
  printf("\n");
}

void DanToDan(int num1, int num2){
  if(num1>num2){
    for(int i=num2; i<=num1; i++){
      Dan(i);
    }
  }else{
    for(int i=num1; i<=num2; i++){
      Dan(i);
    }
  }
}

int main(){
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  DanToDan(num1, num2);
  return 0;
}