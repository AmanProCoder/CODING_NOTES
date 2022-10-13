#include<iostream>
#include<math.h>

using namespace std;
int reverse(int x) 
    {
        double rev=0;
        char c='n';
        
            if(x<0)
            {
                if(-x<=(pow(2,31)-1))
                    x=-x;
                else
                return 0;
                c='y';
            }
            while(x>0)
            {
                rev=rev*10+x%10;
                x=x/10;
            }
            if(c=='y')
                rev=-rev;
            // cout<<rev<<endl;
        if(rev>=-(pow(2,31)) && rev<=(pow(2,31)-1))
            return int(rev);
        else
            return 0;
    }
int main()
{
    // cout<<1534236469<<endl;
    if(1534236469<=pow(2,31)-1)
    printf("%lf\n",pow(2,31)-1);
    // cout<<"yes";

    cout<<reverse(1534236469);
}