#include <stdio.h>
#include <stdlib.h>
#include "ListBaseQueue.h"

void QueueInit(Queue *pq){
  pq->front = NULL;
  pq->rear = NULL;
}

int QIsEmpty(Queue *pq){
  if(pq->front == NULL)  // front 가 NULL 이면 비어있는 상태
    return TRUE;
  else
    return FALSE;
}

void Enqueue(Queue *pq, Data data){
  Node *newNode = (Node*)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;

  if(QIsEmpty(pq)){  // 첫 번째 노드인 경우
    pq->front = newNode;  // front 와 rear 모두 새 노드를 가리키게 함
    pq->rear = newNode;
  }
  else{  // 두 번째 이후의 노드인 경우
    pq->rear->next = newNode;  // 마지막 노드의 다음을 새 노드로 설정
    pq->rear = newNode;  // rear 를 새 노드로 이동
  }
}

Data Dequeue(Queue *pq){
  if(QIsEmpty(pq)){
    printf("Queue Memory Error!\n");
    exit(-1);
  }

  Node *delNode = pq->front;     // 삭제 노드 주소 저장
  Data retData = delNode->data;  // 삭제 노드 값 저장

  pq->front = pq->front->next;   // front 를 다음 노드로 이동

  free(delNode);
  return retData;
}

Data QPeek(Queue *pq){
  if(QIsEmpty(pq)){
    printf("Queue Memory Error!\n");
    exit(-1);
  }

  return pq->front->data;
}