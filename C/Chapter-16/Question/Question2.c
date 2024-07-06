#include <stdio.h>

int main(){
  int arr1[2][4]={{1,2,3,4},{5,6,7,8}};
  int arr2[4][2];

  // Transpose the array
  for(int i=0; i<2; i++){
    for(int j=0; j<4; j++){
      arr2[j][i] = arr1[i][j];
    }
  }
  
  // Print the transposed array
  printf("Transposed Array:\n");
  for(int i=0; i<4; i++){
    for(int j=0; j<2; j++){
      printf("%d ", arr2[i][j]);
    }
    printf("\n");
  }
}