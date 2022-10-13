#include<stdio.h>
typedef struct student
{
    int age;
}sem;
void main()
{
    //typedef =type definition
    typedef int vit;  // just renamed int by vit; hereafter i can use vit instead of int without loosing any functionality

    vit a;//this simply means int a;

    typedef struct student sim;
    sem raja;//sem=struct student
    sim naga; //sim = struct  student

    //enum = used-defined enumerated data type
    //you can assign what are the possible values for a variable
    int b;// b will have the range of int 
    //week ={su,mn,tu,wd,th,fr,st}
    //month={j,f,m,...d}
    enum day{mon,tue,wed,thu,fri,sat,sun};//day is the data type and its possible values are only 7
    //        0   1   2   3   4   5   6 ---- these are the dafault values
    enum week{mond=20,tues=30,wedn=40,thur=50,frid=60,satu=70,sund=80 };
    //          20      30      40      50      60      70      80 --- these are not the default values as we have assigned them
    enum week myday;//myday is the variable of data type "enum week", this means myday can have any one values among 7 values
    myday=tues;
    printf("%d",myday);// this prints 30
    if(myday==tues)
    printf("\nit is tuesday");


switch(n)
{
    case 1 ... 5: // this is to check the condition for a range 
    case :
}


    
}
/*
primitive data 
user defined data 
ranges of datatypes
all the datatypes
identifiers --> rules  
keywords 

*/