#include <stdio.h>
#include "..\ArrayList.c"
#include "..\ArrayList.h"

int main(){
  // 리스트 생성 및 초기화
  int sum=0;
  List list;
  int data;
  ListInit(&list);

  // 정수 1부터 9까지 리스트에 저장
  for(int i=1; i<=9; i++){
    LInsert(&list, i);
  }

  // 리스트 저장 값 순차적 참조해 합 계산
  if(LFirst(&list, &data)){
    sum+=data;
    while(LNext(&list, &data)){
      sum+=data;
    }
  }

  // 리스트 저장 값 중 2의 배수, 3의 배수 해당 값 삭제
  if(LFirst(&list, &data)){
    if(data%2==0 || data%3==0){
      LRemove(&list);
    }
    while(LNext(&list, &data)){
      if(data%2==0 || data%3==0){
        LRemove(&list);
      }
    }
  }

  // 저장된 데이터 순서대로 출력
  printf("Sum: %d\n", sum);
  printf("List: ");
  if(LFirst(&list, &data)){
    printf("%d ", data);
    while(LNext(&list, &data)){
      printf("%d ", data);
    }
  }
  printf("\n");
}