#include<stdio.h>
// structure is a collection of variables of different data types
//structure can contain variables but it cant contain any function definition
struct student
{
    char name[100];
    float mark;
    int a[5];

}obj1={"aman srivatava",100.99,{335,456,982,7668,77577}}; //this is global variable of struct student 

int main()
{
    struct student obj[5];//object is object of structure student// obj is of datatype "struct student"
    //datatype      variable(local)
    int a=5; //declare initialise 
    int b[5];
    struct student obj2={"sarah",55,{1,2}};
    struct student *sptr=&obj2;
    printf("value is %s %f",sptr->name,sptr->mark);
    sptr=&obj1;
    printf("\nvalue is %s %f",sptr->name,sptr->mark);
    
    
    


    
    

    return 0;




}