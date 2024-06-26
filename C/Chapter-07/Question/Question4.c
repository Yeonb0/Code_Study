#include <stdio.h>

int main(){
  int start = 9;
  int num;
  printf("Enter the number: ");
  scanf("%d", &num);

  while(start > 0){
    printf("%d x %d = %d \n", num, start, num*start);
    start--;
  }

  return 0;
}