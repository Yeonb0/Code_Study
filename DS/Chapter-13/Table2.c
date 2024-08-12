#include <stdio.h>
#include <stdlib.h>
#include "Table2.h"
#include "DLinkedList.h"
#include "DLinkedList.c"

void TBLInit(Table * pt, HashFunc f){
  int i;
  
  for(i = 0; i < MAX_TBL; i++){
    ListInit(&(pt->tbl[i]));
  }
  pt->hf = f;
}

void TBLInsert(Table * pt, Key k, Value v){
  int hv = pt->hf(pt, k);
  Slot ns = {k, v};

  if(TBLSearch(pt, k) != NULL){  // 키가 중복되었다면 
    printf("키 중복 오류\n");
    return;
  }else{
    LInsert(&(pt->tbl[hv]), ns);
  }
}

Value TBLDelete(Table * pt, Key k){
  int hv = pt->hf(pt, k);
  Slot cSlot;

  if(LFirst(&(pt->tbl[hv]), &cSlot)){
    if(cSlot.key == k){
      LRemove(&(pt->tbl[hv]));
      return cSlot.val;
    }else{
      while(LNext(&(pt->tbl[hv]), &cSlot)){
        if(cSlot.key == k){
          LRemove(&(pt->tbl[hv]));
          return cSlot.val;
        }
      }
    }
  }
  return NULL;
}

Value TBLSearch(Table * pt, Key k){
  int hv = pt->hf(pt, k);
  Slot cSlot;

  if(LFirst(&(pt->tbl[hv]), &cSlot)){
    if(cSlot.key == k){
      return cSlot.val;
    }else{
      while(LNext(&(pt->tbl[hv]), &cSlot)){
        if(cSlot.key == k){
          return cSlot.val;
        }
      }
    }
  }
  return NULL;
}