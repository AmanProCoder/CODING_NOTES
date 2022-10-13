#include<stdio.h>
// int fun(int[] list)
// {
    
// }
void main()
{

double x=1.2;
float y=0.0;
int i=3;
int j=0;
j=x+i; /* (temporary copy of)i will be converted to double type
before ‘+’ operation.
the value of i in memory is unchanged */
y=x+i;
printf("j=%d , y=%f\n",j,y);
}