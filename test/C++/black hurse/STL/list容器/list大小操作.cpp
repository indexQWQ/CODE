#include <iostream>
#include <list>
using namespace std;
void myprint(list<int> &l)
{
    for(list<int>::const_iterator it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

//empty();              //判断容器是否为空
//size();               //返回容器中元素的个数
//resize(int num);      //重新指定容器的长度为num,若容器变长，则以默认值0填充新位置
                        //如果如果容器变短，则超过容器的长度的元素被删除
//resize(int num,elem)  //重新指定容器的长度为num,若容器变长，则以elem填充新位置
                        //如果如果容器变短，则超过容器的长度的元素被删除
int main()
{

    return 0;
}