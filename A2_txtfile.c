#include <stdio.h>
#include <stdlib.h>
double* mean_var (int *ptr,int nn)
{int i;
int n=nn;
double mean=0;
for (i=1;i<=n;i++){
	mean=mean+ptr[i-1];
}
mean=mean/nn;
double var=0;
for (i=1;i<=n;i++){
	var=var+(ptr[i-1]-mean)*(ptr[i-1]-mean);
}
static double values[2];
values[0]=mean;
values[1]=var/nn;

return values;
}

int main(){
FILE *f;
f=fopen("output.txt","w");
  
  int* ptr=(int*)malloc(100*sizeof(float));
  int i;
  for( i=1;i<=100;i++){
     
  ptr[i-1]=i*i;
  } 
  double *p_var;
  p_var=mean_var(ptr,100);
  printf("mean is %f \n Variance is %f",p_var[0],p_var[1]);
fprintf(f,"mean of data :%f \n var of data %f",p_var[0],p_var[1]);
fclose(f);
  free(ptr);
  return 0;
}
