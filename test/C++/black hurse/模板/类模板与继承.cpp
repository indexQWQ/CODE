#include <iostream>
#include <string>
using namespace std;

//当子类继承的父类是一个类模板，子类在声明的时候，要指定出父类中T的类型
//如果不指定，编译器无法给子类分配内存
//如果想灵活指定出父类T中的类型，子类也需要变为类模板

template <class T>
class person
{
public:
    T name;
};

//要指定出父类中T的类型
class son:public person<int>
{

};
//子类也需要变为类模板
template <class T,class Y>
class son2:public person<T>
{
    Y age;
};
int main()
{
    
    return 0;
}