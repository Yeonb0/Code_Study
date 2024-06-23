#include <stdio.h>

int main(){
  int num1=10;
  int num2=(num1--)+2;  // 후위 감소

  printf("num1: %d\n",num1);
  printf("num2: %d\n",num2);

  return 0;
}

// 후위 연산시 소괄호의 영향을 받지 않고, 다음 문장으로 넘어가야 값 적용