#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    int i,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,i13;
    char passwd[2];
    vector<char> var;

    for(i=0;i<256;i++)
    {
        char c=(char)i;
        passwd[0]=c;
        passwd[1]='\0';
        printf("%s\n",passwd);
    }
    char passwd2[2];
    for(i=0;i<256;i++)
    {
        
        for(i1=0;i<256;i++)
        {
            passwd2[0]=(char)i;
            passwd2[1]=(char)i1;
            passwd2[2]='\0';
            printf("%s\n",passwd2);
            
        }   
    }

}