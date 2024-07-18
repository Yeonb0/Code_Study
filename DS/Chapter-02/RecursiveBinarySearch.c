#include <stdio.h>

int BSearchRecur(int ar[], int first, int last, int target){
  int mid;
  if(first > last)
    return -1;      // 탐색 실패
  mid = (first + last) / 2;  // 탐색 대상의 중앙 찾기.

  if(ar[mid] == target)
    return mid;  // 탐색된 타겟의 인덱스 값 반환
  else if(ar[mid] > target)
    return BSearchRecur(ar, first, mid-1, target);  // target이 ar[mid]보다 작으면, ar[first] ~ ar[mid-1] 탐색.
  else
    return BSearchRecur(ar, mid+1, last, target);  // target이 ar[mid]보다 크면, ar[mid+1] ~ ar[last] 탐색.
}

int main(){
  int arr[] = {1,3,5,7,9};
  int idx;

  idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1, 7);
  if(idx == -1)
    printf("탐색 실패 \n");
  else
    printf("타겟 저장 인덱스: %d\n", idx);

  idx = BSearchRecur(arr, 0, sizeof(arr)/sizeof(arr[0]) - 1, 4);
  if(idx == -1)
    printf("탐색 실패 \n");
  else
    printf("타겟 저장 인덱스: %d\n", idx);

  return 0;
}