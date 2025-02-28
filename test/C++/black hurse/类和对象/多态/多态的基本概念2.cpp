#include <iostream>
using namespace std;
//多态分为两类
//静态多态：函数重载 和 运算符重载 属于静态多态，复用函数名
//动态多态：派生类 和 虚函数 实现运行时多态

//静态多态和动态多态区别：
//静态多态的函数地址早绑定-编译阶段确定函数地址
//动态多态的函数地址晚绑定-运行阶段确定函数地址

//动态多态满足条件
//1.有继承关系
//2.子类重写父类函数

//动态多态使用
//父类的指针或引用 执行子类对象

//动物类
class animal
{
public:
    //虚函数
    virtual void speak()
    {
        cout<<"动物说话"<<endl;
    }
};

//猫类
class cat:public animal
{
public:
    //重写 函数返回值 函数名 参数列表 完全相同
    void speak()
    {
        cout<<"猫说话"<<endl;
    }
};

//狗类
class dog:public animal
{
public:
    void speak()
    {
        cout<<"狗说话"<<endl;
    }
};
//执行说话的函数
//地址早绑定 在编译阶段确定函数地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
void dospeak(animal &a1)//在cpp中允许父子间的类型转换 //animal &a1=cat;
{
    a1.speak();
}

void test1()
{
    cat c1;
    dospeak(c1);
    dog d1;
    dospeak(d1);
}

void test2()
{
    cout<<"sizeof animal:"<<sizeof(animal)<<endl;
    //没virtual时是1 有virtual时是8
}
int main()
{
    test2();
    return 0;
}
//vfptr-虚函数（表）指针
//v-virtual
//f-function
//ptr-pointer

//vftable-虚函数表
//v-virtual
//f-function

//animal内部结构 中有一个vfptr指向vftable，vftable内记录虚函数的地址 如&animal::speak()

//如果cat内部没有重写 animal内的函数
//cat内部结构 就是将父类animal 中的vfptr指向vftable，vftable内记录虚函数的地址 如&animal::speak() 拷贝过来

//当子类重写了父类的虚函数
//子类的vftable表内部会替换为 子类的虚函数地址 &cat::speak() 
//当父类指针或引用指向子类对象时候，发生多态
//animal &a1=cat;
//a1.speak();

