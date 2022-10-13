#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left,*right;
    node():data(),left(nullptr),right(nullptr){};
}*head=nullptr;


node *insert(node *root,int x)
{
    if(root==nullptr)
    {
        root=new node();
        root->data=x;
    }
    else if(x<root->data)
    {
        root->left=insert(root->left,x);
    }
    else
    {
        root->right=insert(root->right,x);
    }
    return root;
}


node* findMin(node* root)
{
    if(root->left==nullptr)
    {
        return root;
    }
    else
    {
        return findMin(root->left);
    }
}


node* findMax(node* root)
{
    if(root->right==nullptr)
    {
        return root;
    }
    else
    {
        return findMax(root->right);
    }
}


void preOrder(node* root)
{
    if(root!=nullptr)
    {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}


void postOrder(node* root)
{
    if(root!=nullptr)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}


void inOrder(node* root)
{
    if(root!=nullptr)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}


// int isBST(node* root)
// {
//     static node* prev=NULL;
//     if(root!=NULL)
//     {
//         if(isBST(root->left))
//             return 0;
//         if(prev!=NULL && root->data<=prev->data)
//             return 0;
//         prev=root;
//         return isBST(root->right);
//     }
//     else
//     {
//         return 0;
//     } 
// }


node* Search(node* root,int key)
{
    if(root==NULL)
        return NULL;
    if(root->data==key)
        return root;
    else if(root->data>key)
        return Search(root->left,key);
    else
        return Search(root->right,key);
        
}


node * del(node* root,int x)
{
    node* temp;
    if(root==nullptr)
    {
        return nullptr;
    }
    else if(x<root->data)
    {
        root->left=del(root->left,x);
    }
    else if(x>root->data)
    {
        root->right=del(root->right,x);
    }
    else if(root->left==NULL)
    {
        root=root->right;
    }
    else if(root->right==NULL)
    {
        root=root->left;
    }
    else
    {
        temp=findMin(root->right);
        root->data=temp->data;
        root->right=del(root->right,root->data);
    }
    return root;
}

int main()
{
    do
    {
        cout<<"\n1 for Insert\n";
        cout<<"2 for FindMin\n";
        cout<<"3 for FindMax\n";
        cout<<"4 for Inorder\n";
        cout<<"5 for Preorder\n";
        cout<<"6 for Postorder\n";
        cout<<"7 for Find\n";
        cout<<"8 for Delete\n";
        cout<<"9 for Exit\n";
        int x;
        cout<<"Enter your choice: ";
        cin>>x;
        int y;
        switch (x)
        {
        case 1:
            cout<<"Enter the variable you want to enter: ";
            cin>>y;
            head=insert(head,y);
            break;
        case 2:
            // struct node *temp=new node();
            // temp=findMin(head);
            cout<<"Minimum element is "<<findMin(head)->data;
            break;
        case 3:
            cout<<"Maximum element is "<<findMax(head)->data;
            break;
        case 4:
            inOrder(head);
            break;
        case 5:
            preOrder(head);
            break;
        case 6:
            postOrder(head);
            break;
        case 7:
            cout<<"Enter the element you want to search:";
            cin>>y;
            if(Search(head,y)==nullptr)
            cout<<"Element not found";
            else
            cout<<"Element is present";
            break;
        case 8:
            cout<<"Enter the element you want to delete: ";
            cin>>y;
            del(head,y);
            break;
        case 9:
            exit(0);
            break;
        }
    } while (1);
    return 0;
}


