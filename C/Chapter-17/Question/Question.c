#include <stdio.h>

void MaxAndMin(int arr[], int len, int **max, int **min);

int main(){
  int *maxPtr, *minPtr;
  int arr[5];

  printf("Enter 5 numbers\n");
  for(int i = 0; i < 5; i++){
    printf("입력: ");
    scanf("%d", &arr[i]);
  }

  MaxAndMin(arr, 5, &maxPtr, &minPtr);
  printf("Maximum: %d\n", *maxPtr);
  printf("Minimum: %d\n", *minPtr);
  return 0;
}

void MaxAndMin(int arr[], int len, int **max, int **min){
  int *maxPtr, *minPtr;
  maxPtr = minPtr = &arr[0];
  for(int i = 0; i < len; i++){
    if(*maxPtr < arr[i])
      maxPtr=&arr[i];
    if(*minPtr > arr[i])
      minPtr=&arr[i];
  }
  *max = maxPtr;
  *min = minPtr;
}