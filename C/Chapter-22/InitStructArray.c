#include <stdio.h>

struct person{
  char name[20];
  char phoneNum[20];
  int age;
};

int main(){
  struct person arr[3]={
    {"John","010-1234-1234",21},
    {"Jane","010-1234-1235",22},
    {"Tom","010-1234-1236",23}
  };

  int i;
  for(i=0; i<3; i++){
    printf("%s %s %d\n",arr[i].name,arr[i].phoneNum,arr[i].age);
  }

  return 0;
}