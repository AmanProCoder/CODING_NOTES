#include<stdio.h>
#include<string.h>
//struct student sarah;

//before compilation of int main(), macros and global and static variables gets declared 

//char - 1byte
//int 4 byte 

//dataTypeSize * NoOfBoxes 

// -> operator used to access members of a structure using its pointer

struct student
{
    char name[20];
    int age;
};

struct student display(struct student temp)
{
    //printf("\nstudents details are:%s %d",temp.name,temp.age);
    strcpy(temp.name,"aman");
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
    printf("\n%s",naga2.name);//aman
    printf("\n%d",naga2.age);//56
    
}












