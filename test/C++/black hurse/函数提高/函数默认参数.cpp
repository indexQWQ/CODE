#include <iostream>
using namespace std;

int add(int a=1,int b=1,int c=11)//参数的默认值
{
    return a+b+c;
}
int add1(int a=10,int b=10);
//注意事项
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认参数
//2.如果函数的声明有默认参数，那么函数实现就不能有默认参数,两者只能有一个有默认参数
int main()
{
    cout<<add(10,10)<<endl;
    cout<<add1()<<endl;
    return 0;
}
int add1(int a,int b)
{
    return a+b;
}