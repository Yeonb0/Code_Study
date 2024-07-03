#include <stdio.h>

int main(){
  int k, n;
  int start = 1;
  printf("상수 n 입력: ");
  scanf("%d", &n);
  for(k = 0; k < n; k++){
    start *= 2;
    if(start>n) 
      break;
  }
  printf("공식을 만족하는 k의 최댓값은 %d", k);

  return 0;
}