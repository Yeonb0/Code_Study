#include <stdio.h>

int main(){
  int num;
  int binary[32];
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  
  // Convert decimal to binary
  int i = 0;
  while (num > 0) {
    binary[i++] = num % 2;
    num /= 2;
  }
  
  // Print binary representation
  printf("Binary representation: "); 
  for (i--; i >= 0; i--) {
    printf("%d", binary[i]);
  }
  printf("\n");
}