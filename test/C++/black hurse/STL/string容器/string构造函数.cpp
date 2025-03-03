#include <iostream>
#include <string>
using namespace std;

//string();//创建一个空的字符串 例如：string str
//string(const char* s);//使用字符串初始化
//string(const string& str);//使用string对象初始化
//string(int n,char c);//使用n个字符初始化
int main()
{
    string str1;
    string str2("index");
    string str3(str2);
    string str4(6,'o');
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<str4<<endl;
    return 0;
}