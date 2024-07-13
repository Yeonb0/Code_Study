#include <stdio.h>

typedef struct{
  int xpos;
  int ypos;
} Point;

void OrgSymTrans(Point * ptr){  // 원점대칭
  ptr->xpos = -ptr->xpos;
  ptr->ypos = -ptr->ypos;
} 

void ShowPosition(Point pos){
  printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

int main(){
  Point pos={7,-5};
  OrgSymTrans(&pos);
  ShowPosition(pos);
  OrgSymTrans(&pos);
  ShowPosition(pos);

  return 0;
}