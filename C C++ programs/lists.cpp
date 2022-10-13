// https://en.cppreference.com/w/cpp/container/list
#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst)
{
    list<int> ::iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1;//list of 0 length 
    
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list<int>::iterator iter;
    iter=list1.begin();

    display(list1);
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(1); //it removes all the occurence if there are more than one of same kind
    // display(list1);


    // list1.sort();
    // display(list1);


    list<int> list2(3);//empty list of size 7, this have spaces but those spaces doesnt have any values 
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=98;
    iter++;
    *iter=72;
    iter++;
    
    display(list2);

    list1.merge(list2);
    cout<<"after merging\nlist1:";
    display(list1);
    cout<<"list2:";
    display(list2);

    list1.reverse();
    display(list1);
    return 0;
}