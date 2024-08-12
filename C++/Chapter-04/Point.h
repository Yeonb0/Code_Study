#ifndef __POINT_H__
#define __POINT_H__

class Point{
  private:
    int x;  // 0 이상 100 이하
    int y;  // 0 이상 100 이하

  public:
    bool InitMembers(int xpos, int ypos);
    int GetX() const;
    int GetY() const;
    bool SetX(int xpos);
    bool SetY(int ypos);
    void ShowPointInfo() const;
};

#endif