#include <stdio.h>
void printArray(int (*arr)[4],int len){
  for(int i=0;i<len;i++){
    for(int j=0;j<len;j++){
      printf("%2d ",arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
void rotateArray(int (*arr)[4],int len){
  for(int i=0;i<len/2;i++){
    for(int j=i;j<len-i-1;j++){
      int temp = arr[i][j];
      arr[i][j] = arr[len-j-1][i];
      arr[len-j-1][i] = arr[len-i-1][len-j-1];
      arr[len-i-1][len-j-1] = arr[j][len-i-1];
      arr[j][len-i-1] = temp;
    }
  }
}

int main(){
  int arr[4][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
  };
  int (*ptr)[4] = arr;

  printArray(ptr,4);
  for(int i=0;i<3;i++){
    rotateArray(ptr,4);
    printArray(ptr,4);
  }

  return 0;
}