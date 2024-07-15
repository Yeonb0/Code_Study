#include <stdio.h>

int main(){
  long fpos;
  int i;

  /* 파일생성 */
  FILE *fp = fopen("text2.txt", "wt");
  fputs("1234-",fp);
  fclose(fp);

  /* 파일개방 */
  fp = fopen("text2.txt", "rt");

  for(i=0;i<4;i++){
    putchar(fgetc(fp));
    fpos=ftell(fp);
    fseek(fp,-1,SEEK_END);
    putchar(fgetc(fp));
    fseek(fp,fpos,SEEK_SET);
  }
  fclose(fp);
  return 0;
}