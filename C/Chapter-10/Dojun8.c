#include <stdio.h>

int TwoExponential(int num){
  static int result = 1;
  if(num<=0) 
    return result;
  result *= 2;
  return(TwoExponential(num-1));
}

int main(){
  int num, result;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  result = TwoExponential(num);
  printf("2의 %d승은 %d\n", num, result);

  return 0;
}