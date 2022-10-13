//STL

#include<stdio.h>
#include<string.h>
void main()
{
    //ARRAY AND STRINGS IN C
    //array-single variable we can hold more than one value-collection of values
    int n=7,j=0;
    float mark[n],temp,s=0; 
    int a[2][3]={{1,2,3},{4,5,6}}; 

    for(int i=0;i<n;i++)
    {
        scanf("%f",&mark[i]);
        s=s+mark[i];
    }
    s=s/n;
    for(int i=0;i<n;i++)
        if(mark[i]<=5)
            j=j+1;
    temp=mark[0];
    float min=mark[0];
    for(int i=0;i<n;i++)
    {
        if(temp>mark[i])
        temp=mark[i];
        if(min<mark[i])
        min=mark[i];
    }
    printf("\navg=%f\nleast=%f\nlargest=%f",s,temp,min);

    // char data-string=a collection/grp of characters 
    char name[10]={'a','b','c','\0'};
    char name2[10];
    scanf("%c",&name2[0]);
    printf("%c",name2[0]);
    char name1[45]="abc";
    char name3[45];
    scanf("%s",name3);
    printf("%s",name3);
    scanf("%[^\n]s",name2); // this line will take the input till tha new line character is being entered

    //string.h -- library

    //lot of library fn

    printf("the length using library function is:%d",strlen(name3)); // tells the length of string
    if(strcmp(name1,name2))//0-equal, nonzero- not equal
    printf("not equal");
    else
    printf("equal");

}