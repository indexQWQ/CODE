#include <iostream>
#include <cinttypes>
using namespace std;

//全局变量
int g_a=10;
int g_b=10;

//const修饰的全局变量
int c_g_a=10;
int c_g_b=10;

int main()
{
    //局部变量
    int a=10;
    int b=10;
    cout<<"a:" << (uintptr_t)&a <<endl;
    cout<<"b:" << (uintptr_t)&b <<endl;
    cout<<"g_a:" << (uintptr_t)&g_a <<endl;
    cout<<"g_b:" << (uintptr_t)&g_b <<endl;

    //静态变量
    static int s_a=10;
    static int s_b=10;
    cout<<"s_a:" << (uintptr_t)&s_a <<endl;
    cout<<"s_b:" << (uintptr_t)&s_b <<endl;

    //常量
    //字符串常量
    cout<<"字符串常量:"<<(uintptr_t)&"ssdf"<<endl;

    //const修饰的全局变量
    cout<<"c_g_a:" << (uintptr_t)&c_g_a <<endl;
    cout<<"c_g_b:" << (uintptr_t)&c_g_b <<endl;

    //const修饰的局部变量
    const int c_a=10;
    const int c_b=10;
    cout<<"c_a:" << (uintptr_t)&c_a <<endl;
    cout<<"c_b:" << (uintptr_t)&c_b <<endl;
    return 0;
}
