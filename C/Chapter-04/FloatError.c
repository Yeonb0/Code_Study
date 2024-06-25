#include <stdio.h>

int main(){
  int i;
  float num=0.0;

  for(i=0; i<100; i++){
    num += 0.1; // 이 연산 100회 진행
  }

  printf("%f\n", num); // 1.000000 출력

  return 0;
}