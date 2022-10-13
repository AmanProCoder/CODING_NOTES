#include<iostream>
#include<vector>
using namespace std;
int h;
int factorial(int n)
{
    int i,f=1;
    for(i=1; i<=n; i++)
        f = f* i;
    return f; 
}
void fnf(int i)
{
    int fn=0;
    int m=i;
    int y;
    while(m>1)
    {
            y=m%10;
            m=m/10;
            fn=fn+factorial(y);
    }
    cout<<"fn is"<<fn<<endl;  
    h=fn;
}
void sf()
    {
        int sfn=0;
        int m=h,y;
        while(m>1)
        {
            y=m%10;
            m=m/10;
            sfn=sfn+y;
        }
        cout<<"sfn is:"<<sfn;
    }
int main()
{
    fnf(342);
    sf();
}