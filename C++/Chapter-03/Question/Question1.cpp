#include <iostream>
using namespace std;

struct Point{
  int xpos;
  int ypos;

  void MovePos(int x, int y){  // 점의 좌표이동
    xpos+=x;
    ypos+=y;
  }

  void AddPoint(const Point &pos){  // 점의 좌표증가
    xpos+=pos.xpos;
    ypos+=pos.ypos;
  }

  void ShowPosition(){  // 현재 x, y 좌표정보 출력
    cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
  }
};

int main(){
  Point pos1={12, 4};
  Point pos2={20, 30};

  pos1.MovePos(-7, 10);  // pos1 좌표이동
  pos1.ShowPosition();   // [5, 14] 출력

  pos1.AddPoint(pos2);   // pos2 좌표증가
  pos1.ShowPosition();   // [25, 44] 출력
  return 0;
}