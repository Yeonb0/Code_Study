#include <stdio.h>

int BSearch(int ar[], int len, int target){
  int first = 0;   // 탐색 대상 시작 인덱스 값
  int last = len - 1;  // 탐색 대상 마지막 인덱스 값
  int mid;
  int opCount = 0;  // 비교 연산의 횟수 기록

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
    opCount++;  // 비교 연산 1회 증가
  }
  printf("비교 연산 횟수: %d \n", opCount);  // 탐색 실패시 연산횟수 출력
  return -1;  // 찾지 못했을 때 -1 반환
}

int main(){
  int arr1[500] = {0, };  // 모든 요소 0 초기화
  int arr2[5000] = {0, };  // 모든 요소 0 초기화
  int arr3[50000] = {0, };  // 모든 요소 0 초기화
  int idx;

  // 배열 arr1을 대상으로, 저장되지 않은 정수 1을 찾으라고 명령
  idx = BSearch(arr1, sizeof(arr1)/sizeof(int), 1);
  if(idx == -1)
    printf("탐색 실패 \n\n");
  else
    printf("타겟 저장 인덱스: %d \n",idx);

  // 배열 arr2을 대상으로, 저장되지 않은 정수 2을 찾으라고 명령
  idx = BSearch(arr2, sizeof(arr2)/sizeof(int), 2);
  if(idx == -1)
    printf("탐색 실패 \n\n");
  else
    printf("타겟 저장 인덱스: %d \n",idx);

  // 배열 arr3을 대상으로, 저장되지 않은 정수 3을 찾으라고 명령
  idx = BSearch(arr3, sizeof(arr3)/sizeof(int), 3);
  if(idx == -1)
    printf("탐색 실패 \n\n");
  else
    printf("타겟 저장 인덱스: %d \n",idx);

  return 0;
}
