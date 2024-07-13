#include <stdio.h>

struct employee{
  char name[20];
  char num[20];
  int pay;
}; 

int main(){
  struct employee e[3];
  int i;

  for(i=0;i<3;i++){
    printf("Enter name: ");
    scanf("%s",e[i].name);
    printf("Enter number: ");
    scanf("%s",e[i].num);
    printf("Enter pay: ");
    scanf("%d",&e[i].pay);
  }

  for(i=0;i<3;i++){
    printf("Name: %s\n",e[i].name);
    printf("Number: %s\n",e[i].num);
    printf("Pay: %d\n",e[i].pay);
  }

  return 0;
}