#include <stdio.h>
// CPU-->REGISTER-->CACHE-->RAM-->SECONDARY MEMORY
// 
int fun(int x[])//base addressed is been received 
{
    x[0]=11;
    printf("%d %d %d\n",x[0],x[1],x[2]);
}
int main()
{
    int a[100];
    a[0]=67;
    a[1]=68;
    a[2]=69;
    printf("%d %d %d\n",a[0],a[1],a[2]);//before calling the function 
    fun(a);
    printf("%d %d %d",a[0],a[1],a[2]);//after calling 
}