#include <stdio.h>

typedef struct{
  int xpos;
  int ypos;
} Point;

int main(){
  Point pos1={1,2};
  Point pos2;
  pos2 = pos1; // pos1, pos2 복사

  printf("크기: %d\n",sizeof(pos1));
  printf("[%d %d]\n",pos1.xpos,pos1.ypos);
  printf("크기: %d\n",sizeof(pos2));
  printf("[%d %d]\n",pos2.xpos,pos2.ypos);

  return 0;
}