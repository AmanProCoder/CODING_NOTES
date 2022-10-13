#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int top=-1;
void push(int arr[])
{
	int x;
	cout<<"\n21BCE0777 Enter the element to be pushed:";
	cin>>x;
	top++;
	arr[top]=x;
	cout<<"\n21BCE0777 The pushed element is: "<<arr[top];
}
void pop(int arr[])
{
	if(top==-1)
	cout<<"\n21BCE0777 Stack is empty";
	else
	{
		int x=arr[top];
		top--;
		cout<<"\n21BCE0777 The poped element is "<<x;
	}
	
}
void display(int arr[])
{
	if(top==-1)
	cout<<"\n21BCE0777 Stack is empty";
	else
	{
		cout<<"\n21BCE0777 Displaying the Stack: ";
		for(int i=top;i>-1;i--)
		{
			cout<<arr[i]<<" ";
		}	
	}
	
}
void viewTop(int arr[])
{
	if(top==-1)
	cout<<"\n21BCE0777 Stack is empty";
	else
	{
		cout<<"\n21BCE0777 The top of the element is "<<arr[top];
	}
	
}
int main()
{
	int n,ch;
	cout<<"21BCE0777 Enter the maximum size of Stack it can be: ";
	cin>>n;
	int arr[n];
	do
	{
		cout<<"\n\n1 for push\n2 for pop\n3 for display whole stack\n4 to display the top element\n5 to exit\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
		case 1:
			push(arr);
			break;
		case 2:
			pop(arr);
			break;
		case 3:
			display(arr);
			break;
		case 4:
			viewTop(arr);
			break;
		case 5:
			exit(0);
		default:
			cout<<"\n21BCE0777 Invalid choice";
		}
	}while(1);
	
}
