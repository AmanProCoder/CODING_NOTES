#include <iostream>
#include<vector>
using namespace std;
int main() 
{
    short int t;
    cin>>t;
    vector<char> ans;
    for(short int i=0;i<t;i++)
    {
        short int n;
        cin>>n;
        vector<short int> v;
        for(short int j=0;j<n;j++)
        {
            short int y;
            cin>>y;
            v.push_back(y);
        }
        short int j=0;
        char g='y';
            while(v[j]!=0||v[j+1]!=0)
            {
                v[j]--;
                v[j+1]--;
                // if(v[j]>0&&v[j+1]==0)
                // {
                //     g='n';
                //     break;
                // }
                j++;
                if(j>n)
                break;
            }
        for(j=0;j<n;j++)
        {
            if(v[j]!=0)
            {g='n';
            break;
            }
        }
        ans.push_back(g);
    }
    for(short int i=0;i<t;i++)
    {
        if(ans[i]=='y')
        cout<<"NO";
        else
        cout<<"YES";
    }
	return 0;
}
