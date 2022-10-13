#include<iostream>
using namespace std;
//unary operator 
class weight 
{
private:
    int kg;
public:
    weight ()
    {
        kg=0;
    }
    weight(int x)
    {
        kg=x;
    }
    void operator ++()//pre increment 
    {
        ++kg;
    }
    void operator ++(int)//post increment 
    {
        kg++;
    }
    weight operator+(weight a)
    {
        weight d;
        d.kg=a.kg+kg;
        return d;
    }
    void printweight()
    {
        cout<<"weight in KG:"<<kg<<endl;
    }
};




int main()
{
    int x=0;
    ++x;
    weight obj;
    ++obj;//obj.operator ++();
    obj.printweight();
    obj++;
    obj.printweight();
    weight a(10),b(20),c,d(400);
    c=a+b+d; // c=a.operator+(b.operator+(d));
    c.printweight();
    return 0;
}