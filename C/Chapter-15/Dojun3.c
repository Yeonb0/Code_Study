#include <stdio.h>

int main(){
  int arr[10];
  int num;
  int even = 1, odd = 0;
  
  printf("총 10개의 숫자 입력 \n");
  for(int i=0; i<10; i++){
    printf("입력: ");
    scanf("%d", &num);
    if(num%2==0){
      arr[10-even++]=num;
    } else {
      arr[odd++]=num;
    }
  }

  printf("배열 요소의 출력 : ");
  for(int i=0; i<10; i++){
    printf("%d ", arr[i]);
  }

  return 0;
}