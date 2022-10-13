#include<stdio.h>
int main()
{
     float p,r,t;
     printf("enter the principal value:");
     scanf("%f",&p);
     printf("enter the rate of interest(per year):");
     scanf("%f",&r);
     printf("enter the time period(in years):");
     scanf("%f",&t);
     printf("the simple interest will be:%f",p*r*t/100);
}