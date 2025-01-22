#include <iostream>
using namespace std;

int main()
{
    //1.一维数组
    //定义方式： 
    //数据类型 数组名[数组长度];
    //数据类型 数组名[数组长度]={值1,值2,...};
    //数据类型 数组名[]={值1,值2,...};
    // int arr[5]={1,2,3,4,5};
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    // 一维数组数组名的用途：
    //1.可以统计整个数组在内存中的长度
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;
    //2.可以获取数组在内存中的首地址
    //数组名是给常量，不可以进行赋值操作
    return 0;
}
