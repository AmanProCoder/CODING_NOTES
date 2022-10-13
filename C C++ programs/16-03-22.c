#include<stdio.h>
void main()
{
    // Pointers

    //& =address operator 
    //int a; scanf("%d",&a); - 4bytes- sizeof(int);
    //Ram-main memory
    //1000 (1byte),1001,1002,1003,1004....
    //2056 2057 2058 2059 //contigous sequential 
    //unsigned integer %yu

    // int a=5;
    // int b=20;
    // printf("\nthe address of a is %u",&a);
    // printf("\nthe value of a is %d",a);

    // printf("\nthe address of b is %u",&b);
    // printf("\nthe value of b is %d",b); 

    // int *p1,*p2;// pointer variables
    // p1=&a;
    // p2=&b;

    // printf("\nthe p1 is %u",p1);
    // printf("\nthe p2 is %u",p2);

    // printf("\nthe value of a using the pointer variable is %d",*p1);
    // printf("\nthe value of b using the pointer variable is %d",*p2);

    // int sum,*psum;
    // sum=a+b;

    // printf("\nthe sum using varibles is %d",sum);
    // psum=&sum;

    // *psum=*p1+*p2;
    // printf("\nthe sum using pointer varibles is %d",*psum);

    // float x;
    // int *m1; // data type meaning- it is pointing the variable of the data type
    // float *m2;
    // //m1=&a; not valid(different data types of vairable and pointer variable)
    // m2=&x;   //valid

    // // ARRAY USING POINTER

    // int y[5]; // 4 bytes of memory- 1001 1005
    // printf("\n enter 5 values");
    // for(int i=0;i<5;i++)
    // scanf("%d",&y[i]);

    // printf("entered values are\n");
    // for(int i=0;i<5;i++)
    // printf("%d ",y[i]);

    int v[10],i;
    int *m;
    m=v;
    for(i=0;i<5;i++)
    {
        scanf("%d",m); //m=&v[0]
        m++;
    }
    m=v;
     for(i=0;i<5;i++)
    {
        printf("%d ",*m); 
        m++;
    }
}
//efficient as it directly refers to address 
//dynamic memory allocation -int a[100]->in use is 50
// file handling -read and write 
