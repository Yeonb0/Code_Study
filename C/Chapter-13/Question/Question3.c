#include <stdio.h>

int main(){
  int arr[6]={1,2,3,4,5,6};
  int *ptr1, *ptr2;
  int temp;
  
  for(int i=0; i<3; i++){
    ptr1 = &arr[i];
    ptr2 = &arr[5-i];
    
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
  }
  for(int i=0; i<6; i++){
    printf("%d ", arr[i]);
  }
}