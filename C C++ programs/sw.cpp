#include<iostream>
using namespace std;
template<typename t>
class weight
{
    private:
    t kg;
    public:
    void setdata(t x)
    {
        kg=x;   
    }
    t getdata(){
        return kg;
    }
};

int main()
{
    weight <int>obj1;
    obj1.setdata(5);
    cout<<"value is "<<obj1.getdata();
}