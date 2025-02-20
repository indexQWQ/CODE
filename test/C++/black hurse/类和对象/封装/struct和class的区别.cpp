#include <iostream>
using namespace std;

//区别就在于默认的访问权限不同
//struct默认权限为公共
//class 默认权限为私有
class C1
{
    int m_a;
};
struct C2
{
    int s_a;
};
int main()
{
    C1 c1;
    //c1.m_a=100;//err
    C2 c2;
    c2.s_a=100;
    return 0;
}