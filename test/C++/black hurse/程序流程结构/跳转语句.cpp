#include <iostream>
using namespace std;

int main()
{
    // 1.break语句：跳出switch，循环语句，嵌套循环
    for(int i=0;i<10;i++)
    {
        if(i==5)break;
        cout<<i<<endl;
    }
    cout<<"------"<<endl;
    // 2.continue语句：跳过本次循环下面为执行的语句，继续执行下一次循环
    for(int i=0;i<10;i++)
    {
        if(i%2==0)continue;
        cout<<i<<endl;
    }
    cout<<"------"<<endl;
    // 3.goto语句：可以无条件的跳转代码
    cout<<'1'<<endl;
    cout<<'2'<<endl;
    cout<<'3'<<endl;
goto end;
    cout<<'4'<<endl;
    cout<<'5'<<endl;
    cout<<'6'<<endl;
end:
    cout<<'7'<<endl;
    cout<<'8'<<endl;
    cout<<'9'<<endl;
    return 0;
}