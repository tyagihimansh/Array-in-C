#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(){
  double* ptr=(double*)malloc(100*sizeof(float));
  int i;
  for( i=1;i<=100;i++){
  ptr[i-1]=i*i;  }
  double *p_var;
  p_var=mean_var(ptr,100);
  printf("mean is %f \n Variance is %f",p_var[0],p_var[1]);
  return 0;
}
