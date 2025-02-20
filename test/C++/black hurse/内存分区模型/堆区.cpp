#include <iostream>
#include <string>
using namespace std;

//堆区：由程序员分配释放，程序结束时由操作系统回收
//cpp中主要利用new在堆区开辟内存

// int *func()
// {
//     //利用new关键字 可以将数据开辟到堆区
//     int *p=new int(10);
//     return p;
// }
// int main()
// {
//     int *p=func();
//     cout<<*p<<endl;
//     cout<<*p<<endl;
//     cout<<*p<<endl;
//     cout<<*p<<endl;
//     return 0;
// }

//1.new的基本语法
int *func()
{
    //在堆区创建整型数据
    //new返回的是改类型的指针
    int *p=new int(10);
    return p;
}
void test1()
{
    int *p=func();
    cout<<*p<<endl;
    cout<<*p<<endl;
    cout<<*p<<endl;
    //如果想释放堆区的数据，用关键字delete
    delete p;
    cout<<*p<<endl;//内存已经释放，再调用就是非法访问
}
//2.在堆区利用new开辟数组
void test2()
{
    //在堆区创建10整型数据的数组
    int *p=new int[10];//[10]代表数组有十个元素
    for(int i=0;i<10;i++)
    {
        p[i]=i+1;
    }
    for(int i=0;i<10;i++)
    {
        cout<<p[i]<<endl;
    }
    //释放数组加[]
    delete[] p;
}
int main()
{
    test2();
    return 0;
}