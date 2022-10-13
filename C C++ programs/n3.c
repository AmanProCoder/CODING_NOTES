#include<stdio.h>
#include<string.h>
struct dateofbirth
{
    int d,m,y;
};
struct student
{
    char regno[100];
    int yos;
    float cgpa;
    struct dateofbirth d;
}s[100];
void read(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i].regno);
        scanf("%d",&s[i].d.d);
        scanf("%d",&s[i].d.m);
        scanf("%d",&s[i].d.y);
        scanf("%d",&s[i].yos);
        scanf("%f",&s[i].cgpa);
    }
}

void display(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s ",s[i].regno);
        printf("%d-",s[i].d.d);
        printf("%d-",s[i].d.m);
        printf("%d ",s[i].d.y);
        printf("%d ",s[i].yos);
        printf("%f ",s[i].cgpa);
        printf("\n");
    }
}

void nos(int n)
{
    int i,j=0;
    for(i=0;i<n;i++)
    {
        if(s[i].cgpa>5)
        j=j+1;
    }
    printf("The number of student with cgpa greater than 5.0 is:%d",j);
}

void date(int n)
{
    int i,cur,m=19830505,j=0;
    for(i=0;i<n;i++)
    {
        cur=s[i].d.y*10000+s[i].d.m*100+s[i].d.d;
        if(cur>m)
        j=j+1;
    }
    printf("\nThe number of students born after 05.05.1983 is:%d",j);
}
void sort(int n)
{
    int i;
    char str[100][100];
    for(i=0;i<n;i++)
    {
        strcpy(str[i],s[i].regno);
    }
    for(i=0;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                char temp[100];
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\nThe sorted order of students based on Regno are:");
    for(i=0;i<=n;i++)
    printf("%s ",str[i]);
}
void main()
{
    int n;
    scanf("%d",&n);
    read(n);
    display(n);
    nos(n);
    date(n);
    sort(n);
}