#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<7;i++)
    {
        for(j=1;j<8;j++)
        {
            if(j<i)
            printf("%d",j-i);
            else
            printf(" ");
        }
        printf("\n");
    }
}