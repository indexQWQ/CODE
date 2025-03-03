#include <iostream>
#include <string>
using namespace std;


// int find(const string& str, int pos = 0) const;      //查找str第一次出现位置，从pos开始查找
// int find(const char* s,int pos =0)const;             //查找s第一次出现位置,从pos开始查找
// int find(const char* s, int pos, int n) const;       //从pos位置查找s的前n个字符第一次位置
// int find(const char C, int pos = 8) const;           //查找字符c第一次出现位置
// int rfind(const string& str,int pos= npos) const;    //查找str最后一次位置，从pos开始查找
// int rfind(const char* s, int pos = npos) const;      //查找s最后一次出现位置,从pos开始查找
// int rfind(const char* s, int pos, int n) const;      //从pos查找s的前n个字符最后一次位置
// int rfind(const char c, int pos = 8) const;          //查找字符c最后一次出现位置
// string& replace(int pos, int n, const string& str);  //替换从pos开始n个字符为字符串str
// string& replace(int pos, int n,const char* s):       //替换从pos开始的n个字符为字符串S

int main()
{
    //查找
    string str1="indec";
    //rfind是从右往左找  find是从左往右找
    int pos=str1.find("de");
    if(pos==-1)cout<<"no find"<<endl;
    else cout<<"find pos="<<pos<<endl;
    pos=str1.rfind("de");
    if(pos==-1)cout<<"no find"<<endl;
    else cout<<"rfind pos="<<pos<<endl;
    //替换
    string str2="infex";
    str2.replace(2,1,"d");
    cout<<str2<<endl;
    return 0;
}