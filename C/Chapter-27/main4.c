#include <stdio.h>
#include "stdiv2.h"
#include "intdiv4.h"

int main(){
  Div val=IntDiv(5,2);
  printf("몫: %d\n", val.quotient);
  printf("나머지: %d\n", val.remainder);
  return 0;
}