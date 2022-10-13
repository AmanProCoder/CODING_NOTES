#include<iostream>

using namespace std;
struct node
{
    node *next;
    int data;
}*head=NULL;

void ins_f(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node*));
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
    newnode->data=x;
}
void ins_l(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node*));
    
    
    if(head==NULL)
    {
        ins_f(x);
    }
    else
    {
        struct node *temp;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
        newnode->data=x;
    }
   
}
void ins_p(int x)
{
    node *newnode=(struct node*)malloc(sizeof(struct node*));
    node *temp;
    int p;
    cout<<"21BCE0777 Enter the position you want to enter:";
    cin>>p;
    if(p==1)
    ins_f(x);
    else if(head==NULL)
    cout<<"21BCE0777 The linked list is empty";
    else
    {
        temp=head;
        for(int i=0;i<p-2;i++)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        newnode->data=x;
    }

}
void del_f()
{
    if(head==NULL)
    {
        cout<<"21BCE0777 The linked list is empty";
    }
    else
    {
        node *temp;
        temp=head;
        head=temp->next;
        cout<<"21BCE0777 The first element is being deleted:"<<temp->data;
        free(temp);
    }
}
void del_l()
{
    if(head==NULL)
    {
        cout<<"21BCE0777 The linked list is empty";
    }
    else
    {
        node *temp;
        temp=head;
        node *t;
        t=head;
        while(temp->next!=NULL)
        {
            t=temp;
            temp=temp->next;
        }
        t->next=NULL;
        cout<<"21BCE0777 The element deleted is:"<<temp->data;
        free(temp);
    }

}
void del_p()
{
    if(head==NULL)
    {
        cout<<"21BCE0777 The linked list is empty";
    }
    cout<<"21BCE0777 Enter the position you want to delete:";
    int x;
    cin>>x;
    if(x==1)
    {
        del_f();
    }
    else
    {
        node *temp=head;
        for(int i=0;i<x-2;i++)
        {
            temp=temp->next;
        }
        node *t=temp->next;
        temp->next=t->next;
        cout<<"21BCE0777 Deleted value is:"<<t->data;
        free(t);
    }

}
void display()
{
    if(head==NULL)
    {
        cout<<"21BCE0777 The linked list is empty";
    }
    else
    {
        node *temp;
        temp=head;
        cout<<"21BCE0777 Your Linked List is:";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

}
void search(int x)
{
    int fl=0;
    if(head==NULL)
    {
        cout<<"21BCE0777 The linked list is empty";
    }
    else
    {
        node *temp=head;
        while(temp!=NULL)
        {
            if(temp->data==x)
            {
                fl++;
            }
            temp=temp->next;
        }
        if(fl)
        {
            cout<<"21BCE0777 Element was found "<<fl<<" times in the Linked list";
        }
        else
        {
            cout<<"21BCE0777 Element was not present";
        }
        
    }
}
int main()
{
    do
    {
        int y;
        cout<<"\n1. Insert first"<<endl;
        cout<<"2. Insert last"<<endl;
        cout<<"3. Insert at Position"<<endl;
        cout<<"4. Delete at first"<<endl;
        cout<<"5. Delete at last"<<endl;
        cout<<"6. Delete at position"<<endl;
        cout<<"7. Display"<<endl;
        cout<<"8. Search an element"<<endl;
        cout<<"9. Exit"<<endl;
        cout<<"Enter your choice:";
        int x;
        cin>>x;
        switch(x)
        {
            case 1:
            cout<<"21BCE0777 Enter the element you want to enter:";
            cin>>y;
            ins_f(y);
            break;
            case 2:
            cout<<"21BCE0777 Enter the element you want to enter:";
            cin>>y;
            ins_l(y);
            break;
            case 3:
            cout<<"21BCE0777 Enter the element you want to enter:";
            cin>>y;
            ins_p(y);
            break;
            case 4:
            del_f();
            break;
            case 5:
            del_l();
            break;
            case 6:
            del_p();
            break;
            case 7:
            display();
            break;
            case 8:
            cout<<"21BCE0777 Enter the element you want to search:";
            cin>>y;
            search(y);
            break;
            case 9:
            exit(0);
            break;
            
        }
    } while (1);
    

}