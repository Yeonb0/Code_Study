#include <stdio.h>
#include <stdlib.h>

int main(){
  for(int i=0; i<5; i++){
    printf("난수 생성: %d\n", rand() % 100);
  }

  return 0;
}