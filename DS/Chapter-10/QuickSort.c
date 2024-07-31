#include <stdio.h>

void Swap(int arr[], int idx1, int idx2){
  int temp = arr[idx1];
  arr[idx1] = arr[idx2];
  arr[idx2] = temp;
}

int Partition(int arr[], int left, int right){
  int pivot = arr[left];  // 피벗은 첫 번째 요소
  int low = left + 1;
  int high = right;

  while(low <= high){  // 교차되기 전까지 반복
    // 피벗보다 큰 값을 찾는 과정
    while(pivot >= arr[low] && low <= right)
      low++;  // low 오른쪽 이동

    // 피벗보다 작은 값을 찾는 과정
    while(pivot <= arr[high] && high >= (left + 1))
      high--; // high 왼쪽 이동

    // 교차되지 않은 상태라면
    if(low <= high)
      Swap(arr, low, high);  // Swap 실행
  }

  Swap(arr, left, high);  // 피벗과 작은 데이터 교환
  return high;  // 옮겨진 피벗의 위치정보 반환
}

void QuickSort(int arr[], int left, int right){
  if(left<=right){
    int pivot = Partition(arr, left, right);  // 둘로 나눠서
    QuickSort(arr, left, pivot - 1);  // 왼쪽 영역을 정렬
    QuickSort(arr, pivot + 1, right);  // 오른쪽 영역을 정렬
  }
}

int main(){
  int arr[7] = {3, 2, 4, 1, 7, 6, 5};
  int i;

  QuickSort(arr, 0, sizeof(arr) / sizeof(int) - 1);

  for(i = 0; i < 7; i++)
    printf("%d ", arr[i]);

  printf("\n");
  return 0;
}