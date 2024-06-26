#include <stdio.h>

int main(){
  int num, inputNum;
  int sum=0;
  int start=1;
  double average;
  printf("Enter the number: ");
  scanf("%d", &num);
  while(start<=num){
    printf("Enter %d num: ", start++);
    scanf("%d", &inputNum);
    sum += inputNum;
  }
  average = (double)sum/num;
  printf("Average: %f\n", average);

  return 0;
}