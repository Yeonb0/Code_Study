#include <stdio.h>

int main(){
  int score[5][5];
  for(int i=0; i<4; i++){
    printf("학생 %d 성적 입력 \n",i+1);
    printf("국어, 영어, 수학, 국사: ");
    scanf("%d %d %d %d", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);
    score[i][4] = score[i][0] + score[i][1] + score[i][2] + score[i][3];
    for(int j=0; j<4; j++){
      score[4][j] = score[0][j] + score[1][j] + score[2][j] + score[3][j];
    }
    score[4][4] = score[4][0] + score[4][1] + score[4][2] + score[4][3];
  }

  // 출력
  for(int i=0;i<5;i++){
    for(int j=0; j<5; j++){
      printf("%2d ", score[i][j]);
    }
    printf("\n");
  }
  return 0;
}