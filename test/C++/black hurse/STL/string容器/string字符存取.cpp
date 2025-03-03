#include <iostream>
#include <string>
using namespace std;

//char& operator[](int n);
//char& at(int n);
int main()
{
    string str("index");
    cout<<str<<endl;
    for(int i=0;i<(int)str.size();i++)
    {
        cout<<str[i];
        str[i]='i';
    }
    cout<<endl;
    for(int i=0;i<(int)str.size();i++)
    {
        cout<<str.at(i);
        
    }
    cout<<endl;
    return 0;
}