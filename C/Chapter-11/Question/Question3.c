#include <stdio.h>

int main(){
  char str[100];
  int len;
  printf("Enter a word: ");
  scanf("%s",str);
  while(str[len] != '\0'){
    len++;
  }
  printf("Length of the word: %d\n", len);
  return 0;
}