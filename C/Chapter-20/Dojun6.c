#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Baseball Game */

void get3num(char * arr){
  int num1,num2,num3;
  num1 = rand()%10;
  do{
    num2 = rand()%10;
  }while(num1==num2);
  do{
    num3 = rand()%10;
  }while(num1==num3 || num2==num3);
  *arr = num1+'0';
  *(arr+1) = num2+'0';
  *(arr+2) = num3+'0';
  *(arr+3) = '\0';
}
int checkStrike(char *baseball, char *guess){
  int i;
  int strike = 0;
  for(i=0;i<3;i++){
    if(baseball[i]==guess[i]) strike++;
  }
  return strike;
}
int checkBall(char baseball[], char guess[]){
  int i;
  int ball = 0;
  for(i=0;i<3;i++){
    if(baseball[i]==guess[i]) continue;
    int j;
    for(j=0;j<3;j++){
      if(baseball[i]==guess[j]) ball++;
    }
  }
  return ball;
}

int main(){
  char baseball[5];
  char guess[10];
  int try = 0;
  int ball, strike;

  srand((unsigned int)time(NULL));
  printf("** Number Baseball Game **\nGenerate 3 digit number\n");

  get3num(baseball);
  // printf("[%s]\n",baseball); // 테스트 할 경우 주석 풀기
  
  while(1){
    try++;
    printf("[%d try] Enter 3 digits number: ", try);
    scanf("%s",guess);
    strike = checkStrike(baseball, guess);
    ball = checkBall(baseball, guess);
    if(strike >=3) break;
    printf("%d strike %d ball\n",strike,ball);
  }
  printf("You got the numbers in %d tries\n",try);

  return 0;
}