//function overriding 
//virtual function 
//pure virtual function 
//abstract classes  



// #include<iostream>
// using namespace std;
// class base
// {
//     public:
//     virtual void display()
//     {
//         cout<<endl<<"this is base class";
//     }
// };
// class derived:public base //class b contains 2 display functions i.e. one its own and second is derived form class a
// {
//     public:
//     void display()
//     {
//         cout<<endl<<"this is derived class";
//     }
// };
// int main()
// {
//     //compile time=function overloading and operator overlaoding 
//     //run time =function overriding and virtual function


//     // //function overriding 
//     // a a;
//     // a.display();
//     // b b;
//     // b.display();// this will print the derived class function only // the derived function overrides the base class function 
    

//     //virtual functions
//     // int a=10;
//     // int *p;// pointer variable is a variable whose value is the address of any other variable of same data type
//     // p=&a;
//     // cout<<a;
//     // cout<<*p;

//     base *ptr;//super class pointer variable 
//     base b;
//     ptr=&b;
//     ptr->display();//this is same as b.display()
//     derived d;
//     //super class object can point to super class object and subclass object but sub class pointer variable cant point to super class object
//     ptr=&d;
//     ptr->display();//prints base class display() when virtual is not written in the base class function but when virtual is written then it will print derived class function
//     //this is the way of achieving the run time polymorphism
//     //here the default    of the pointer is, it will execute the base class function 
//     //in order to execute a function based on the object which is pointed by pointer then make the base class function as virtual, this concept is called as virtual functions 

//     return 0;

// }







//PURE VIRTUAL FUNCTION

#include<iostream>
using namespace std;
class base//Abstract class - cant create an object 
{
    public:
    virtual void display()=0; //pure virtual function 
};
    
class derived:public base //class b contains 2 display functions i.e. one its own and second is derived form class a
{
    public:
    void display()
    {
        cout<<endl<<"this is derived class";
    }
};
int main()
{
    base *ptr;
    derived d;
    ptr=&d;
    ptr->display();
    return 0;
}
