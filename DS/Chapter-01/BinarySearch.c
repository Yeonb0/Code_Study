#include <stdio.h>

int BSearch(int ar[], int len, int target){
  int first = 0;   // 탐색 대상 시작 인덱스 값
  int last = len - 1;  // 탐색 대상 마지막 인덱스 값
  int mid;

  while(first <= last){
    mid = (first + last) / 2;  // 중간값 계산

    if(target == ar[mid]){  // 중앙에 저장된 것이 타겟이면
      return mid;  // mid return
    }else{  // 타겟이 아니면 탐색 대상 반으로 줄임
      if(target < ar[mid])
        last = mid - 1;
      else 
        first = mid + 1;
    }
  }
  return -1;  // 찾지 못했을 때 -1 반환
}

int main(){
  int arr[] = {1,3,5,7,9};
  int idx;

  idx = BSearch(arr, sizeof(arr)/sizeof(int), 7);
  if(idx == -1)
    printf("Not Found\n");
  else
    printf("Index: %d\n", idx);

  idx = BSearch(arr, sizeof(arr)/sizeof(int), 4);
  if(idx == -1)
    printf("Not Found\n");
  else
    printf("Index: %d\n", idx);

  return 0;
}