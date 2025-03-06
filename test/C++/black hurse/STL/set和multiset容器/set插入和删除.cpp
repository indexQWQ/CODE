#include <iostream>
#include <set>
using namespace std;
//insert(elem);     在容器中插入元素
//clear();          清理所有元素
//erase(pos);       删除pos迭代器所指的元素，返回下一个元素的迭代器
//erase(beg,end);   删除区间【beg，end】所有的元素，返回下一个元素的迭代器
//erase(elem);      删除容器中值为elem的元素

int main()
{
    set<int> s1;
    for(int i=0;i<10;i++)
        s1.insert(i);
    s1.erase(7);
    for(int i:s1)
        cout<<i<<" ";
    cout<<endl;
    s1.erase(s1.begin());
    for(int i:s1)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}