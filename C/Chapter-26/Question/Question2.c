#include <stdio.h>
#define PI 3.14
#define AREA(x) ((x)*(x)*PI)

int main(){
  double radius;
  printf("Enter the radius of the circle: ");
  scanf("%lf", &radius);
  printf("The area of the circle is: %.2f\n", AREA(radius));
  return 0;
}