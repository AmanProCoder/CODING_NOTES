#include<stdio.h>
//user-defined data type
//structure is a user defined data type and it can hold homogeneous and heterogeneous type of values
struct mark
{
    float m1,m2,m3;
};
struct student // new data type called as student(structure tag name="student") 
{
    char regno[10]; //10 bytes
    char name[20];  //20bytes
    int age;        //4bytes
    float cgpa;     //6 bytes

    struct mark m;
    
}naga4,naga5={"21bee0999","ramjeah",99,9.88};

void main()
{
    // module 4:structure
    //so far we used primitive data types -int , float,double,char
    //student-regno,name,age,cgpa..

    struct student naga,naga1,naga2[10];
    //printf("the size of student data type is %d",sizeof(struct student)); //prints 40 
    //printf("the size of student data type is %d",sizeof(naga2)); //prints 400 
    printf("\nEnter regno, name, age, cgpa:");
    scanf("%s",naga.regno);
    scanf("%s",naga.name);
    scanf("%d",&naga.age);
    scanf("%f",&naga.cgpa);
    
    strcpy(naga1.regno,"21bce0777");
    strcpy(naga1.name,"aman");
    naga1.age=34;
    naga1.cgpa=9;

    struct student naga3={"21bce0888","rajesh",56,3.5};
    printf("entered detials are :");
    printf("\n%s",naga.regno);
    printf("\n%s",naga.name);
    printf("\n%d",naga.age);
    printf("\n%f",naga.cgpa);

    //assignement operator works for structures also if they are of same data types

    naga4=naga1;


    

}