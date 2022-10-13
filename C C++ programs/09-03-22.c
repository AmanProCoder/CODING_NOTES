#include<stdio.h>
#include<string.h>
int main(void)
{
    char name[20],school[20],college[20]="vit",dept[20]={'c','s','e','\0'},dept2[89];
    char dept3,ch;
    int i=0;
    //name="nagaraja"; -->not valid 
    printf("enter the string");
    scanf("%[^\n]s",name);    
    printf("the entered string is:%s\n",name);
    getchar(); //read a single character
    printf("enter school");
    gets(school);   // for the string get the string.. upto new line character
    printf("the entered school is:");
    puts(school);   // for the string only put the string on the scrreen
    //dept2=dept; not  valid
    
    //2 ways- use library fn and user defined fn
    strcpy(dept2,dept);
    
    //dept3= dept2 using user defined code
    while((ch=dept2[i])!='\0')
    {
        dept3[i]=ch;
        i++;
    }
    dept3[i]='\0';
    puts(dept3);
    char gender[20];
    i=0;
    printf("enter the gender:");
    while(ch=getchar() !='\n')
    {
        gender[i]=ch;
        i++;
    }
    gender[i]='\0';
    printf("the given gender is%s",gender);

    // two strings equal or not?
    //strcmp(str1,str2)=0 this means both are equal and if non zero it is not equal
    // char by char- user code
    // concatenation; fn=naga ;sn=raja
    //name=fn+sn
    //name=strcat(fn,sn)
    //user code; name=fn
    //length of a string
    // user code - \0
    //
}