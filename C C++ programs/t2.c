#include<stdio.h>
int main()
{
    
    // Arrays using pointers
    
    // Single dimensional array
    
    int a[10];
    
    int i, j;
    
    // Read values
    printf("\n Enter 5 values:\n");
    for(i=0;i<5;i++)
    {
    //    scanf("%d", a[i]); 
    
        scanf("%d", a+i); // a or a+0 = &a[0], a+1 = &a[1] , a+2 = &a[2] ... a+i = &a[i]
        
    }
    
    //Print values
    
    for(i=0;i<5;i++)
    {
    //    printf("%d", a[i]); 
    
        printf("%d ", *(a+i)); // *a or *(a+0) = a[0], ... *(a+i) = a[i]
        
    }
    
    // two dimensional
    
    int b[10][10];
    
    // 10 20 30
    // 40 50 60
    // 70 80 90
    
    // b = pointer to first row
    // b+i = pointer to ith row
    // *(b+i) = pointer to the first element in the ith row
    // *(b+i)+j = pointer to jth element in the ith row
    // *(*(b+i)+j) = value available at index[i,j]
    
    // Read values
    printf("\n Enter 6 values:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            // scanf("%d", &a[i][j])
            scanf("%d", *(b+i)+j);
        }
    }
    
    // print values
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            // printf("%d", a[i][j])
            printf("%d ",  *(*(b+i)+j));
        }
        printf("\n");
    }
    
    //     // *(*(b+i)+j) = value available at index[i,j]
    
    // Three dimensional =     *(*(b+i)+j)+k = pointer to i,j,k element
    //  *( *(*(b+i)+j)+k ) = value at a[i][j][k]
    
    return 0;
}