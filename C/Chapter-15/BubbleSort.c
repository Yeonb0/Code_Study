#include <stdio.h>

void BubbleSort(int arr[], int len);

int main(){
  int arr[4]={3,2,4,1};
  int i;

  BubbleSort(arr, sizeof(arr)/sizeof(int));
  for(i=0; i<4; i++){
    printf("%d ", arr[i]);
  }

  return 0;
}

void BubbleSort(int arr[], int len){
  int i, j, temp;

  for(i=0; i<len; i++){  // 오름차순 정렬
    for(j=0; j<len-1-i; j++){
      if(arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}