#include <stdio.h>

int main(){
  char ch;
  printf("Enter Number: ");
  scanf("%d", &ch);

  printf("%d's ASCII character: %c", ch, ch);

  return 0;
}