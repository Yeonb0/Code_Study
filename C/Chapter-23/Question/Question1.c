#include <stdio.h>

typedef struct{
  int xpos;
  int ypos;
} Point;

void SwapPoint(Point * pos1, Point * pos2){
  Point temp = *pos1;
  *pos1 = *pos2;
  *pos2 = temp;
}

int main(){
  Point pos1 = {2, 4};
  Point pos2 = {5, 7};

  printf("Current point1: [%d, %d]\n", pos1.xpos, pos1.ypos);
  printf("Current point2: [%d, %d]\n", pos2.xpos, pos2.ypos);
  SwapPoint(&pos1,&pos2);
  printf("Changed point1: [%d, %d]\n", pos1.xpos, pos1.ypos);
  printf("Changed point2: [%d, %d]\n", pos2.xpos, pos2.ypos);

  return 0;
}