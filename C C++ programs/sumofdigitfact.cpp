#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class fact
{
    int n,x;
    int fn;
    int sfn;
    int g;
    int sg;
    public:
    int factorial(int n)
    {
        int i,f=1;
        for(i=1; i<=n; i++)
            f = f* i;
        return f; 
    }
    void fnf(int i)
    {
        fn=0;
        int m=i;
        int y;
        while(m>1)
        {
            y=m%10;
            m=m/10;
            fn=fn+factorial(y);
        }
        
    }
    int sf()
    {
        sfn=0;
        int m=fn,y;
        while(m>1)
        {
            y=m%10;
            m=m/10;
            sfn=sfn+y;
        }
        return sfn;
    }
};

int main() 
{
    int n;
    cin>>n;
    vector<int> vec;
    int i;
    for(i=0;i<n;i++)
    {
        int m;
        double x;
        cin>>m>>x;
        vec.push_back(m);
    }
    for(int i=0;i<n;i++)
    {
        check(vec[i]);
    }
    return 0;
}