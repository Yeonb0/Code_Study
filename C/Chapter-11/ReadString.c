#include <stdio.h>

int main(){
  char str[50];
  int idx=0;

  printf("문자열 입력: ");
  scanf("%s",str);  // 문자열 입력 받아 배열 str에 저장
  printf("입력 받은 문자열: %s \n",str);

  printf("문자 단위 출력: ");
  while(str[idx]!= '\0'){
    printf("%c",str[idx]);
    idx++;
  }
  return 0;
}