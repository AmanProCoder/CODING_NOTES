#include<iostream>
#include<string>
using namespace std;
// class book
// {
//     int pages;
//     char author[20];
// void display()
// {

// }
// void sortdata()
// {

// }
// };

// void main()
// {   
//     //C++= c with classes
//     //C-procedure-oriented programming language
//     //procedure-function/method/procedure/task...
//     //object- contains data +functions together as a single unit
//     //collection of objects

//     //objects - a real world entity

//     book b1,b2,b3; //objects

// }



class book
{
    private:
    string author;
    int pages;
    float price;

    public:
    /*
    void readdata()
    {
       cout<<"\n enter the author pages price:";
       cin>>author>>pages>>price;
    }*/
    //constructor- function used for initialisation of object 
    //its name is same as class name, no return data type, it should be under the public
    //it is automatically executed whenever an object created for that class
    //constructor overloading 
    book() //default constructor 
    {
        author="venkat";
        pages=10;
        price=1;
    }
    book(string ath,int pg,float pr) //parameterized constructor 
    {
        author=ath;
        pages=pg;
        price=pr;
    }
    void displaydata()
    {
        cout<<"\nthe book detials are:";
        cout<<author<<"\t"<<pages<<"\t"<<price;
    }

};

//in structure, by default the  memeber is public, anyone, anywhere can access in the program
//in class, 
int main()
{
    // book java; // book is called as class, java is called as variable/object / instance of a class
    // java.readdata();
    // java.displaydata();



    book cpp("raja",100,200); //these arguements are recieved by the constructor
    cpp.displaydata();
  
    book python;
    python.displaydata();

    return 0;
}
