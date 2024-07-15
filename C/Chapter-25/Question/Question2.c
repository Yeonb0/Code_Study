#include <stdio.h>
#include <stdlib.h>

int main(){
  int arrLen=5;
  int idx=0;
  int i;
  int * arr =(int*)malloc(arrLen*sizeof(int));

  while(1){
    printf("정수 입력: ");
    scanf("%d", &arr[idx]);
    if(arr[idx]==-1) break;

    if(arrLen==idx+1){
      arrLen += 3;
      arr = realloc(arr, arrLen*sizeof(int));
    }
    idx++;
  }
  for(i=0;i<idx;i++){
    printf("%d ", arr[i]);
  }
  free(arr);
  return 0;
}