#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(List * plist){
  plist->head = (Node*)malloc(sizeof(Node));  // 더미 노드의 생성
  plist->head->next = NULL;
  plist->comp = NULL;
  plist->numOfData = 0;
}

void FInsert(List * plist, LData data){    // comp 가 NULL일 때 호출
  Node * newNode = (Node*)malloc(sizeof(Node));   // 새 노드 생성
  newNode->data = data;                           // 새 노드에 데이터 저장

  newNode->next = plist->head->next;              // 새 노드가 다른 노드를 가리키게 함
  plist->head->next = newNode;                    // 더미 노드가 새 노드를 가리키게 함

  (plist->numOfData)++;                           // 저장된 노드의 수를 하나 증가시킴
}

void SInsert(List * plist, LData data){
  Node * newNode = (Node*)malloc(sizeof(Node));   // 새 노드 생성
  Node * pred = plist->head;                      // pred는 더미 노드를 가리킴

  newNode->data = data;                           // 새 노드에 데이터 저장

  // 새 노드의 위치를 찾기 위한 반복문
  while(pred->next != NULL && plist->comp(data, pred->next->data) != 0){
    // pred가 마지막 노드가 아니고
    // 비교함수를 통한 정렬 순서에 일치하지 않으면
    pred = pred->next;  // 다음 노드로 이동
  }

  newNode->next = pred->next;                     // 새 노드의 오른쪽을 연결
  pred->next = newNode;                           // 새 노드의 왼쪽을 연결

  (plist->numOfData)++;                           // 저장된 노드의 수를 하나 증가시킴
}

void LInsert(List * plist, LData data){
  if(plist->comp == NULL)  // 정렬 기준이 마련되지 않았다면
    FInsert(plist, data);  // 머리에 노드를 추가
  else                     // 정렬 기준이 마련되었다면
    SInsert(plist, data);  // 정렬 기준에 근거하여 노드를 추가
}

int LFirst(List * plist, LData * pdata){
  if(plist->head->next == NULL)   // 더미 노드가 NULL을 가리킨다면,
    return FALSE;                 // 반환할 데이터가 없다
  
  plist->before = plist->head;    // before은 더미 노드를 가리키게 함
  plist->cur = plist->head->next; // cur은 첫 번째 노드를 가리키게 함

  *pdata = plist->cur->data;      // 첫 번째 노드의 데이터를 전달
  return TRUE;                    // 데이터 반환 성공!
}

int LNext(List * plist, LData * pdata){
  if(plist->cur->next == NULL)    // cur이 NULL을 가리킨다면
    return FALSE;                 // 반환할 데이터가 없다

  plist->before = plist->cur;     // before은 cur이 가리키던 노드를 가리키게 함
  plist->cur = plist->cur->next;  // cur은 다음 노드를 가리키게 함

  *pdata = plist->cur->data;      // cur이 가리키는 노드의 데이터 전달
  return TRUE;                    // 데이터 반환 성공!
}

int LRemove(List * plist){   // cur과 before가 가리키는 노드가 같게 됨!
  Node * rpos = plist->cur;  // 소멸 대상의 주소 값을 rpos에 저장
  LData rdata = rpos->data;  // 소멸 대상의 데이터를 rdata에 저장

  plist->before->next = plist->cur->next;  // 소멸 대상을 리스트에서 제거
  plist->cur = plist->before;              // cur이 가리키는 위치를 재조정

  free(rpos);            // 소멸 대상의 메모리 해제
  (plist->numOfData)--;  // 저장된 데이터의 수 하나 감소
  return rdata;          // 제거된 데이터 반환
}

int LCount(List * plist){
  return plist->numOfData;
}

void SetSortRule(List * plist, int (*comp)(LData d1, LData d2)){
  plist->comp = comp;  // 정렬 함수 등록
}

/* 우선 순위 비교를 위한 함수 comp(data1, data2) */
// comp가 0을 반환 시 
// comp가 1을 반환 시 