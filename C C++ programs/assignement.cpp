#include<iostream>
#include<string.h>
using namespace std;
class hostel
{
    public:
    char BlockName[100];
    int RoomNumber;
    string typeofroom;
    string typeofmess;
};
class student:public hostel
{
    
    string name;
    int phnno;
    public:
    string regno; 
    static int total_instance;
    void setstudentdetail(string r,string n,int p,char b[100],int rn,string tor,string tom)
    {
        regno=r;
        name=n;
        phnno=p;
        strcpy(BlockName,b);
        RoomNumber=rn;
        typeofroom=tor;
        typeofmess=tom;  
        total_instance+=total_instance;
    }
    void getstudentdetail()
    {
        cout<<"Enter the register no:";
        cin>>regno;
        cout<<"Enter student name:";
        cin>>name;
        cout<<"Enter phone no:";
        cin>>phnno;
        cout<<"Enter block name:";
        cin>>BlockName;
        cout<<"Enter room no:";
        cin>>RoomNumber;
        cout<<"Enter room type (AC/Non-AC):";
        cin>>typeofroom;
        cout<<"Enter mess type(Veg/Non-Veg):";
        cin>>typeofmess;  
        total_instance+=total_instance;
    }
    friend void findstudentdetail(int n);
}stu[100];
void findstudentdetial(int n)
{
    //finding different block name 
    int i,j,m=0;
    char blocklist[100][100];
    int count=0;
    string h;
    for(i=0;i<n;i++)
    {
        m=0;
        for(j=0;j<=count;j++)
        {
            if(!strcmp(stu[i].BlockName,blocklist[j]))
            {
                m++;
            }
        }
        if(m==0)
        {
            strcpy(blocklist[count],stu[i].BlockName);
            count++;
        }
    }
    for(i=0;i<=count;i++)
    {
        m=0;
        for(j=0;j<n;j++)
        {
            if(!strcmp(blocklist[i],stu[j].BlockName))
            {
                m++;
            }
        }
        for(j=0;j<n;j++)
        {
            if(!strcmp(blocklist[i],stu[j].BlockName))
            {
                cout<<stu[j].regno<<", ";
            }
        }
        cout<<m<<" belong to "<<blocklist[i]<<endl;
    }
}
int student::total_instance=0;
int main()
{
    int i=0;
    char choice[100];
    do
    {
        stu[i].getstudentdetail();
        cout<<"Do you want to enter another student details(yes or no):";
        cin>>choice;
        i++;
    }while(!strcmp(choice,"yes"));
    findstudentdetial(i);

}