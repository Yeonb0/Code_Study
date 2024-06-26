#include <stdio.h>

int main(){
  int sum=0;
  int num;

  while(1){
    printf("Enter number: ");
    scanf("%d", &num);
    sum += num;
    if (num == 0) break;
  }
  printf("sum = %d\n", sum);

  return 0;
}