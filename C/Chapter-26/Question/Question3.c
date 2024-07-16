#include <stdio.h>
#define MAX(x, y)  ((x)>(y)?(x):(y))

int main(){
  int num1, num2;
  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);
  printf("The maximum of %d and %d is %d\n", num1, num2, MAX(num1, num2));
  return 0;
}