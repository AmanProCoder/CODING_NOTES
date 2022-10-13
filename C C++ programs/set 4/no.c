#include<stdio.h>
//no return with arguments
//you can pass arguments as many as you want 

void multi(int x[][100],int r,int c)//user defined func //x=10 y=20 
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        printf("%d ",x[i][j]);
        printf("\n");
    }
}
void subs(int n,int x[]) 
{
     for(int i=0;i<n;i++)
    {
        printf("%d ",x[i]+5);
    }
}

int main()
{
    int a[100][100];
    int n,m;
    printf("enter the size of array:");
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    multi(a,n,m);
    printf("\n");
    // subs(n,a);
    return 0;
}