#include <stdio.h>

void SoSimpleFunc(void){
  printf("I'm so simple");
}

int main(){
  int num=20;
  void * ptr;

  ptr = &num;
  printf("%p \n",ptr);

  ptr=SoSimpleFunc;  // 함수의 주소 저장
  printf("%p \n",ptr);
  return 0;
}