#include<stdio.h>
void main()
{
    double e=1,item=1;
    int n,i;
    printf("enter the no:");
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        item=item/i;
        e+=item;
    }
    printf("value of e for %d is %.10lf",n,e);
}