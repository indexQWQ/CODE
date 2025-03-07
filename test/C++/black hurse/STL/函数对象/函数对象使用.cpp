#include <iostream>
#include <string>
using namespace std;

class myadd
{
public:
    int operator()(int v1,int v2)
    {
        return v1+v2;//可以像普通函数那样调用，可以有参数，可以有返回值
    }
};

class myprint
{
public:
    myprint()
    {
        count=0;
    }
    void operator()(string n)
    {
        cout<<n<<endl;
        count++;//函数对象可以有自己的状态
    }
    int count;
};

void dprint(myprint& mp,string test)
{
    mp(test);//函数对象可以作为参数传递
}
int main()
{
    myadd add;
    cout<<add(2,3)<<endl;

    myprint print;
    print("index");

    dprint(print,"index");
    return 0;
}