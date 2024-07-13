#include <stdio.h>

struct point{
  int xpos;
  int ypos;
};

int main(){
  struct point pos1 = {1,2};
  struct point pos2 = {100,200};
  struct point* pptr = &pos1;

  (*pptr).xpos += 4;
  (*pptr).ypos += 5;
  printf("[%d, %d]\n", pos1.xpos, pos1.ypos);

  pptr=&pos2;
  pptr->xpos += 1;
  pptr->ypos += 2;
  printf("[%d, %d]\n", pos2.xpos, pos2.ypos);

  return 0;
}