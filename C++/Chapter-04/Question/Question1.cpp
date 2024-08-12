#include <bits/stdc++.h>
using namespace std;

class Point{
  private:
    int xpos, ypos;

  public:
    Point(int xpos=0, int ypos=0): xpos(xpos), ypos(ypos){}
    void ShowPointInfo() const{
      cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
    }
};

class Circle{
  private:
    Point center;
    int rad;

  public:
    Circle(int x, int y, int r): center(x, y), rad(r){}
    void ShowCircleInfo() const{
      cout<<"radius: "<<rad<<endl;
      center.ShowPointInfo();
    }
};

class Ring{
  private:
    Circle inCircle;
    Circle outCircle;

  public:
    Ring(int inX, int inY, int inR, int outX, int outY, int outR): inCircle(inX, inY, inR), outCircle(outX, outY, outR){}
    void ShowRingInfo() const{
      cout<<"Inner Circle Info..."<<endl;
      inCircle.ShowCircleInfo();
      cout<<"Outer Circle Info..."<<endl;
      outCircle.ShowCircleInfo();
    }
};

int main(){
  Ring ring(1, 1, 4, 2, 2, 9);
  ring.ShowRingInfo();
  return 0;
}