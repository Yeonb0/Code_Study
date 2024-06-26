#include <stdio.h>

int main(){
  int x1, y1, x2, y2;
  int area;
  printf("좌 상단의 x, y 좌표: ");
  scanf("%d %d", &x1, &y1);
  printf("우 하단의 x, y 좌표: ");
  scanf("%d %d", &x2, &y2);

  area = (x2 - x1) * (y2 - y1);
  printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n", area);
  return 0;
}