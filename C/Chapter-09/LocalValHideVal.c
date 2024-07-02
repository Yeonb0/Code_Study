#include <stdio.h>

int main(){
  int num=1;

  if(num==1){
    int num=7;
    num+=10;
    printf("if문 내 지역변수 num: %d\n", num); // Output: 17
  }
  printf("main 함수 내 지역변수 num: %d\n", num); // Output: 1
  return 0;
}