#include <stdio.h>

int main(){
  int num;
  int start = 0;
  printf("Enter Number: ");
  scanf("%d", &num);

  while(start < num){
    printf("Hello world!\n");
    start++;
  }

  return 0;
}