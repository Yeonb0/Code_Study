#include <stdio.h>
#include "PriorityQueue.h"
#include "PriorityQueue.c"

int DataPriorityComp(char ch1, char ch2){  // 우선순위 비교함수
  return ch2 - ch1;
}

int main(){
  PQueue pq;
  PQueueInit(&pq, DataPriorityComp);  // 우선순위 비교함수 등록

  PEnqueue(&pq, 'A');
  PEnqueue(&pq, 'B');
  PEnqueue(&pq, 'C');
  printf("%c \n", PDequeue(&pq));

  PEnqueue(&pq, 'A');
  PEnqueue(&pq, 'B');
  PEnqueue(&pq, 'C');
  printf("%c \n", PDequeue(&pq));

  while(!PQIsEmpty(&pq))
    printf("%c \n", PDequeue(&pq));

  return 0;
}