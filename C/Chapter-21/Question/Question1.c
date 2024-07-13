#include <stdio.h>

int main(){
  char alpha;
  printf("Enter an alphabet: ");
  alpha = getchar();
  
  if(alpha >= 65 && alpha <= 90){
    putchar(alpha+32);
  } else if(alpha >= 97 && alpha <= 122){
    putchar(alpha-32);
  } else {
    printf("Invalid input! Please enter an alphabet.");
  }
  return 0;
}