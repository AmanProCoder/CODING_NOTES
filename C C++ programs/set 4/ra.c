#include<stdio.h>
//return with arguments 

double sum(double a,double b) // a=99 b=100
{
    double h;
    h=a+b;
    return h;
}
int main()
{
    double x,y; //declaring the var
    printf("enter the no:"); //prints the string inside the function //predefined 
    scanf("%ld %ld",&x,&y);   //x=99 y=100
    double s=sum(x,y);
    printf("the sum of the nos is:%ld",s);
    return 0;
}