#include <stdio.h>

int main(){
  FILE *file = fopen("mystory.txt", "at");
  fputs("#즐겨먹는 음식: 돈카츠, 라멘\n", file);
  fputs("#취미: 야구보기, 게임\n",file);
  fclose(file);
  return 0;
}