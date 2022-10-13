#include<stdio.h>
#include<stdlib.h>
// void main()
// {
    //Dynamic (runtime/execution/late binding)memory allocation
    //int a; //static /compile time or early binding-assigns the amount of memory during the compilation
    //int a[10];--> here we assigned memory of 10 positions in the memory but if we store on the 6 elements only then the rest of the memroy will be wasted
    //<stdlib.h> contains the following functions 
    // malloc()-memor allocation-ptr=(casting-ptr) malloc(n*sizeof(data_type))
    //calloc()- continuous allocation- ptr=(casting ptr)calloc(n,size_of_each_element)
    //functionality of calloc() and malloc is same but technical difference is if 10 *4=40 bytes of memroy is allocated as single block where as 10 different block of memory where each block size is 4 bytes
    //while writing the malloc or calloc we cant enter the different data types in the vairables
    //free()- //de allocate memory
    //realloc()- //re allocate the memory if we have assigned the 5 values in the var but we have to re allocate it to 10(another 5 values) values
    //ptr=realloc(ptr,new_size)

    //Single integer values
    // int *p;
    // p=(int*) malloc(1*sizeof(int)); //(int*) is the type-casting 
    // printf("\n enter a value:");
    // scanf("%d",p);
    // printf("%d",*p);
    // //int c; c=*p1+*p2; //here p1 and p2 are the pointers
    // //int *c; *c=*p1+*p2; //here p1 and p2 are the pointers



    // //multiple integer values- similar to SINGLE DIMENSIONAL ARRAY
    // int *p;
    // int n;
    // printf("\n enter the no of values:");
    // scanf("%d",&n);
    // p=(int*) malloc(n*sizeof(int));
    // printf("\n enter %d  value:",n);
    // for(int i=0;i<n;i++)
    // {
    // scanf("%d",p+i);
    // }
    //   for(int i=0;i<n;i++)
    // {
    // printf("entered values are %d\n",*(p+i));
    // }
    // free(p); // it de-allocate the memory 





    //multiple integer values-TWO DIMENSIONAL ARRAY
//     int *p;
//     int n,m;
//     int *temp;
//     printf("\n enter the row size:");
//     scanf("%d",&n);
//     printf("\n enter the column size:");
//     scanf("%d",&m);
//     p=(int*) malloc(m*n*sizeof(int));
//     temp=p;
//     printf("\n enter %d  value:",n*m);
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             scanf("%d",p);
//             p++;
//         }
//     }
//     p=temp; 
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             printf("%d ",*p);
//             p++;
//         }
//         printf("\n");
//     }
//     free(p); // it de-allocate the memory 

// }   


//using the calloc()
 
void main()
{
    int *p;
    int n,m;
    int *temp;
    printf("\n enter the row size:");
    scanf("%d",&n);
    printf("\n enter the column size:");
    scanf("%d",&m);
    p=(int*) calloc(m*n,sizeof(int));
    temp=p;
    printf("\n enter %d  value:",n*m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",p);
            p++;
        }
    }
    p=temp; 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",*p);
            p++;
        }
        printf("\n");
    }
    free(p); // it de-allocate the memory 

} 


 