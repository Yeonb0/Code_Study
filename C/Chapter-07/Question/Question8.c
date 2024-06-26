#include <stdio.h>

int main(){
  int start = 0;
  int sum = 0;

  do{
    sum += start;
    start+=2;
  } while(start<=100);

  printf("%d\n",sum);

  return 0;
}