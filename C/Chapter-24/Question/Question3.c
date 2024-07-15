#include <stdio.h>

int main(){
  FILE *file = fopen("mystory.txt", "rt");
  char str[100];
  while(fgets(str, 100, file)!=NULL){
    printf("%s", str);
  }
  fclose(file);
  return 0;
}