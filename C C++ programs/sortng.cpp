#include<iostream>
using namespace std;int main()
{
    int n;
    cout<<"enter the no:";
    cin>>n;
    int a[n];
    int j,i,t;
    cout<<"the elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // for(i=0;i<n-1;i++)
    // {
    //     for(j=i+1;j<n;j++)
    //     {
    //         if(a[i]<a[j])
    //         {
    //             t=a[j];
    //             a[j]=a[i];
    //             a[i]=t;
    //         }
    //     }
    // }
    cout<<endl;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            
            }
        }
        
    }
    for(i=0;i<n;i++)
    {
        cout<<endl<<a[i];
    }
    return 0;
}