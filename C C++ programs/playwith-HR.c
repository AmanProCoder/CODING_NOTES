#include<stdio.h>
void main()
{
    int n,y,s=0,i;
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        y=n%10;
        n=n/10;
        s=s+y;
    }
    printf("%d %d",s,i);
}