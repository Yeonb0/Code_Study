#include <stdio.h>
#include <stdlib.h>
#include "CircularQueue.h"

void QueueInit(Queue *pq){  // 텅 빈 경우 front 와 rear 는 같은 위치를 가리킴
  pq->front=0;
  pq->rear=0;
}

int QIsEmpty(Queue *pq){    // 큐가 비어있는지 확인
  if(pq->front==pq->rear)
    return TRUE;
  else
    return FALSE;
}

int NextPosIdx(int pos){
  if(pos == QUE_LEN-1)  // 배열의 마지막 요소의 인덱스 값이라면
    return 0;
  else
    return pos+1;
}

void Enqueue(Queue *pq, Data data){
  if(NextPosIdx(pq->rear)==pq->front){  // 큐가 꽉 찼다면
    printf("Queue Memory Error!\n");
    exit(-1);
  }

  pq->rear=NextPosIdx(pq->rear);  // rear 를 한 칸 이동
  pq->queArr[pq->rear]=data;       // rear 가 가리키는 곳에 데이터 저장
}

Data Dequeue(Queue *pq){
  if(QIsEmpty(pq)){  // 큐가 비어있다면
    printf("Queue Memory Error!\n");
    exit(-1);
  }

  pq->front=NextPosIdx(pq->front);  // front 를 한 칸 이동
  return pq->queArr[pq->front];      // front 가 가리키는 데이터 반환
}

Data QPeek(Queue *pq){
  if(QIsEmpty(pq)){  // 큐가 비어있다면
    printf("Queue Memory Error!\n");
    exit(-1);
  }

  return pq->queArr[NextPosIdx(pq->front)];  // front 가 가리키는 데이터 반환
}