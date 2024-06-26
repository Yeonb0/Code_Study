#include <stdio.h>

int main(){
  double num1, num2;
  printf("Enter two numbers: ");
  scanf("%lf %lf", &num1, &num2);

  printf("The sum is: %f\n", num1 + num2);
  printf("The difference is: %f\n", num1 - num2);
  printf("The product is: %f\n", num1 * num2);
  printf("The quotient is: %f\n", num1 / num2);
  
  return 0;
}