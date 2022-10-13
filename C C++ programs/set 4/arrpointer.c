#include<stdio.h>
int main()
{
    int a[100];
    //normal using the array
    // for(int i=0;i<6;i++)
    // {
    //     scanf("%d",&a[i]);
    // }


    //using the pointer(by incrementing the pointer) 
    int *ptr;
    ptr=a;//ptr points to the 0 index of array 
    // for(int i=0;i<6;i++)
    // {
    //     scanf("%d",ptr);//ptr points to index 5 // a[5]
    //     ptr++;
    // }
    // ptr=a;//ptr points to the 0 index of array
    // for(int i=0;i<6;i++)
    // {
    //     printf("%d ",*ptr);//ptr points to index 5 // a[5]
    //     ptr++;
    // }

    ptr=a;
    //using the pointer(by keeping the pointer still)
    for(int i=0;i<6;i++)
    {
        scanf("%d",ptr+i);
    }
    for(int i=0;i<6;i++)
    {
        printf("%d ",*(ptr+i));//ptr points to index 5 // a[5]
    }

}