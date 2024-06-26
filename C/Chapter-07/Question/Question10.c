#include <stdio.h>

int main(){
  int start = 1;
  int end;
  int num = 1;

  printf("How Factorial? ");
  scanf("%d", &end);

  for( ; start<=end; start++){
    num *= start;
  }
  printf("%d! = %d\n", end,num);

  return 0;
}