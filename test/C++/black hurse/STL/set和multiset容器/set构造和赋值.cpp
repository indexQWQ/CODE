#include <iostream>
#include <set>
using namespace std;
void myprint(set<int> &l)
{
    for(set<int>::const_iterator it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
//构造
//set<T> st;            //默认构造函数
//set(const set&st);    //拷贝构造函数
//赋值
//set& operator=(const set &set);

int main()
{
    set<int> s1;
    //插入数据只有insert
    s1.insert(20);
    s1.insert(40);
    s1.insert(30);
    s1.insert(10);
    myprint(s1);
    set<int> s2(s1);
    myprint(s2);
    set<int> s3;
    s3=s2;
    myprint(s3);
    return 0;
}