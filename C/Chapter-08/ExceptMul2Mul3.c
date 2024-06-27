#include <stdio.h>

int main(){
  int num;
  printf("Start! ");

  for(num=1;num<20;num++){
    if(num%2==0 || num%3==0)
      continue;  // 아래 printf 생략
    printf("%d ",num);
  }
  printf("end! ");

  return 0;
}