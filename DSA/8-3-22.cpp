
// 2a queue implication using array 
// 2b singly linked list

// 3a stack using linked list
// 3b queue using linked list 
// 3c doubly linked list(optional)
/*
CAT 2

linked list all the 8 operations
linked list application
doubly linked list 

big question can be linked list all complete operations

Module-4 
binary search tree 
tree traversal- problem will come, we will have to solve it and the code is optional 
inorder 
postorder 
preorder 

Module-7
AVL Tree 
Heap tree
*/
#include<iostream>
using namespace std;
int top=-1;
char exps[100];
char s[100];

void push(char c)
{
    if (top==sizeof(s))
    cout<<"stack is full";
    else
    {
        top=top+1;
        s[top]=c;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"the stack is empty";
    }
    else
    {
        cout<<s[top];
        top=top-1;
    }

}
int prior(char t)
{
    if(t=='(')
    return 0;
    else if(t=='+'||t=='-')
    return 1;
    else if(t=='*'||t=='/')
    return 2;
    else if(t=='^')
    return 3;

}

int main()
{

    cout<<"enter the expression:";
    cin>>exps;
    
    char *t;
    t=exps;
    while(*t!='\0')
    {
        if(isalnum(*t))
        {
            cout<<*t;
        }
        else if(*t=='(')
        {
            push(*t);
        }
        else if(*t==')')
        {
            while(s[top]!='(')
                pop();
            top--;
        }
        else
        {
            while(prior(*t)<=prior(s[top]))
            {
                pop();
            }
            push(*t);
        }

        t++;
    }
    while(top!=-1)
    {
        pop();
    }
    return 0;
}