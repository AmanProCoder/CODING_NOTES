#include<stdio.h>
#include<string.h>
struct salary
{
    float basic,da,hra;
};
struct dateofjoin
{
    int d,m,y;
};
struct employee
{
    int code;
    char name[100];
    struct salary s;
    struct dateofjoin j;
}e[100];
void read(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&e[i].code);
        scanf("%s",e[i].name);
        scanf("%f",&e[i].s.basic);
        scanf("%f",&e[i].s.da);
        scanf("%f",&e[i].s.hra);
        scanf("%d",&e[i].j.d);
        scanf("%d",&e[i].j.m);
        scanf("%d",&e[i].j.y);
    }
}
void display(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",e[i].code);
        printf("%s ",e[i].name);
        printf("%f ",e[i].s.basic);
        printf("%f ",e[i].s.da);
        printf("%f ",e[i].s.hra);
        printf("%d ",e[i].j.d);
        printf("%d ",e[i].j.m);
        printf("%d ",e[i].j.y);
        printf("\n");
    }
}
void sal(int n)
{
    int i,j=0,cur,x=0;
    float max,min;
    for(i=0;i<n;i++)
    {
        max=e[j].s.basic+e[j].s.da+e[j].s.hra;   
        min=e[x].s.basic+e[x].s.da+e[x].s.hra;
        cur=e[i].s.basic+e[i].s.da+e[i].s.hra;
        if(max<cur)
        j=i;
        if(min>cur)
        x=i;
    }
    printf("The max salary is:%f",(e[j].s.basic)+(e[j].s.da)+(e[j].s.hra));
    printf("\nThe min salary is:%f",(e[x].s.basic)+(e[x].s.da)+(e[x].s.hra));
}
void date(int n)
{
    int i,m=2010*10000+6*100+6,cur,j=0;
    for(i=0;i<n;i++)
    {
        cur=e[i].j.y*10000+e[i].j.m*100+e[i].j.d;
        if(cur>m)
        j=j+1;
    }
    printf("\nThe number of employee joined after the 06.06.2010 is:%d",j);
}
void search(int n,char y[])
{
    int i,j=0;
    for(i=0;i<n;i++)
    {
        if(!strcmp(e[i].name,y))
        j=j+1;
    }
    printf("\n");
    if(j>0)
    printf("The employee found");
    else
    printf("The employee not found");
}
void main()
{
    int n;
    char y[100];
    scanf("%d",&n);
    scanf("%s",y);
    read(n);
    display(n);
    sal(n);
    date(n);
    search(n,y);
}