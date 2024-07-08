#include <stdio.h>

#include <stdio.h>

void makeSnail(int size) {
  int arr[100][100] = {0}; // 배열 초기화
  int start = 1; // 시작 숫자
  int i, j;
  int time, end = size;

  for (time = 0; time < (size + 1) / 2; time++) {
    // 윗 행을 채우기
    for (i = time; i < end; i++) {
      arr[time][i] = start++;
    }
    // 오른쪽 열을 채우기
    for (i = time + 1; i < end; i++) {
      arr[i][end - 1] = start++;
    }
    // 아랫 행을 채우기
    for (i = end - 2; i >= time; i--) {
      arr[end - 1][i] = start++;
    }
    // 왼쪽 열을 채우기
    for (i = end - 2; i > time; i--) {
      arr[i][time] = start++;
      }
    end--; // 내부로 이동
  }

  // 배열 출력
  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      printf("%2d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int size;
  printf("사이즈를 입력하세요: ");
  scanf("%d", &size);
  makeSnail(size);
  
  return 0;
}
