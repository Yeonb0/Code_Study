#include <stdio.h>
#include <stdlib.h>
#include "ListBaseStack.h"

void StackInit(Stack * pstack){
  pstack->head = NULL;  // 포인터 변수 head를 NULL로 초기화
}

int SIsEmpty(Stack * pstack){
  if(pstack->head == NULL)  // 스택이 비어있으면 head는 NULL
    return TRUE;
  else
    return FALSE;
}

void SPush(Stack * pstack, Data data){
  Node * newNode = (Node*)malloc(sizeof(Node));  // 새 노드 생성
  newNode->data = data;  // 새 노드에 데이터 저장

  newNode->next = pstack->head;  // 새 노드가 기존의 헤드가 가리키던 노드를 가리키게 함
  pstack->head = newNode;  // 헤드가 새 노드를 가리키게 함
}

Data SPop(Stack * pstack){
  Data rdata;
  Node * rnode;

  if(SIsEmpty(pstack)){
    printf("Stack Memory Error!");
    exit(-1);
  }

  rdata = pstack->head->data;  // 삭제할 데이터 저장
  rnode = pstack->head;        // 삭제할 노드의 주소 값 저장
  pstack->head = pstack->head->next;  // 삭제할 노드의 다음 노드를 head로 지정
  free(rnode);  // 첫 번째 노드의 메모리 해제
  return rdata;  // 삭제된 데이터 반환
}

Data SPeek(Stack * pstack){
  if(SIsEmpty(pstack)){
    printf("Stack Memory Error!");
    exit(-1);
  }

  return pstack->head->data;  // head가 가리키는 노드의 데이터 반환
}