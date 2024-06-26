#include <stdio.h>

int main(){
  char ch;
  printf("Enter a Character: ");
  scanf("%c", &ch);

  printf("Character %c's ASCII value: %d", ch,ch);
  return 0;
}