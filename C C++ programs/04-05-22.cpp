#include<iostream>
using namespace std;
class account
{
    public:
    int no;
    string name;
    string toa;
    float balance;

    void getdata(int n,string na,float bal,string to)
    {
        no=n;
        name=na;
        balance=bal;
        toa=to;
    }
    void deposit(float x)
    {
        balance+=x;
        cout<<endl<<"deposit success ";
    }
    void getbalance()
    {
        cout<<endl<<"the balance is "<<balance;
    }
    
};

class SA:public account
{
    public:
    void interest()
    {
        cout<<"interest calculated";
    }
    void withdraw(float x)
    {
        balance-=x;
        cout<<"withdraw success";
    }
};
class CA:public account
{
    public:
    float minbalance;
    void checkbook()
    {
        cout<<"checkout facility";
    }
    void withdraw(float x)
    {
        balance-=x;
        if(balance<minbalance)
        {
            cout<<"minimum balance crossed";
        }
        cout<<"withdraw success";
    }

};

int main()
{
    SA s;
    s.getdata(1111,"naga",1000,"saving");
    s.getbalance();
    s.deposit(1500);
    s.getbalance();
    s.withdraw(750);
    s.getbalance();

    CA c;
    
    return 0;
}