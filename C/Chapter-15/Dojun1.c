#include <stdio.h>

void PrintOdd(int arr[], int len){
  int count = 0;
  for(int i=0; i<len; i++){
    if(arr[i]%2!=0) count++;
  }
  printf("홀수 출력: ");
  for(int i=0; i<len; i++){
    if(arr[i]%2!=0&&count>1){
      printf("%d", arr[i]);
      printf(", ");
      count--;
    } else if(arr[i]%2!=0&&count==1){
      printf("%d", arr[i]);
    }
  }
}

void PrintEven(int arr[], int len){
  int count = 0;
  for(int i=0; i<len; i++){
    if(arr[i]%2==0) count++;
  }
  printf("짝수 출력: ");
  for(int i=0; i<len; i++){
    if(arr[i]%2==0&&count>1){
      printf("%d", arr[i]);
      printf(", ");
      count--;
    } else if(arr[i]%2==0&&count==1){
      printf("%d", arr[i]);
    }
  }
}

int main(){
  int arr[10];
  printf("10개의 정수를 입력하세요\n");
  for(int i=0; i<10; i++){
    printf("입력: ");
    scanf("%d", &arr[i]);
  }
  PrintOdd(arr,10);
  printf("\n");
  PrintEven(arr,10);
  return 0;
}