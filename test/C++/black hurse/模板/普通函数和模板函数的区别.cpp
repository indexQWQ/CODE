#include <iostream>
using namespace std;

//普通函数可以发生自动类型转换（隐式类型转换）
//而模板函数的自动类型推导不行，显示指定类型可以

int myadd(int a,int b)
{
    return a+b;
}

template<class T>
T mmm(T a,T b)
{
    return a+b;
}
int main()
{
    int a=20;
    int b=073;
    char c='e';
    cout<<myadd(b,c)<<endl;
    cout<<mmm<int>(a,b)<<endl;
    return 0;
}