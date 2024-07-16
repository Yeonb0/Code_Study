#include "basicArith.h"

double TriangleArea(double base, double height){
  return Div(Mul(base, height),2);
}

double CircleArea(double rad){
  return Mul(PI, Mul(rad, rad));
}