#include <stdio.h>

void TimePrint(int seconds){
  int minutes, hours;
  hours = seconds / 3600;
  minutes = (seconds % 3600) / 60;
  printf("[h:%02d, m:%02d, s:%02d]\n", hours, minutes, seconds % 60);
}

int main(){
  int seconds;
  printf("초(second) 입력: ");
  scanf("%d", &seconds);
  TimePrint(seconds);
  return 0;
}