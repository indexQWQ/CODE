#include <iostream>
using namespace std;

//两种分类方式：
//按参数分为 有参构造和无参构造(默认构造)
//按类型分为 普通构造和拷贝构造
class Person
{
public:
    //普通构造
    //无参构造(默认构造)
    Person()
    {
        cout<<"无参构造"<<endl;
    }
    //有参构造
    Person(int a)
    {
        cout<<"有参构造"<<endl;
    }

    //拷贝构造
    Person(const Person &p)
    {  
        //将传入的人身上的所有属性，拷贝到我身上
        age=p.age;
        cout<<"拷贝构造"<<endl;
    }

    ~Person()
    {
        cout<<"析构函数"<<endl;
    }
    int age;
};

//三种调用方式：
//括号法、显示法、隐式转换法
void test1()
{
    //1.括号法
    // Person p1;//无参
    //  //注意事项
    // //调用默认构造函数时候，不要加()
    // //因为编译器会认为Person p1()是一个函数的声明
    // Person p2(10);//有参
    // p2.age=100;
    // Person p3(p2);//拷贝
   
    // cout<<"p2 age "<<p2.age<<endl;
    // cout<<"p3 age "<<p3.age<<endl;

    //2.显示法
    // Person p1;//无参
    // Person p2=Person(10);//有参
    // Person p3=Person(p2);//拷贝

    // Person(10);//匿名对象 特点：当前行执行结束，系统会立即回收掉匿名对象
    // cout<<"————————"<<endl;

    //注意事项
    //不要利用拷贝构造函数 初始化匿名对象
    //Person(p3);//err
    //因为编译器会认为Person(p3)==Person p3;

    //3.隐式转换法
    Person p4=10;//相当于 Person p4=Person(10);//有参
    Person p5=p4;//--->   Person p5=Person(p4);//拷贝
}
int main()
{
    test1();
    return 0;
}