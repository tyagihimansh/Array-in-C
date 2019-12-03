#include <stdio.h>
#include <stdlib.h>
#include "function.h"
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
