#include <iostream>
#include <string>
using namespace std;

//string substr(int pos=0,int =npos);//返回由pos开始的n个字符串

int main()
{
    string str="abcdef";
    string substr=str.substr(1,3);
    cout<<str<<endl;
    cout<<substr<<endl;
    return 0;
}