#include <iostream>
#include <vector>
using namespace std;

//swap(vec); //将vec与本身的元素互换
int main()
{
    // vector<int> v1;
    // v1.insert(v1.begin(),10,1);
    // for(int i:v1)
    //     cout<<i<<" ";
    // cout<<endl;
    // vector<int> v2;
    // v2.insert(v2.begin(),10,2);
    // for(int i:v2)
    //     cout<<i<<" ";
    // cout<<endl;
    // v1.swap(v2);
    // for(int i:v1)
    //     cout<<i<<" ";
    // cout<<endl;
    // for(int i:v2)
    //     cout<<i<<" ";
    // cout<<endl;
    //巧用swap可以收缩内存空间
    vector<int> v;
    for(int i=0;i<100000;i++)
    {
        v.push_back(i);
    }
    cout<<"v的容量:"<<v.capacity()<<endl;
    cout<<"v的大小:"<<v.size()<<endl;
    v.resize(3);
    cout<<"v的容量:"<<v.capacity()<<endl;
    cout<<"v的大小:"<<v.size()<<endl;
    //巧用swap可以收缩内存空间
    vector<int> (v).swap(v);
    //vector<int> (v)//匿名对象
    cout<<"v的容量:"<<v.capacity()<<endl;
    cout<<"v的大小:"<<v.size()<<endl;
    return 0;
}