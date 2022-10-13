#include<iostream>
using namespace std;
int partition(int a[],int low,int high)
{
    int i=low+1;
    int j=high;
    int pivot=a[low];
    int temp;
    do
    {
        while(a[i]<=pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    } while (i<j);
    temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}
void quicksort(int a[],int low,int high)
{
    int partitionIndex;
    if(low<high)
    {
        partitionIndex=partition(a,low,high);
        quicksort(a,low,partitionIndex-1);
        quicksort(a,partitionIndex+1,high);
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
    quicksort(a,0,n-1);
    cout<<"Now the array is after the sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}