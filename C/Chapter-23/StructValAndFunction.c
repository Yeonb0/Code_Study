#include <stdio.h>

typedef struct{
  int xpos;  // xpos = position of x
  int ypos;  // ypos = position of y
} Point;

void ShowPosition(Point pos){
  printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(){
  Point cen;
  printf("Input current position: ");
  scanf("%d %d", &cen.xpos, &cen.ypos);
  return cen;
}

int main(){
  Point curpos=GetCurrentPosition();
  ShowPosition(curpos);
  return 0;
}