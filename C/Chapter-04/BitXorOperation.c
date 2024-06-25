#include <stdio.h>

int main(){
  int num1 = 15; // 0000000 0000000 00000000 00001111
  int num2 = 20; // 0000000 0000000 00000000 00010100
  int num3 = num1 ^ num2;
  printf("XOR 연산의 결과: %d\n",num3);

  return 0;
}