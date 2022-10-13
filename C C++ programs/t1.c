#include<stdio.h>
#include<string.h>

//function- it is a piece of code that can be used again and again 

//pre defined function- its defn is already in a header file like if(), sizeof(),strlen(),strcpy()

//no returntype and no arguements



void sum() //no return type and no argrements //writing defn of a function //user defined function 
{
    printf("\nnow you are inside the sum function\n");
    int n1,n2;
    printf("enter the 2 nos:");
    scanf("%d %d",&n1,&n2);
    printf("sum=%d",n1+n2);
    printf("\ngoing outside the sum function");
}

int main()
{
    printf("calling the sum function\n");
    sum(); // calling the function 
    sum();
    sum();
    printf("\nsum function got executed");
    return 0;
}

// int main()
// {
//     int n1,n2;
//     scanf("%d %d",&n1,&n2);
//     printf("sum=%d",n1+n2);
//     scanf("%d %d",&n1,&n2);
//     printf("sum=%d",n1+n2);
//     scanf("%d %d",&n1,&n2);
//     printf("sum=%d",n1+n2);
//     scanf("%d %d",&n1,&n2);
//     printf("sum=%d",n1+n2);
//     scanf("%d %d",&n1,&n2);
//     printf("sum=%d",n1+n2);
// }













































































































// //char array is nothing but a string 
// //string is a collection of characters 
// void main()
// {
//     // char name[30];
//     // //printf("using scanf:");
//     // //scanf("%s",name); // when we are inserting a string then we dont write "&"
//     // // aman123\n 
//     // //printf("using printf");
//     // //printf("\n%s",name);
//     // printf("\nusing gets:");
//     // gets(name); // this is used to input string
//     // printf("using puts:");
//     // puts(name); //this is used to print the string
//     // puts(name);
//     // printf("\nusing printf\n");
//     // printf("%s",name);
//     // printf("%s",name);

//     char ch[100]="AMANlovessarah"; // yaha pr apne aap hi last m \0 lag jata h
//     // ch="amanlovessarah";//this is invalid, we cant assign value like this to a string
//     char ch1[100]={'a','b','h','u','\0'};
    
//     // printf("%d",strlen(ch));
//     printf("%s %s",ch,ch1);
//     strcmp(ch1,ch);// ch1=Aman ch=aman
//     printf("\n%s %s",ch,ch1);

// }



