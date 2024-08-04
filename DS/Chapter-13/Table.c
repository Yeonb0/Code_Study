#include <stdio.h>
#include <stdlib.h>
#include "Table.h"

void TBLInit(Table * pt, HashFunc * f){
  int i;

  // 모든 슬롯 초기화
  for(i=0; i<MAX_TBL; i++){
    (pt->tbl[i]).status=EMPTY;
  }
  pt->hf=f;  // 해쉬 함수 등록
}

void TBLInsert(Table * pt, Key k, Value v){
  int hv=pt->hf(k);  // 키를 해쉬 함수로 변환
  pt->tbl[hv].val=v;  // 해쉬 값에 대응하는 슬롯에 저장
  pt->tbl[hv].key=k;  // 해쉬 값에 대응하는 슬롯에 저장
  pt->tbl[hv].status=INUSE;  // 해쉬 값에 대응하는 슬롯에 저장
}

Value TBLDelete(Table * pt, Key k){
  int hv=pt->hf(k);  // 키를 해쉬 함수로 변환

  if((pt->tbl[hv]).status!=INUSE){
    return NULL;
  } else {
    (pt->tbl[hv]).status=DELETED;
    return (pt->tbl[hv]).val;  // 삭제된 데이터 반환
  }
}

Value TBLSearch(Table * pt, Key k){
  int hv=pt->hf(k);  // 키를 해쉬 함수로 변환

  if((pt->tbl[hv]).status!=INUSE){
    return NULL;
  } else {
    return (pt->tbl[hv]).val;  // 탐색된 데이터 반환
  }
}