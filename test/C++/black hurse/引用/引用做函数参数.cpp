#include <iostream>
#include <string>
using namespace std;
//引用做函数参数可以简化指针修改实参
//面向对象
void myswap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=10,b=100;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    myswap(a,b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    return 0;
}