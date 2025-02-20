#include <iostream>
using namespace std;
//引用的本质在cpp内部实现是一个指针常量
int main()
{
    int a=10;
    int &ref=a;//等价int* const ref=&a;
    ref=100;//等价*ref=100;
    return 0;
}