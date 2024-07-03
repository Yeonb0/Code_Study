#include <stdio.h>

int main(){
  char arr[]="Good time";
  int length = sizeof(arr) / sizeof(arr[0]);
  int i;
  for(i = 0; i < length; i++){
    printf("%c", arr[i]);
  }
  return 0;
}