#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i;
  srand((int)time(NULL));
  for(i=0; i<5; i++){
    printf("정수 출력: %d \n", rand());
  }
  return 0;
}