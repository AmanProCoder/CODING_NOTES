#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    node *left,*right;
    int data;
    node():data(),left(nullptr),right(nullptr){};
}*head=nullptr;

void insert()
{
    int x;
    cout<<"Enter the value you want to enter the LL:";
    cin>>x;
    if(head==nullptr)
    {
        node *temp=new node();
        head=temp;
        temp->data=x;
    }
    else
    {
        node *temp=new node(); 
        node *temp2=new node(); //new node
        temp=head;
        while(temp->right!=nullptr)
        {
            temp=temp->right;
        }
        temp2->data=x;
        temp->right=temp2;
        temp2->left=temp;
    }
}
void del()
{
    if(head==nullptr)
    {
        cout<<"LL IS EMPTY"<<endl;
    }
    else if(head->right==nullptr)
    {
        cout<<"Deleting the value: "<<head->data<<endl;
        head=nullptr;
    }
    else
    {
        node *temp=new node(); 
        node *temp2=new node(); 
        temp=head;
        while(temp->right!=nullptr)
        {
            temp2=temp;
            temp=temp->right;
        }   
        temp2->right=nullptr;
        cout<<"Deleting the value: "<<temp->data<<endl;
        
    }
}

void display()
{
    if(head==nullptr)
    {
        cout<<"LL is EMPTY"<<endl;
    }
    else
    {
        node *temp=new node();
        temp=head;
        cout<<"Printing the data:";
        while(temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->right;
        }
    }
    cout<<endl;
}

int main()
{
   do
   {
    int x;
    cout<<"\n1 for Insert\n2 for Delete\n3 for Display\n4 for Exit\nEnter your choice: ";
    cin>>x;
    switch (x)
    {
    case 1:
        insert();
        break;
    
    case 2:
        del();
        break;
    
    case 3:
        display();
        break;
    
    case 4:
        exit(0);
        break;
    
    
    }
   } while (1);
   

}