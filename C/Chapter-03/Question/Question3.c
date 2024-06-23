#include <stdio.h>

int main(){
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  printf("%d^2 = %d", num, num*num);
  
  return 0;
}