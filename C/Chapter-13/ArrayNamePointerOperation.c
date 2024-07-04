#include <stdio.h>

int main(){
  int arr1[3]={1,2,3};
  double arr2[3]={1.1,2.2,3.3};

  printf("%d %g\n",*arr1,*arr2);  
  *arr1 += 100;   // 배열의 첫째 요소만 더함
  *arr2 += 120.5; 
  printf("%d %d %g %g\n",arr1[0],arr1[1],arr2[0],arr2[2]);
  return 0;
}