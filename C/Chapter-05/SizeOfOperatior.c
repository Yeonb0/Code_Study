#include <stdio.h>

int main(){
  char ch=9;
  int int_num=1052;
  double double_num=3.1415;
  printf("변수 ch의 크기: %d \n", sizeof(ch));
  printf("변수 int_num의 크기: %d \n", sizeof(int_num));
  printf("변수 double_num의 크기: %d \n", sizeof(double_num));

  printf("char의 크기: %d \n", sizeof(char));
  printf("int의 크기: %d \n", sizeof(int));
  printf("long의 크기: %d \n", sizeof(long));
  printf("long long의 크기: %d \n", sizeof(long long));
  printf("float의 크기: %d \n", sizeof(float));
  printf("double의 크기: %d \n", sizeof(double));

  return 0;
}