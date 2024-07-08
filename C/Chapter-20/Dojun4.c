#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int dice1, dice2;
  srand(time(NULL)); // Initialize random seed
  dice1 = rand()%6+1;
  dice2 = rand()%6+1;
  printf("주사위 1의 결과 %d \n",dice1);
  printf("주사위 2의 결과 %d \n",dice2);
  return 0;
}