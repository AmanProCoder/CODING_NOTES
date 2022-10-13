#include<iostream>
using namespace std;
int front=-1;
int rear=-1;
int size=100;

void insert(int arr[])
{
    if(rear==size-1)
    cout<<"21BCE0777 Queue is full";
    else
    {
        if(front==-1)
            front=0;
        rear++;
        cout<<"21BCE0777 Enter the element you want to enter in the queue:";
        int x;
        cin>>arr[rear];
    }
}

void deletes(int arr[])
{
    if(front==-1||front>rear)
    cout<<"21BCE0777 Queue is empty";
    else
    {
        int temp;
        temp=arr[front];
        front++;
        cout<<"21BCE0777 Deleted value is "<<temp;
    }
    cout<<endl;

}

void display(int arr[])
{
    if(front==-1||front>rear)
    cout<<"21BCE0777 Queue is empty";
    else
    {
        int *temp;
        temp=(arr);
        cout<<"21BCE0777 Displaying the queue:";
        for(int i=front;(i-1)!=rear;i++)
        {
            cout<<*(temp+i)<<" ";       
        }
    }
    cout<<endl;
}

int main()
{
    int arr[size];
    do 
    {
        int x;
        cout<<"21BCE0777 1. Enter the element:"<<endl;
        cout<<"21BCE0777 2. Delete a element"<<endl;
        cout<<"21BCE0777 3. Display"<<endl;
        cout<<"21BCE0777 4. Exit"<<endl;
        cout<<"21BCE0777 Enter your choice:";
        cin>>x;
        switch(x)
        {
            case 1:
            insert(arr);
            break;
            case 2:
            deletes(arr);
            break;
            case 3:
            display(arr);
            break;
            case 4:
            exit(0);
            break;
        }
        cout<<endl;
    }while(1);


}