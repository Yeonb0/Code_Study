#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "ListBaseStack.h"
#include "ListBaseStack.c"
#include "InfixToPostFix.h"

int GetOpPrec(char op){
  switch(op){
    case '*':
    case '/':
      return 5;  // 가장 높은 우선순위
    case '+':
    case '-':
      return 3;
    case '(':
      return 1;  // 가장 낮은 우선순위
  }
  return -1;  // 등록되지 않은 연산자
}

int WhoPrecOp(char op1, char op2){
  int op1Prec = GetOpPrec(op1);
  int op2Prec = GetOpPrec(op2);

  if(op1Prec > op2Prec)       // op1이 우선순위가 높으면
    return 1;
  else if(op1Prec < op2Prec)  // op2가 우선순위가 높으면
    return -1;
  else
    return 0;                 // 우선순위가 같으면 0 반환
}

void ConvToRPNExp(char exp[]){
  Stack stack;
  int expLen = strlen(exp);
  char * convExp = (char*)malloc(expLen+1);  // 변환된 수식을 담을 공간

  int i, idx = 0;
  char tok, popOp;

  memset(convExp, 0, sizeof(char)*expLen+1);  // 할당된 배열을 0으로 초기화
  StackInit(&stack);

  for(i=0; i<expLen; i++){
    tok = exp[i];                // exp로 전달된 수식을 한 문자씩 tok에 저장
    if(isdigit(tok)){            // tok에 저장된 문자가 숫자인지 확인
      convExp[idx++] = tok;      // 숫자면 배열에 그냥 저장
    }
    else{                        // 연산자인 경우
      switch(tok){
        case '(':                // 여는 괄호는 무조건 스택에 push
          SPush(&stack, tok);
          break;
        case ')':                // 닫는 괄호가 나오면 여는 괄호가 나올 때까지 pop
          while(1){
            popOp = SPop(&stack);
            if(popOp == '(')
              break;
            convExp[idx++] = popOp;
          }
          break;
        case '+': case '-':
        case '*': case '/':
          while(!SIsEmpty(&stack) && WhoPrecOp(SPeek(&stack), tok) >= 0)  // 스택의 top에 있는 연산자와 우선순위 비교, top의 연산자가 우선순위가 높으면 pop
            convExp[idx++] = SPop(&stack);
          SPush(&stack, tok);
          break;
      }
    }
  }

  while(!SIsEmpty(&stack))              // 스택에 남은 모든 연산자를 pop
    convExp[idx++] = SPop(&stack);

  strcpy(exp, convExp);          // 변환된 수식을 exp에 복사
  free(convExp);                 // 변환된 수식을 저장하기 위해 할당했던 메모리 해제
}

/*
void * memset(void * ptr, int value, size_t num);
-> ptr로 전달된 주소의 메모리서부터 num 바이트를 value로 설정

int isdigit(int c);
-> c가 0~9 사이의 숫자인지 확인, 맞으면 1 반환
*/