#include <stdio.h>

int main(){
  int num = 15; // 00000000 00000000 00000000 00001111

  int result1 = num<<1; // num의 비트열을 왼쪽으로 1칸 씩 이동
  int result2 = num<<2; // num의 비트열을 왼쪽으로 2칸 씩 이동
  int result3 = num<<3; // num의 비트열을 왼쪽으로 3칸 씩 이동

  printf("1칸 이동 결과: %d\n", result1);
  printf("2칸 이동 결과: %d\n", result2);
  printf("3칸 이동 결과: %d\n", result3);

  return 0;
}