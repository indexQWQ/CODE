#include <iostream>
using namespace std;
// 变量方便我们管理内存

// 常量记录不可更改的数据
// #define宏常量 通常在文件上定义
// const修饰的变量 通常在变量定义前加关键字const
// 1.#define
#define DAY 7
int main()
{
    //DAY=14; err
    // 2.const
    const int mouth=12;
    cout<<"一周有多少天："<<DAY<<endl;
    cout<<"一年有多少月："<<mouth<<endl;
    return 0;
}