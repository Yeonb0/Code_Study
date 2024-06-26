#include <stdio.h>

int main(){
  int num= 0;
  int sum = 0;
  int total = 0;

  while(total<5){
    num = 0;
    while(num<=0){
      printf("1 이상의 정수 입력: ");
      scanf("%d", &num);
    }
    sum += num;
    total++;
  }

  printf("총합: %d",sum);
  
  return 0;
}