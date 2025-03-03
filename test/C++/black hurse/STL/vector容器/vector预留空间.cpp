#include <iostream>
#include <vector>
using namespace std;
//减少vector在动态扩展容量时的扩展次数
//reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问
int main()
{
    vector<int> v;
    //利用reserve预留空间
    v.reserve(100000);
    int count=0;//内存开辟次数
    int*p=nullptr;
    for(int i=0;i<100000;i++)
    {    
        v.push_back(i);
        if(p!=&v[0])
        {
            p=&v[0];
            count++;
        }
    }
    cout<<"开辟次数："<<count<<endl;
    cout<<"容量："<<v.capacity()<<endl;
    cout<<"大小："<<v.size()<<endl;
    return 0;
}