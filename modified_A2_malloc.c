#include <stdio.h>
#include <stdlib.h>


int main(){
  double* pt=(double*)malloc(100*sizeof(float));
  int i;
  for( i=1;i<=100;i++){
    printf("%f\n",pt[i-1]);
  pt[i-1]=i*i;
  } 
}
