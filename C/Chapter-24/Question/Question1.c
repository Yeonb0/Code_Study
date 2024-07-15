#include <stdio.h>

int main(){
  FILE *file = fopen("mystory.txt", "wt");
  fputs("#이름: 김보연 \n", file);
  fputs("#주민번호: 031017-0000000\n", file);
  fputs("#전화번호: 010-1111-2222\n", file);
  fclose(file);
  return 0;
}