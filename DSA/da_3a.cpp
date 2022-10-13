#include<iostream>
#include<stdlib.h>
using namespace std;

//STACK USING LINKED LIST

struct node
{
    int data;
    node *next;
}*head=nullptr;

void push()
{
    node *newnode=(node*)malloc(sizeof(node*));
    cout<<"Enter the element you want to enter: ";
    cin>>newnode->data;
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
    }
    else
    {
        newnode->next=head;
        head=newnode;
    }
}
void pop()
{
    if(head==NULL)
        cout<<"Stack is empty";
    else
    {
        node *temp,*temp1;
        temp=head;
        temp1=temp->next;
        head=temp1;
        cout<<"DELETED VALUE IS: "<<temp->data;
        free(temp);
    }
}
void display()
{
    if(head==NULL)
        cout<<"Stack is empty";
    else
    {
        node *temp;
        temp=head;
        cout<<"YOUR STACK CONTAINS: ";
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
        cout<<"1 For Push\n";
        cout<<"2 For Pop\n";
        cout<<"3 For Display\n";
        cout<<"4 For Exit\n";
        cout<<"Enter your choice: ";
        cin>>c;
        switch(c)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
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