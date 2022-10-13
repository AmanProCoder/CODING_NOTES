#include<iostream>
using namespace std;

void insertionSort(int a[],int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

}

int main()
{
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element:");
        cin>>a[i];
    }
    insertionSort(a,n);
    cout<<"Now the array is after the sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}