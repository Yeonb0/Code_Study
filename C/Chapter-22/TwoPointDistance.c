#include <stdio.h>
#include <math.h>

struct point{
  int xpos;
  int ypos;
};

int main(){
  struct point pos1, pos2;
  double distance;

  fputs("point1 pos: ", stdout);
  scanf("%d %d", &pos1.xpos, &pos1.ypos);

  fputs("point2 pos: ", stdout);
  scanf("%d %d", &pos2.xpos, &pos2.ypos);

  /* 두 점간의 거리 계산 공식 */
  distance = sqrt(pow(pos2.xpos - pos1.xpos, 2) + pow(pos2.ypos - pos1.ypos, 2));
  printf("두 점 사이의 거리: %g\n", distance);
  
  return 0;
}