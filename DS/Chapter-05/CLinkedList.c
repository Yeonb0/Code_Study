#include <stdio.h>
#include <stdlib.h>
#include "CLinkedList.h"

void ListInit(List * plist){
  plist->tail = NULL;
  plist->cur = NULL;
  plist->before = NULL;
  plist->numOfData = 0;
}

void LInsertFront(List * plist, Data data){  // 머리 추가 tail은 그대로
  Node * newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;

  if(plist->tail == NULL){
    plist->tail = newNode;
    newNode->next = newNode;
  }else{
    newNode->next = plist->tail->next;  // 새 노드와 기존 노드 연결
    plist->tail->next = newNode;        // tail이 새 노드를 가리키게 함
  }
  (plist->numOfData)++;
}

void LInsert(List * plist, Data data){       // 꼬리 추가
  Node * newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;

  if(plist->tail == NULL){
    plist->tail = newNode;
    newNode->next = newNode;
  }else{
    newNode->next = plist->tail->next;  // 머리 일치 시키기
    plist->tail->next = newNode;
    plist->tail = newNode;  // LInsertFront와 다른 부분
  }
  (plist->numOfData)++;
}

int LFirst(List * plist, Data * pdata){
  if(plist->tail == NULL){         // 저장된 노드가 없다면
    return FALSE;
  }
  plist->before = plist->tail;     // before가 꼬리를 가리키게 한다
  plist->cur = plist->tail->next;  // cur이 머리를 가리키게 한다

  *pdata = plist->cur->data;       // cur이 가리키는 노드의 데이터 반환
  return TRUE;
}

int LNext(List * plist, Data * pdata){
  if(plist->tail == NULL){         // 저장된 노드가 없다면
    return FALSE;
  }
  plist->before = plist->cur;      // before가 머리를 가리키게 한다
  plist->cur = plist->cur->next;   // cur이 다음 노드를 가리키게 한다

  *pdata = plist->cur->data;       // cur이 가리키는 노드의 데이터 반환
  return TRUE;
}
// 리스트 끝 검사 코드 X 
// 무한으로 반복해서 호출 가능

Data LRemove(List * plist){
  Node * rpos = plist->cur;
  Data rdata = rpos->data;

  if(rpos == plist->tail){                 // 삭제 대상을 tail이 가리킨다면
    if(plist->tail == plist->tail->next){  // 그리고 마지막 노드라면
      plist->tail = NULL;
    }else{
      plist->tail = plist->before;
    }
  }
  plist->before->next = plist->cur->next;
  plist->cur = plist->before;

  free(rpos);
  (plist->numOfData)--;
  return rdata;
}

/* 삭제 시 예외 사항*/
// 1) 삭제할 노드를 tail이 가리키는 경우
// 2) 삭제할 노드가 리스트에 홀로 남은 경우

int LCount(List * plist){
  return plist->numOfData;
}