#include <stdio.h>

int main(){
  int ch1, ch2;

  ch1 = getchar();  // 문자 입력
  ch2 = fgetc(stdin);  // Enter 입력

  putchar(ch1);  // 문자 출력
  fputc(ch2, stdout);  // Enter 출력
  return 0;
}