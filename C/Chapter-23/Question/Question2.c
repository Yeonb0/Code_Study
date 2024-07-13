#include <stdio.h>

typedef struct{
  int x;
  int y;
} Point;

typedef struct{
  Point pos1;
  Point pos2;
} Rectangle;

void AreaOfRectangle(Rectangle *ptr){
  int area;
  area = (ptr->pos2.x - ptr->pos1.x) * (ptr->pos2.y - ptr->pos1.y);
  printf("%d\n", area);
}

void FourPointOfRectangle(Rectangle *ptr){
  printf("%d %d\n", ptr->pos1.x, ptr->pos1.y);
  printf("%d %d\n", ptr->pos1.x, ptr->pos2.y);
  printf("%d %d\n", ptr->pos2.x, ptr->pos2.y);
  printf("%d %d\n", ptr->pos2.x, ptr->pos1.y);
}

int main(){
  Rectangle rect={{0,0},{100,100}};
  AreaOfRectangle(&rect);
  FourPointOfRectangle(&rect);
  return 0;
}