#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
   string my_str = "Hello WORLD";

   cout << "Main string: " << my_str << endl;
   transform(my_str.begin(), my_str.end(), my_str.begin(), ::tolower);

   cout << "Converted String: " << my_str;
}