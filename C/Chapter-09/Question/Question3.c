#include <stdio.h>
void PrintFibonacci(int num);

int main(){
  int num;
  printf("Enter the number of terms in the Fibonacci series: ");
  scanf("%d", &num);
  if(num<1){
    printf("Invalid input.\n");
    return 0;
  }
  printf("Fibonacci Series:\n");
  PrintFibonacci(num);
  return 0;
}

void PrintFibonacci(int num){
  int a = 0, b = 1, c;
  printf("%d ", a);
  printf("%d ", b);
  for(int i = 2; i < num; i++){
    c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
  }
}
