#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CLinkedList.c"
#include "CLinkedList.h"
#include "Employee.h"

void ShowEmployeeInfo(Employee * emp){
  printf("사번: %d\n", emp->empNum);
  printf("이름: %s\n\n", emp->name);
}

Employee * WhoIsNightDuty(List * plist, char * name, int day){
  Employee * emp;
  int i, num = LCount(plist);

  // 이름 찾기
  LFirst(plist, &emp);

  if(strcmp(emp->name, name) != 0){
    for(i=0; i<num-1; i++){
      LNext(plist, &emp);
      if(strcmp(emp->name, name) == 0)
        break;
    }

    if(i >= num-1)  // 해당 이름이 존재 하지 않으면
      return NULL;
  }

  // 며칠 뒤의 데이터 찾기
  for(i=0; i<day; i++)
    LNext(plist, &emp);

  return emp;
}

int main(){
  // 원형 연결 리스트 생성 및 초기화
  int i;
  List list;
  Employee * emp;
  ListInit(&list);

  // 4명의 데이터 저장
  emp = (Employee*)malloc(sizeof(Employee));
  emp->empNum = 1;
  strcpy(emp->name, "Lee");
  LInsert(&list, emp);

  emp = (Employee*)malloc(sizeof(Employee));
  emp->empNum = 2;
  strcpy(emp->name, "Kim");
  LInsert(&list, emp);

  emp = (Employee*)malloc(sizeof(Employee));
  emp->empNum = 3;
  strcpy(emp->name, "Park");
  LInsert(&list, emp);

  emp = (Employee*)malloc(sizeof(Employee));
  emp->empNum = 4;
  strcpy(emp->name, "Choi");
  LInsert(&list, emp);

  // 전체 데이터 출력
  if(LFirst(&list, &emp)){
    ShowEmployeeInfo(emp);

    for(int i=0; i<LCount(&list)-1; i++){
      if(LNext(&list, &emp))
        ShowEmployeeInfo(emp);
    }
  }

  // Lee의 3일 후 당직자 찾기
  emp = WhoIsNightDuty(&list, "Lee", 3);
  printf("Lee의 3일 후 당직자\n");
  ShowEmployeeInfo(emp);

  // Kim의 15일 후 당직자 찾기
  emp = WhoIsNightDuty(&list, "Kim", 15);
  printf("Kim의 15일 후 당직자\n");
  ShowEmployeeInfo(emp);

  // 할당 메모리 전체 소멸
  if(LFirst(&list, &emp)){
    free(emp);

    for(i=0; i<LCount(&list)-1; i++){
      LNext(&list, &emp);
      free(emp);
    }
  }
  return 0;
}