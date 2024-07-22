#include <stdio.h>
#include <stdlib.h>
#include "NameCard.h"
#include "NameCard.c"
#include "CardArrayList.h"
#include "CardArrayList.c"

int main(){
  // 리스트 생성 및 초기화
  List list;
  NameCard * pcard;
  ListInit(&list);

  // 3명의 정보 저장
  pcard = MakeNameCard("홍길동", "010-1111-2222");
  LInsert(&list, pcard);

  pcard = MakeNameCard("김철수", "010-2222-3333");
  LInsert(&list, pcard);

  pcard = MakeNameCard("이영희", "010-3333-4444");
  LInsert(&list, pcard);

  // 홍길동 정보 출력
  if(LFirst(&list, &pcard)){
    if(NameCompare(pcard, "홍길동")==0){
      ShowNameCardInfo(pcard);
    }
    while(LNext(&list, &pcard)){
      if(NameCompare(pcard, "홍길동")==0){
        ShowNameCardInfo(pcard);
      }
    }
  }

  // 김철수 전화번호 변경
  if(LFirst(&list, &pcard)){
    if(NameCompare(pcard, "김철수")==0){
      ChangePhoneNum(pcard, "010-9999-9999");
    }
    while(LNext(&list, &pcard)){
      if(NameCompare(pcard, "김철수")==0){
        ChangePhoneNum(pcard, "010-9999-9999");
      }
    }
  }

  // 이영희 정보 삭제
  if(LFirst(&list, &pcard)){
    if(NameCompare(pcard, "이영희")==0){
      pcard = LRemove(&list);
      free(pcard);
    }
    while(LNext(&list, &pcard)){
      if(NameCompare(pcard, "이영희")==0){
        pcard = LRemove(&list);
        free(pcard);
        break;
      }
    }
  }

  // 모든 사람 정보 출력
  if(LFirst(&list, &pcard)){
    ShowNameCardInfo(pcard);
    while(LNext(&list, &pcard)){
      ShowNameCardInfo(pcard);
    }
  }

  return 0;
}
