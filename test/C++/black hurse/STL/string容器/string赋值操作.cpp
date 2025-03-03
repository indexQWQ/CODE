#include <iostream>
#include <string>
using namespace std;

//string& operator=(const char* s)
//string& operator=(const string &s)
//string& operator=(char c)
//string& assign(const char* s)
//string& assign(const char* s,int n)
//string& assign(const string &s)
//string& assign(int n,char c);
int main()
{
    string str1,str2,str3,str4,str5,str6,str7;
    str1="index";
    str2=str1;
    str3='i';
    str4.assign("index");
    str5.assign("index",3);
    str6.assign(str1);
    str7.assign(5,'i');
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<str4<<endl;
    cout<<str5<<endl;
    cout<<str6<<endl;
    cout<<str7<<endl;
    return 0;
}