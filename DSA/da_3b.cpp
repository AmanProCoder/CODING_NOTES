#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next;
}*front=NULL,*rear=NULL;

void insert()
{
    node *newnode=new node;
    cout<<"Enter the value you want to be inserted: ";
    cin>>newnode->data;
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
        newnode->next=NULL;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        newnode->next=NULL;
    }
}
void del()
{
    if(front==NULL)
    cout<<"THE QUEUE IS EMPTY";
    else
    {
        node *temp;
        temp=front;
        front=front->next;
        cout<<"THE DELETED VALUE IS: "<<temp->data;
        free(temp);
    }

}
void display()
{
    if(front==NULL)
    cout<<"THE QUEUE IS EMPTY";
    else
    {
        cout<<"YOUR QUEUE IS: ";
        node *temp;
        temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}
int main()
{
    do
    {
        short int c;
        cout<<"1 For Insert\n";
        cout<<"2 For Delete\n";
        cout<<"3 For Display\n";
        cout<<"4 For Exit\n";
        cout<<"Enter your choice: ";
        cin>>c;
        switch(c)
        {
            case 1:
            insert();
            break;
            case 2:
            del();
            cout<<endl;
            break;
            case 3:
            display();
            cout<<endl;
            break;
            case 4:
            exit(0);
        }
    } while (1);
    return 0;
}