#include<stdio.h>
struct product 
{
    char prod_id[4];
    char prod_name[30];
    int prod_price;
    char prod_expdate[50];
    int prod_rackno;
}arr[100],temp;
void input(int n)
{
    int i;
for(i=0;i<n;i++)
    {
        scanf("%s",arr[i].prod_name);
        scanf("%d",&arr[i].prod_id);
        scanf("%d",&arr[i].prod_price);
        scanf("%s",arr[i].prod_expdate);
        scanf("%d",&arr[i].prod_rackno);
    }
}
void sort1(int n)
{
    
struct product *arr1;
arr1=arr;
    for (int i = 0; i < n; i++) 
    {     
        for (int j = i+1; j < n; j++) 
        {     
           if(arr1->prod_id[i] > arr1->prod_id[j]) 
           {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }  
}
}
void sort2(int n)
{
struct product *arr1;
arr1=arr;
    for (int i = 0; i < n; i++) 
    {     
        for (int j = i+1; j < n; j++) 
        {     
           if(arr1->prod_rackno < arr1->prod_rackno) 
           {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }  
}
}
int main()
{
    int n, i, j;
    int c;
    scanf("%d",&n);
    input(n);
    printf("enter your choice:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("printing as per prod_id in ascending order");
        sort1(n);
        for(i=0;i<n;i++)
        {
            printf("%s",arr[i].prod_name);
            printf("%s",arr[i].prod_id);
            printf("%s",arr[i].prod_price);
            printf("%d",arr[i].prod_expdate);
            printf("%d",arr[i].prod_rackno);
        }
        break;
        case 2:
        printf("printing as per prod_rackno in descending");
        sort2(n);
        for(i=0;i<n;i++)
        {
            printf("%s",arr[i].prod_name);
            printf("%s",arr[i].prod_id);
            printf("%s",arr[i].prod_price);
            printf("%d",arr[i].prod_expdate);
            printf("%d",arr[i].prod_rackno);
        }
        break;
        default:
        printf("invalid choice");
    }




}