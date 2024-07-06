#include <stdio.h>

int main(){
  double num = 3.14;
  double *ptr = &num;
  double **dptr = &ptr;
  double *ptr2;

  printf("%p %p \n",ptr, *dptr);
  printf("%g %g \n",num, **dptr);
  ptr2 = *dptr;  // ptr2 = ptr 같은 문장
  *ptr2 = 10.99;
  printf("%g %g \n",num, **dptr);
  return 0;
}