#ifndef __USEFUL_HEAP_H__
#define __USEFUL_HEAP_H__

#define TRUE  1
#define FALSE 0

#define HEAP_LEN 100

typedef int HData;
typedef int (*PriorityComp)(HData d1, HData d2);  // 우선순의 판단 기준의 함수 포인터

typedef struct _heap{
  PriorityComp comp;
  int numOfData;
  HData heapArr[HEAP_LEN];
} Heap;

void HeapInit(Heap * ph, PriorityComp pc);
int HIsEmpty(Heap * ph);

void HInsert(Heap * ph, HData data);
HData HDelete(Heap * ph);

#endif