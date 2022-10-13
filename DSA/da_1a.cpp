#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"21BCE0777 Enter the size of the array:";
	cin>>n;
	int arr[n],location[n],count=0,x;
	for(int i=0;i<n;i++)
	{
		cout<<"21BCE0777 Enter the element of the array:";
		cin>>arr[i];	
	}
	cout<<"\n21BCE0777 Displaying the array: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";	
	}
	cout<<"\n\n21BCE0777 Enter the element to be searched:";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(x==arr[i])
		{
			location[count]=i;
			count++;	
		}
	}
	if(count>0)
	{
		cout<<"21BCE0777 The entered element was found "<<count<<" times";
		cout<<"\n21BCE0777 The index it was found were:";
		for(int i=0;i<count;i++)
		{
			cout<<location[i]<<" ";
		}
	}
	else
	{
		cout<<"21BCE0777 The entered element was not found";
	}
	return 0;
}

