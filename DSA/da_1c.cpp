#include<iostream>
using namespace std;
int top=-1;
char exps[100];
char s[100];
void push(char c)
{
    if (top==sizeof(s))
    cout<<"21BCE0777 stack is full";
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
        cout<<"21BCE0777 the stack is empty";
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

    cout<<"21BCE0777 enter the expression:";
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