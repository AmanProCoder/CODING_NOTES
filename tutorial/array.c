//array is a collection of values of same data type
#include<stdio.h>
int main()
{
    //one dimensional array
    int x;
    int arr[5];
    printf("enter the 1st no:");
    scanf("%d",&arr[0]);
    printf("enter the 2nd no:");
    scanf("%d",&arr[1]);
    printf("enter the 3rd no:");
    scanf("%d",&arr[2]);
    printf("enter the 4th no:");
    scanf("%d",&arr[3]);
    printf("enter the 5th no:");
    scanf("%d",&arr[4]);


    printf("\nentered the 1st no:");
    printf("%d",arr[0]);
    printf("\nentered the 2nd no:");
    printf("%d",arr[1]);
    printf("\nentered the 3rd no:");
    printf("%d",arr[2]);
    printf("\nentered the 4th no:");
    printf("%d",arr[3]);
    printf("\nentered the 5th no:");
    printf("%d",arr[4]);
    return 0;
}