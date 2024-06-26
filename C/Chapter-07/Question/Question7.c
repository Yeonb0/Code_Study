#include <stdio.h>

int main(){
  int col=0, row=0;
  while(col<5){
    row=0;
    while(row<col){
      printf("o ");
      row++;
    }
    printf("* \n");
    col++;
  }
  
  return 0;
}