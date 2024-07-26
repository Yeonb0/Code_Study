#include <string.h>
#include <ctype.h>
#include "InfixToPostFix.h"  // 중위 표기법을 후위 표기법으로 변환
#include "InfixToPostFix.c"
#include "PostCalculator.h"  // 후위 표기법을 계산
#include "PostCalculator.c"
#include "InfixCalculator.h"

int EvalInfixExp(char exp[]){
  int len = strlen(exp);
  int ret;
  char * expcpy = (char*)malloc(len+1);  // 문자열 저장공간 마련
  strcpy(expcpy, exp);  // exp를 expcpy로 복사

  ConvToRPNExp(expcpy);  // 중위 표기법을 후위 표기법으로 변환
  ret = EvalRPNExp(expcpy);  // 후위 표기법으로 표현된 수식을 계산

  free(expcpy);  // 동적 할당된 메모리 해제
  return ret;  // 계산된 결과 반환
}