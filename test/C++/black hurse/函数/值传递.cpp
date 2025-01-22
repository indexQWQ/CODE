#include <iostream>
using namespace std;
//值传递：就是函数调用的时候实参将数值传递给形参
//如果形参发生改变，并不会影响实参
void swap(int n1,int n2)
{
    cout<<"函数内交换前"<<endl;
    cout<<n1<<' '<<n2<<endl;
    n1=n1^n2;
    n2=n1^n2;
    n1=n1^n2;
    cout<<"函数内交换后"<<endl;
    cout<<n1<<' '<<n2<<endl;
}
int main()
{
    int a=10,b=20;
    swap(a,b);
    cout<<a<<' '<<b<<endl;
    return 0;
}