#include <stdio.h>

int main(){
  int num;
  int start = 1;
  printf("Enter the number: ");
  scanf("%d", &num);

  while(start<=num){
    printf("3 x %d = %d\n", start, start*3);
    start++;
  }

  return 0;
}