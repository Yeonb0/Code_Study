#include <stdio.h>

int PrimeCheck(int num);

int main(){
  int num = 2, count = 0;
  
  while(count < 10){  // 총 10개 출력
    if(PrimeCheck(num)){
      printf("%d ", num);
      count++;  // 출력 시 count++
    }
    num++;  // 소수든 아니든 num은 ++
  }
  
  return 0;
}

int PrimeCheck(int num){
  int i, isPrime = 0;
  if(num <= 1) return 0;  // 1은 소수가 아니다

  for(i = 2; i*i <= num; i++){
    if(num % i == 0) {
      isPrime = 1;  // num은 i로 나누어지므로 소수가 아님
      break;
    }
  }
  
  return (isPrime == 0)? 1 : 0;  // isPrime == 0 이면 num은 소수
}
