#include<iostream>
using namespace std;

void merge(int a[],int low,int mid,int high)
{
    int i=low;
    int b[high+1];
    int j=mid+1;
    int k=low;
    while(i<=mid&&j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void mergeSort(int a[],int low,int high)
{
    int mid;
    int *x;
    if(low<high)
    {
        mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
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
    mergeSort(a,0,n);
    cout<<"Now the array is after the sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
