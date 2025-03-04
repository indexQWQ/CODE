#include <iostream>
#include <stack>
using namespace std;

// 构造函数：
// stackT> stk;                         //stack采用模板类实现，stack对象的默认构造形式
// stack(const stack &stk);             //拷贝构造函数
// 赋值操作：
// stack& operator=(const stack &stk);  //重载等号操作符
// 数据存取:
// push(elem);                          //向栈顶添加元素
// pop();                               //从栈顶移除第个元素
// top();                               //返回栈顶元素
// 大小操作：
// empty();                             //判断堆栈是否为空
// size();                              //返回栈的大小

int main()
{
    stack<int> s;
    stack<int> s2;
    if(s.empty())cout<<"空"<<endl;
    for(int i=0;i<10;i++)s.push(i);
    if(s.empty())cout<<"空"<<endl;
    cout<<"大小:"<<s.size()<<endl;
    cout<<"栈顶:"<<s.top()<<endl;
    s2=s;
    s2.pop();
    cout<<"大小:"<<s2.size()<<endl;
    cout<<"栈顶:"<<s2.top()<<endl;
    system("pause");
    return 0;
}