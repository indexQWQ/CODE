#include <iostream>
#include <string>
using namespace std;

//引用做函数返回值的注意事项
//1.不要返回局部变量的引用
int& test1()
{
    int a=10;
    return a;
}
//2.函数的调用可以作为左值
int& test2()
{
    static int a=10;
    return a;
}
int main()
{
    // int &ret=test1();
    // cout<<ret<<endl;
    // cout<<ret<<endl;
    int &ret1=test2();
    cout<<ret1<<endl;
    cout<<ret1<<endl;
    test2()=1000;
    cout<<ret1<<endl;
    cout<<ret1<<endl;
    return 0;
}