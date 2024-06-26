#include <stdio.h>

int main(){
  int cur=2;
  int is=0;

  while(cur<10){  // 2단부터 9단까지 반복
    is = 1;  // 새로운 단의 시작 위함
    while(is<10){  // 각 단의 1부터 9까지의 곱 표현
      printf("%d x %d = %d \n", cur, is, is*cur);
      is++;
    }
    printf("\n");  // 다음 단으로 넘어갈 때마다 줄바꿈
    cur++;  // 다음 단으로 넘어가기
  }

  return 0;
}