#include <stdio.h>

int main(){
  char str[100];
  int code = 0;
  printf("Enter a word: ");
  scanf("%s", str);
  
  for(int i = 0; str[i] != '\0'; i++){
    if(str[i] >= code)
      code = str[i]; 
  }
  printf("가장 아스키 코드가 큰 문자: %c", code);
  
  return 0;
}