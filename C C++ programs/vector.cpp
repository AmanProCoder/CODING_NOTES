// refernce       https://m.cplusplus.com/reference/vector/vector/ 

#include<iostream>
#include<vector>
using namespace std;
template<typename T>
void display(vector<T> &v)
{
    for(int i=0;i<v.size();i++) // vector_name.size()   tells the size of the vector
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    
}
int main()
{
    vector<int> vec1;//zero length vector
    display(vec1);
    cout<<endl; 
    vector<char> vec2(4);
    display(vec2);
    cout<<endl;
    vector<char> vec3(vec2);
    display(vec3);
    cout<<endl;
    vector<char> vec4(6,65);// 6 copies of 25 is been created in the vec4
    display(vec4);
    cout<<endl;
    int n,m;
    cout<<"enter the size of the vector you want to enter:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter an element to add to this vector:";
        cin>>m;
        vec1.push_back(m); // adds the element to the end of the vector 
    }
    //vec1.pop_back(); // pops the last element of the vector or we can say that it delele or removes the last element 
    display(vec1);
    vector<int>::iterator iter=vec1.begin(); // this creates an iterator which is pointing to the beginning or 0th index of vector
    //vec1.insert(iter +1,500,566);// vector_name.insert(iterator,no_of_copies,element to be entered);      this inserts the certain amount of copy of an element in the vector
    //display(vec1);
    return 0;
}