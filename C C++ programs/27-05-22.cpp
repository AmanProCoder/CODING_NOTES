#include<iostream>
using namespace std;
class media 
{
    protected:
    string author;
    public:
    virtual void getdata()=0;
    virtual void display()=0;
   
};

class book : public media
{
    int pages;
    public:
    void getdata()
    {
        author ="nagaraja";
        pages=500;
    }
    void display()
    {
        cout<<endl<<"the book detials are:"<<author<<"\t"<<pages;

    }
    
};
class tape : public media
{
    int duration;
    public:
    void getdata()
    {
        author ="raja";
        duration=100000;
    }
    void display()
    {
        cout<<endl<<"the tape detials are:"<<author<<"\t"<<duration;
      
    }
    
};
int main()
{
    //virtual functions
    //real time application of virtual functions 
    media *ptr;
    book b;
    ptr=&b;
    ptr->getdata();
    ptr->display();
    tape t;
    ptr=&t;
    ptr->getdata();
    ptr->display();
    return 0;
}