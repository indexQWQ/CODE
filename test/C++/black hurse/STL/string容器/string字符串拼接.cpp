#include <iostream>
#include <string>
using namespace std;
//string& operator+=(const char* str)
//string& operator+=(const char c)
//string& operator+=(const string& str)
//string& append(const char* str)//把字符串链接到当前字符串结尾
//string& append(const char* str,int n)//把字符串前n个字符链接到当前字符串结尾
//string& append(const string& str)
//string& append(const string& str,int pos,int n)//把字符串从pos开始的n个字符链接到字符串结尾
int main()
{   
    string str1="index",str2="flur";
    str1+='i';
    str1+=" love";
    str1+=str2;
    str1.append(" you");
    str1.append(" index",1);
    str1.append(str2);
    str1.append(str2,0,4);
    cout<<str1<<endl;
    return 0;
}