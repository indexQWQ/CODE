#include <iostream>
using namespace std;

int main()
{
    //指针也是一个数据类型
    //在32位系统下占4个字节，64位下占8个字节
    int a=10;
    int *p=&a;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(int *)<<endl;
    cout<<sizeof(double *)<<endl;
    return 0;
}