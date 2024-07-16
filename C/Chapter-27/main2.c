#include <stdio.h>

typedef struct {
  int quotient;  // 몫
  int remainder; // 나머지
} Div;

extern Div IntDiv(int num1, int num2);

int main(){
  Div val=IntDiv(5,2);
  printf("몫: %d\n", val.quotient);
  printf("나머지: %d\n", val.remainder);
  return 0;
}