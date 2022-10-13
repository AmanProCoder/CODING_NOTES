#include<iostream>
#include<map>
#include<string>
using namespace std;
//map is an associative array
int main()
{
    map<string, int> markmap;
    markmap["harry"]=98;
    markmap["jack"]=59;
    markmap["rohan"]=2;
    markmap.insert({{"Kozume"s, 169}, {"Kuroo", 187}});
    map<string,int>::iterator iter;
    for(iter=markmap.begin();iter!=markmap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
}