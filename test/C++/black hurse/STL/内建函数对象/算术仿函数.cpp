#include<iostream>
#include<vector>
#include<functional>
using namespace std;

//功能描述
//实现四则运算
//其中negate是一元运算，其它都是二元运算

//仿函数原型
//template<class T> T plus<T>
//template<class T> T minus<T>
//template<class T> T multiplise<T>
//template<class T> T divides<T>
//template<class T> T modulus<T>//取模
//template<class T> T negate<T>//取反

int main()
{
    negate<int> n;
    cout<<n(50)<<endl;

    plus<int> p;
    cout<<p(12,3)<<endl;

    minus<int> m;
    cout<<m(12,4);
    return 0;
}