#ifndef __CLL_BASE_STACK_H__
#define __CLL_BASE_STACK_H__

#include "..\Chapter-05\CLinkedList.h"
#include "..\Chapter-05\CLinkedList.c"

#define TRUE  1
#define FALSE 0

typedef int Data;

typedef struct _listStack{
  List * plist;
} ListStack;

typedef ListStack Stack;

void StackInit(Stack * pstack);  // 스택의 초기화
int SIsEmpty(Stack * pstack);    // 스택이 비었는지 확인

void SPush(Stack * pstack, Data data);  // 스택의 push 연산
Data SPop(Stack * pstack);              // 스택의 pop 연산
Data SPeek(Stack * pstack);             // 스택의 peek 연산

#endif