#include <stdio.h>

struct employee{
  char name[20];
  char num[20];
  int pay;
}; 

int main(){
  struct employee e1;
  printf("이름을 입력하세요: ");
  scanf("%s",e1.name);
  printf("주민번호를 입력하세요: ");
  scanf("%s",e1.num);
  printf("급여를 입력하세요: ");
  scanf("%d",&e1.pay);

  printf("이름: %s\n",e1.name);
  printf("주민번호: %s\n",e1.num);
  printf("급여: %d\n",e1.pay);
  return 0;
}