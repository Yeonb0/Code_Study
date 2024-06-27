#include <stdio.h>

int main(){
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      if(11*(i+j)==99){
        printf("%d%d + %d%d = %d\n",i,j,j,i,99);
      }
    }
  }

  return 0;
}