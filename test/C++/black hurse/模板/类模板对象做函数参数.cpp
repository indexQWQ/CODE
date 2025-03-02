#include <iostream>
#include <string>
using namespace std;

//1.指定传入的类型---直接显示对象的数据类型
//2.参数模板化   ---将对象中的参数变为模板进行转递
//3.整个类模板化 ---将这个对象类型 模板化进行传递

template <class T,class Y>
class person
{
public:
    person(T name,Y age)
    {
        this->age=age;
        this->name=name;
    }
    void show()
    {
        cout<<this->age<<" "<<this->name<<endl;
    }
    T name;
    Y age;
};
//1.指定传入的类型
void test1(person<string,int>& p)
{
    p.show();
}
//2.参数模板化
template <class T,class Y>
void test2(person<T,Y>& p)
{
    p.show();
    cout<<"类型"<<typeid(T).name()<<endl;
}
//3.整个类模板化
template <class T>
void test3(T& p)
{
    p.show();
    cout<<"类型"<<typeid(T).name()<<endl;
}
int main()
{
    person<string,int> p("index",18);
    test1(p);
    test2(p);
    test3(p);
    return 0;
}