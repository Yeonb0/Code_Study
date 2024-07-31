#include <stdio.h>
#include <stdlib.h>

void MergeTwoArea(int arr[], int left, int mid, int right){
  int fIdx = left;
  int rIdx = mid + 1;
  int i;

  // 병합 한 결과를 담을 배열 sortArr 동적 할당
  int *sortArr = (int*)malloc(sizeof(int) * (right + 1));
  int sIdx = left;

  while(fIdx <= mid && rIdx <= right){  // 병합할 두 영역의 데이터 비교
    if(arr[fIdx] <= arr[rIdx])
      sortArr[sIdx] = arr[fIdx++];
    else
      sortArr[sIdx] = arr[rIdx++];

    sIdx++;
  }

  if(fIdx > mid){  // 배열의 앞 부분이 모두 옮겨지면, 나머지 데이터를 그대로 복사
    for(i = rIdx; i <= right; i++, sIdx++)
      sortArr[sIdx] = arr[i];
  } else{  // 배열의 뒷 부분이 모두 옮겨지면, 나머지 데이터를 그대로 복사
    for(i = fIdx; i <= mid; i++, sIdx++)
      sortArr[sIdx] = arr[i];
  }

  for(i = left; i <= right; i++)
    arr[i] = sortArr[i];

  free(sortArr);
}

void MergeSort(int arr[], int left, int right){
  int mid;

  if(left < right){
    // 중간 지점 계산
    mid = (left + right) / 2;

    // 둘로 나눠서 각각을 정렬
    MergeSort(arr, left, mid);
    MergeSort(arr, mid + 1, right);

    // 정렬된 두 배열을 병합
    MergeTwoArea(arr, left, mid, right);
  }
}

int main(){
  int arr[7] = {3, 2, 4, 1, 7, 6, 5};
  int i;

  MergeSort(arr, 0, sizeof(arr) / sizeof(int) - 1);

  for(i = 0; i < 7; i++)
    printf("%d ", arr[i]);

  printf("\n");
  return 0;
}