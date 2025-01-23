#include <iostream>
using namespace std;

int main()
{
    //空指针
    //1.空指针用于给指针变量初始化
    // int *p=NULL;
    // //2.空指针是不能访问的
    // //*p=100;//err
    // //0~255的内存编码是系统占用的，因此不能访问
    // int a=10;
    // p=&a;
    // cout<<p<<endl;

    //野指针
    int *p=(int *)0x1100;
    //指针指向的地址内容未知
    cout<<*p<<endl;
    return 0;
}