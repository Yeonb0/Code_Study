#include <stdio.h>

void DesSort(int arr[], int len);

int main(){
  int arr[7];
  for(int i=0; i<7; i++){
    printf("입력: ");
    scanf("%d", &arr[i]);
  }
  DesSort(arr, 7);  // 내림차순
  for(int i=0; i<7; i++){
    printf("%d ", arr[i]);
  }
}

void DesSort(int arr[], int len){
  for(int i=0; i<len-1; i++){
    for(int j=0; j<len-i-1; j++){
      if(arr[j] < arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}