#include <stdio.h>
#include <string.h>

int main(){
  char str[100];
  int total = 0;
  printf("문자열 입력: ");
  scanf("%s", str);
  
  for(int i=0;i<strlen(str);i++){
    if(str[i]>='0' && str[i]<='9'){
      total += str[i]-'0';
    }
  }
  printf("%d\n", total);

  return 0;
}