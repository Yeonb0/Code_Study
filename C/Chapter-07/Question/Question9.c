#include <stdio.h>

int main(){
  int start, end;
  int sum;
  printf("Enter Start and End: ");
  scanf("%d %d", &start, &end);

  for(int i=start; i<end+1; i++){
    sum += i;
  }
  printf("Sum: %d\n", sum);

  return 0;
}