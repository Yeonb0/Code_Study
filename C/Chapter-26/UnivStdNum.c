#include <stdio.h>
#define STNUM(Y, S, P) Y ## S ## P
// #define STNUM(Y, S, P) ((Y)*10000+(S)*1000+(P))

int main(){
  printf("학번: %d \n", STNUM(10,65,175));
  printf("학번: %d \n", STNUM(10,65,075));
  return 0;
}