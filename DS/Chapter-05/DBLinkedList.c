#include <stdio.h>
#include <stdlib.h>
#include "DBLinkedList.h"

void ListInit(List * plist){
  plist->head = NULL;
  plist->numOfData = 0;
}

void LInsert(List * plist, Data data){
  Node * newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  
  newNode->next = plist->head;     // 새 노드의 next를 NULL로 초기화(1) // 새 노드가 기존 노드를 가리키게 한다
  if(plist->head != NULL)          // 두 번째 이상일 경우
    plist->head->prev = newNode;   // 기존 노드가 새 노드를 가리키게 한다
  newNode->prev = NULL;            // 새 노드의 prev를 NULL로 초기화(첫 번째 노드일 경우만 해당)
  plist->head = newNode;           

  (plist->numOfData)++;
}

int LFirst(List * plist, Data * pdata){  // 첫 번째 노드의 데이터 조회
  if(plist->head == NULL)
    return FALSE;

  plist->cur = plist->head;   // cur이 첫 번째 노드를 가리키게 함
  *pdata = plist->cur->data;  // cur이 가리키는 노드의 데이터 전달
  return TRUE;
}

int LNext(List * plist, Data * pdata){  // 두 번째 이후 노드의 데이터 조회
  if(plist->cur->next == NULL)
    return FALSE;

  plist->cur = plist->cur->next;  // cur을 오른쪽으로 이동
  *pdata = plist->cur->data;      // cur이 가리키는 노드의 데이터 전달
  return TRUE;
}

int LPrevious(List * plist, Data * pdata){  // 반대 방향(왼쪽) 노드의 데이터 조회
  if(plist->cur->prev == NULL)
    return FALSE;

  plist->cur = plist->cur->prev;  // cur을 왼쪽으로 이동
  *pdata = plist->cur->data;      // cur이 가리키는 노드의 데이터 전달
  return TRUE;
}

int LCount(List * plist){
  return plist->numOfData;
}
