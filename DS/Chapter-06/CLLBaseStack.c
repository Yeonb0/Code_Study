#include <stdio.h>
#include <stdlib.h>
#include "CLLBaseStack.h"
#include "..\Chapter-05\CLinkedList.h"
#include "..\Chapter-05\CLinkedList.c"

void StackInit(Stack * pstack){
  pstack->plist = (List*)malloc(sizeof(List));
  ListInit(pstack->plist);
}

int SIsEmpty(Stack * pstack){
  if(LCount(pstack->plist) == 0)
    return TRUE;
  else
    return FALSE;
}

void SPush(Stack * pstack, Data data){
  LInsertFront(pstack->plist, data);
}

Data SPop(Stack * pstack){
  Data rdata;
  if(SIsEmpty(pstack)){
    printf("Stack Memory Error!");
    exit(-1);
  }
  LFirst(pstack->plist, &rdata);
  LRemove(pstack->plist);
  return rdata;
}

Data SPeek(Stack * pstack){
  Data rdata;
  if(SIsEmpty(pstack)){
    printf("Stack Memory Error!");
    exit(-1);
  }
  LFirst(pstack->plist, &rdata);
  return rdata;
}