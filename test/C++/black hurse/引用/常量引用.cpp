#include <iostream>
using namespace std;
//打印数据
void show(const int& val)
{
    //val=1000;
    cout<<val<<endl;
}
int main()
{
    //使用场景：修饰形参防止误操作
    // int a=10;
    // int& ref=a;
    // int& ref=10;//err//引用必须引一块合法的空间
    //const int& ref=10;
    //加const之后 编译器将代码修改 int temp=10; const int& ref=temp;

    int a=100;
    show(a);
    return 0;
}