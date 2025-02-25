#include <iostream>
#include <string>
using namespace std;

//函数调用运算符()也可以重载
//由于重载使用的方式非常像函数调用，因此称为仿函数
//仿函数没有固定写法，非常灵活

class my_print
{
public:
    void operator()(string text)
    {
        cout<<text<<endl;
    }
};

void myprintf2(string text)
{
    cout<<text<<endl;
}

//仿函数没有固定写法，非常灵活
//加法类
class my_add
{
public:

    int operator()(int a,int b)
    {
        return a+b;
    }
};
void test1()
{
    my_print myprintf;
    myprintf("index");//由于重载使用的方式非常像函数调用，因此称为仿函数
    myprintf2("index");
}
void test2()
{
    my_add myadd;
    cout<<myadd(10,10)<<endl;

    //匿名函数对象//匿名对象特点：当前行执行，当前行释放
    cout<<my_add()(20,10)<<endl;
}
int main()
{
    test1();
    test2();
    return 0;
}