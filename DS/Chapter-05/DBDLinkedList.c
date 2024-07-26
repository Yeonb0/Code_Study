#include <stdio.h>
#include <stdlib.h>
#include "DBDLinkedList.h"

void ListInit(List * plist){
  plist->head = (Node*)malloc(sizeof(Node));  // 머리 더미 노드 생성
  plist->tail = (Node*)malloc(sizeof(Node));  // 꼬리 더미 노드 생성

  plist->head->prev = NULL;  // 머리 더미 노드의 prev는 NULL
  plist->head->next = plist->tail;  // 머리 더미 노드의 next는 꼬리 더미 노드

  plist->tail->next = NULL;  // 꼬리 더미 노드의 next는 NULL
  plist->tail->prev = plist->head;  // 꼬리 더미 노드의 prev는 머리 더미 노드

  plist->numOfData = 0;
}

void LInsert(List * plist, Data data){
  Node * newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;

  newNode->prev = plist->tail->prev;  // 새 노드의 prev는 꼬리 더미 노드의 prev
  plist->tail->prev->next = newNode;  // 꼬리 더미 노드의 prev가 새 노드를 가리키게 함

  newNode->next = plist->tail;  // 새 노드의 next는 꼬리 더미 노드
  plist->tail->prev = newNode;  // 꼬리 더미 노드의 prev는 새 노드를 가리키게 함

  (plist->numOfData)++;
}

int LFirst(List * plist, Data * pdata){
  if(plist->head->next == plist->tail)  // 머리 더미 노드의 next가 꼬리 더미 노드인 경우
    return FALSE;  // 데이터가 없다

  plist->cur = plist->head->next;  // cur이 첫 번째 노드를 가리키게 함
  *pdata = plist->cur->data;  // cur이 가리키는 노드의 데이터 전달
  return TRUE;
}

int LNext(List * plist, Data * pdata){
  if(plist->cur->next == plist->tail)  // cur이 꼬리 더미 노드인 경우
    return FALSE;  // 데이터가 없다

  plist->cur = plist->cur->next;  // cur을 오른쪽으로 이동
  *pdata = plist->cur->data;  // cur이 가리키는 노드의 데이터 전달
  return TRUE;
}

Data LRemove(List * plist){
  Node * rpos = plist->cur;  // 삭제 대상 지정
  Data rdata = rpos->data;  // 삭제 대상의 데이터 백업

  plist->cur->prev->next = plist->cur->next;  // 삭제 대상을 건너뛰고 이전 노드와 다음 노드를 연결
  plist->cur->next->prev = plist->cur->prev;  // 삭제 대상을 건너뛰고 다음 노드와 이전 노드를 연결
  plist->cur = plist->cur->prev;  // cur이 삭제 대상의 이전 노드를 가리키게 함

  free(rpos);  // 삭제 대상 소멸
  (plist->numOfData)--;  // 저장된 데이터의 수 하나 감소
  return rdata;  // 삭제된 데이터 반환
}

int LCount(List * plist){
  return plist->numOfData;
}