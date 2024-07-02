#include <stdio.h>

int AbsoCompare(int num1, int num2);  // 절댓값이 큰 정수 반환
int GetAbsoValue(int num);            // 전달인자의 절댓값 반환

int main() {
  int num1, num2;
  printf("두 개의 정수 입력: ");
  scanf("%d %d", &num1, &num2);
  printf("%d와 %d중 절댓값이 큰 정수: %d \n", num1, num2, AbsoCompare(num1, num2));
  return 0;
}

int AbsoCompare(int num1, int num2) {
  return GetAbsoValue(num1) > GetAbsoValue(num2) ? num1 : num2;
}

int GetAbsoValue(int num) {
  return num >= 0 ? num : -num;
}