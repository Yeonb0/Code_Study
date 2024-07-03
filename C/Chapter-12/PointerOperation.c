#include <stdio.h>

int main(){
  int num1=100, num2=100;
  int * pnum;

  pnum = &num1;  
  (*pnum)+=30;  // num1 += 30 과 동일

  pnum = &num2;
  (*pnum)-=30;   // num2 -= 30 과 동일

  printf("num1 = %d, num2 = %d", num1, num2);
  return 0;
}