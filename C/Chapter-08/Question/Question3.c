#include <stdio.h>

int main(){
  int kor,eng,mat;
  double avg;

  printf("성적을 입력하세요(국어, 영어, 수학): ");
  scanf("%d %d %d", &kor, &eng, &mat);
  avg = (double)(kor+eng+mat)/3;

  if(avg >= 90)
    printf("A학점입니다.\n");
  else if (avg >= 80)
    printf("B학점입니다.\n");
  else if (avg >= 70)
    printf("C학점입니다.\n");
  else if (avg >= 50)
    printf("D학점입니다.\n");
  else
    printf("F학점입니다.\n");

  return 0; 
}