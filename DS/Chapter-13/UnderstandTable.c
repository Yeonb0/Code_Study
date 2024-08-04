#include <stdio.h>

typedef struct _table {
  int empNum;   // 직원의 고유번호
  int age;      // 직원의 나이
} EmpInfo;

int main(){
  EmpInfo empInfoArr[1000];
  EmpInfo ei;
  int eNum;

  printf("사번과 나이 입력: ");
  scanf("%d %d", &ei.empNum, &ei.age);
  empInfoArr[ei.empNum] = ei;  // 단번에 저장!

  printf("Enter the employee number to search: ");
  scanf("%d", &eNum);

  ei = empInfoArr[eNum];   // 단번에 탐색!
  printf("Employee number %d\n", ei.empNum);
  printf("Employee age %d\n", ei.age);

  return 0;
}