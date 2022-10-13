#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int age;
};
// void display(struct student temp)
// {
//     //printf("\nstudents details are:%s %d",temp.name,temp.age);
//     strcpy(temp.name,"raja");
//     temp.age=50;
// }
// void main()
// {
//     //structures- functions and pointers
//     // structure to function is similar to primtive data types
//     //by default it is call by value
//     int a=5;
//     struct student naga={"nagaraja",34};
//     printf("before calling the function:");
//     printf("student details are:");
//     printf("\n%s",naga.name); //nagaraja
//     printf("\n%d",naga.age); //34
//     //display(a);
//     display(naga);
//     printf("\nafter calling the function:");
//     printf("student details are:");
//     printf("\n%s",naga.name);//nagaraja
//     printf("\n%d",naga.age);//34
// }




// -> operator used to access members of a structure using its pointer



// void display(struct student *ptr)
// {
//     ptr->age=50;
//     strcpy(ptr->name,"raja");
// }
// void main()
// {
//     //structures- functions and pointers
//     // structure to function is similar to primtive data types
//     //by default it is call by reference
//     int a=5;
//     struct student naga={"nagaraja",34};
//     printf("before calling the function:");
//     printf("student details are:");
//     printf("\n%s",naga.name); //nagaraja
//     printf("\n%d",naga.age); //34
//     //display(a);
//     display(&naga);
//     printf("\nafter calling the function:");
//     printf("student details are:");
//     printf("\n%s",naga.name); //raja
//     printf("\n%d",naga.age);   //50
// }



struct student display(struct student temp)
{
    //printf("\nstudents details are:%s %d",temp.name,temp.age);
    strcpy(temp.name,"naga");
    temp.age=56;
    return temp;
}
void main()
{
    //structures- functions and pointers
    // structure to function is similar to primtive data types
    //by default it is call by value(but we want to change the values when the function is called, just like call by reference)
    int a=5;
    struct student naga={"nagaraja",34};
    printf("before calling the function:");
    printf("student details are:");
    printf("\n%s",naga.name); //nagaraja
    printf("\n%d",naga.age); //34
    //display(a);
    struct student naga2=display(naga);
    printf("\nafter(using naga) calling the function:");
    printf("student details are:");
    printf("\n%s",naga.name); //nagaraja
    printf("\n%d",naga.age); //34
    printf("\nafter(using naga2) calling the function:");
    printf("student details are:");
    printf("\n%s",naga2.name);//naga
    printf("\n%d",naga2.age);//56
}