// pointer- pointer is a variable that points to the address of an variable 
#include<stdio.h>
int main()
{
    // int a,b;
    // b=19999;
    // a=100;
    // // scanf("%d",&a);
    // // printf("printf the value of a=:%d\n",a);
    // int *ptr;// this is a pointer variable of int type 
    // ptr=&a;//ptr has stored the address of 'a' by this line of code
    // // scanf("%d",ptr);// ptr is pointing to a
    // printf("printing the value of a=%d\n",*ptr);
    // ptr=&b;
    // printf("printing the value of b=%d",*ptr);
    // //*ptr is used to access the value at the address stored in the ptr


    int a,b;
    a=10;
    b=80;
    int sum;

    int *p1,*p2,*psum;
    p1=&a;
    p2=&b;
    psum=&sum;

    *psum=*p1+*p2;//sum=a+b;
    printf("address of sum is %u",psum);
    printf("\naddress of a is %u",p1);
    printf("\naddress of b is %u",p2);


    /*
    value --- a,b,sum   |   *p1,*p2,*psum
    address-- &a,&b,&sum|    p1,p2,psum
                        |
    */
   
}