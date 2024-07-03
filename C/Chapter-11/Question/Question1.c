#include <stdio.h>

int main(){
  int arr[5];
  int min,max,sum=0;

  printf("Enter 5 integers: ");
  for(int i=0; i<5; i++){
    scanf("%d", &arr[i]);
  }
  max = arr[0];
  min = arr[0];
  for(int i=0; i<5; i++){
    if(arr[i] > max) max = arr[i];
    if(arr[i] < min) min = arr[i];
    sum += arr[i];
  }
  printf("최댓값: %d, 최솟값: %d, 총합: %d\n",max,min,sum);
  return 0;
}