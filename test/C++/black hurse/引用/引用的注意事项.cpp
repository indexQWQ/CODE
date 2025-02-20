#include <iostream>
#include <string>
using namespace std;
//必须要初始化，初始化后不能改变
int main()
{
    int a=10;
    //1.必须初始化
    //int &b;//err
    int &b=a;
    int c=10;
    //2.初始化后不能改变
    b=c;//是赋值操作
    //&b=c;//err
    return 0;
}