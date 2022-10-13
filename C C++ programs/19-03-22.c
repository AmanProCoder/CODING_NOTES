#include<stdio.h>
// int main()
// {
//     //ARRAYS USING POINTERS 
//     //Single dimensional array 
//     int a[10];
//     int i,j;
//     //read values
//     // for(i=0;i<5;i++)
//     // {
//     //     //scanf("%d",&a[i]);

//     //     scanf("%d",a+i); //a or a+0=&a[0],a+1=&a[1],a+2=&a[2]..............
//     // }

//     //  //printing values
//     // for(i=0;i<5;i++)
//     // {
//     //     //printf("%d",a[i]);

//     //     printf("%d",*(a+i)); //*a or *(a+0)=a[0],*(a+1)=a[1],..............
//     // }
    

//     //2 dimensional array 
//     int b[10][10];
//     //10 20 30 
//     //40 50 60 
//     //70 80 90

//     //b=pointer to first row 
//     //b+i=pointer to ith row 
//     //*(b+i)=pointer to first element in the ith row 
//     //*(b+i)+j=pointer to jth element in the ith row 
//     //*(*(b+i)+j)=value avaiable at index[i,j]

//     //read values
//     printf("enter 2d array:");
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<3;j++)
//         {
//         scanf("%d", *(b+i)+j);
//         }
//     }

//     //print values
//     for(i=0;i<2;i++)
//     {
//         for(j=0;j<3;j++)
//         printf("%d",*(*(b+i)+j));
//     }

//      //     // *(*(b+i)+j) = value available at index[i,j]
    
//     // Three dimensional =     *(*(b+i)+j)+k = pointer to i,j,k element
//     //  *( *(*(b+i)+j)+k ) = value at a[i][j][k]
    
//     return 0;
// }











//BY TAKING DIFFERENT POINTER VARIABLE

int main()
{
    int a[10];
    int *p;
    p=a;
    int i,j;
    //1D array
    //read values
    for(i=0;i<5;i++)
    {
        //scanf("%d",&a[i]);

        scanf("%d",p+i); //a or a+0=&a[0],a+1=&a[1],a+2=&a[2]..............
    }

    //printing values
    for(i=0;i<5;i++)
    {
        //printf("%d",a[i]);

        printf("%d",*(p+i)); //*a or *(a+0)=a[0],*(a+1)=a[1],..............
    }
    
     //2 dimensional array 
    int b[10][10];
    //10 20 30 
    //40 50 60 
    //70 80 90

    int (*p2)[3];//WE need to specify the no of columns 
    p2=b;
    //read values
    printf("enter 2d array:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d", *(p2+i)+j);
        }
    }

    //print values
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        printf("%d",*(*(p2+i)+j));
    }

}
