#include <iostream>
#include <map>
using namespace std;

//insert(elem);     在容器中插入元素
//clear();          清理所有元素
//erase(pos);       删除pos迭代器所指的元素，返回下一个元素的迭代器
//erase(beg,end);   删除区间【beg，end】所有的元素，返回下一个元素的迭代器
//erase(key);      删除容器中值为elem的元素

int main()
{
    map<int,int> m1;
    for(int i=0;i<10;i++)
        m1.insert({i,3});
    m1.insert(make_pair(10,4));
    m1.insert(pair<int,int>(11,2));
    m1.insert(map<int,int>::value_type(12,2));
    for(pair<int,int> i:m1)
        cout<<i.first<<" "<<i.second<<endl;
    cout<<m1.size()<<endl;
    map<int,int>::iterator it=m1.begin();
    advance(it, 5);
    m1.erase(m1.begin(),it);
    m1.erase(5);
    for(pair<int,int> i:m1)
        cout<<i.first<<" "<<i.second<<endl;
    cout<<m1.size()<<endl;

    return 0;
}