#include <iostream>
#include <string>
using namespace std;

// string& insert(int pos, const char* s),//插入字符串
// string& insert(int pos, const string& stn),//插入字符串
// string& insert(int pos, int n, char c);//在指定位置插入n个字符c
// string& erase(int pos, int n= npos);//删除从Pos开始的n个字符

int main()
{
    string str1="iexee";
    string str2="nd";
    //插入
    str1.insert(1,str2);
    cout<<str1<<endl;
    //删除
    str1.erase(5,2);
    cout<<str1<<endl;
    return 0;
}