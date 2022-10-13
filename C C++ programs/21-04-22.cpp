#include<iostream>
using namespace std;
// class example
// {
//     int a;
//     public:
//     example(int a)
//     {
//         this->a=a; //this pointer variable- LHS "a" refers to current object data member
//     }
//     void display()
//     {
//         cout<<"\n The a value is:"<<a;

//     }
// };
// int main()
// {
//     //this pointer- pointer variable which refers current object
//     example e1(12);
//     // example *this; //yeh compiler apne aap kr deta h
//     // this=&e1;      //yeh bs sir ne explain kiya h ki kya 
//     e1.display(); 
//     return 0;

// }



class example
{
    static int a; //static
    static int b;// static
    public:
    example(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    static void display()
    {
        cout<<"\nthe values a and b is:"<<a<<"\t"<<b;

    }
};
int example::b;  //extra declaration we need for the static data members
int example::a;

inline void in_display()
{
    cout<<"this is an example for inline function";
}
int main()
{
    //static va non static data members
    //non static members- separate copy for each individual objects
    //static - only a single copy is created in the memory 
    //and all the objects share the same copy
    //if one objects modifies then affect for remaining objects also

    example e1(10,20),e2(30,40),e3(50,60);
    // e1.display(); //10 60  this is when a is non static
    // e2.display(); //30 60 
    // e3.display(); //50 60 
    


    //static member function 
    //1. it can access only other static data or other static function
    //2.it can be invoked by class name using :: directly
    //3. all objects share the same function
    example::display();

    in_display();
}