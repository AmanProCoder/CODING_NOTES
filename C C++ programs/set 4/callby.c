#include<stdio.h>
//call by value 
//actual parameter and formal parameters have different memory space, so if we change the value of formal parameter then it will not have affect on the actual parameters

void increment(int *a) //a=5
{
    (*a)++; //x=6
    *a=*a+100;
    printf("Value in Function increment: %d\n",*a);//a=
}
 
int main()
{
    int x = 5;
    increment(&x);//x=5
    // x=x+100;
    printf("Value in Function main: %d",x);//x=
    return 0;
}