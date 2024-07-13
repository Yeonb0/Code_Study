#include <string.h>
#include <stdio.h>

int main(){
  char str1[20];
  char str2[20];
  char str3[20];

  printf("첫 번째 배열 입력: ");
  fgets(str1, sizeof(str1),stdin);
  str1[strlen(str1)-1] = '\0';

  printf("두 번째 배열 입력: ");
  fgets(str2, sizeof(str2),stdin);
  str2[strlen(str2)-1] = '\0';

  strncpy(str3, str1, sizeof(str1));
  strcat(str3,str2);
  printf("%s",str3);

  return 0;
}