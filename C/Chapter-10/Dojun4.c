#include <stdio.h>
const int bread=500;
const int snack=700;
const int coke=400;

int main(){
  int total;
  printf("현재 당신이 소유하고 있는 금액: ");
  scanf("%d",&total);
  for(int i=1; i<total; i++){
    for(int j=1; j<total; j++){
      for(int k=1; k<total; k++){
        if(i*bread+j*snack+k*coke==total){
          printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개 \n",i,j,k);
        }
      }
    }
  }
  printf("어떻게 구입하시겠습니까?");
  
  return 0;
}