#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

void StackInit(Stack * pstack){
  pstack->topIndex = -1;  // topIndex의 -1은 빈 스택을 의미
}

int SIsEmpty(Stack * pstack){
  if(pstack->topIndex == -1)  // 스택이 비어있다면
    return TRUE;
  else
    return FALSE;
}

void SPush(Stack * pstack, Data data){  // 스택의 push 연산
  ++(pstack->topIndex);  // 데이터 추가를 위한 인덱스 값 증가
  pstack->stackArr[pstack->topIndex] = data;  // 데이터 저장
}

Data SPop(Stack * pstack){  // 스택의 pop 연산
  int rIdx;

  if(SIsEmpty(pstack)){
    printf("Stack Memory Error!");
    exit(-1);
  }

  rIdx = pstack->topIndex;  // 삭제할 데이터의 인덱스 저장
  --(pstack->topIndex);     // 인덱스 값 감소
  return pstack->stackArr[rIdx];  // 삭제된 데이터 반환
}

Data SPeek(Stack * pstack){  // 스택의 peek 연산
  if(SIsEmpty(pstack)){
    printf("Stack Memory Error!");
    exit(-1);
  }

  return pstack->stackArr[pstack->topIndex];  // topIndex가 가리키는 데이터 반환
}

