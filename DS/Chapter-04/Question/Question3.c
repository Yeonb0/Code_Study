typedef struct _point{
  int xpos;
  int ypos;
} Point;

int WhoIsPrecede(Point * d1, Point * d2){
  if(d1->xpos < d2->xpos)
    return 0;  // d1 이 정렬 순서상 앞선다
  else if(d1->xpos == d2->xpos){
    if(d1->ypos < d2->ypos)
      return 0;
    else
      return 1;
  }else
    return 1;  // d2 가 정렬 순서상 앞서거나 같다
}