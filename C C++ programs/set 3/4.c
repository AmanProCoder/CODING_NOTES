#include<stdio.h>
void main()
{
    int num1,num2,d;
    printf("enter the first no::");
    scanf("%d",&num1);
    printf("enter the second no::");
    scanf("%d",&num2);
    if(num1>=num2)
    d=num2;
    else
    d=num1;    
    for(;d>0;d--)
    {
        if(num1%d==0 && num2%d==0)
        break;
    }
    printf("GCD of 2 no is %d",d);
}