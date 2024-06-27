#include <stdio.h>

int main(){
  for(int i=2;i<9;i+=2){
    for(int j=1;j<i+1;j++){
      printf("%2d x %2d = %2d   ",i,j,i*j);
    }
    printf("\n");
  }

  return 0;
}