#include <iostream>
using namespace std;
int main()
{
    // if语句
    // int a=0;
    // cout<<"请输入：";
    // cin>>a;
    // if(a==1)
    // {
    //     cout<<"a=1"<<endl;
    // }
    // else if (a==2)
    // {
    //     cout<<"a=2"<<endl;
    // }
    // else
    // {
    //     cout<<"不知道"<<endl;
    // }
    // 输出最大数
    // int a=0,b=0,c=0;
    // cin>>a>>b>>c;
    // cout<<((a>b?a:b)>c?(a>b?a:b):c);

    // // 三目运算符
    // int a=0,b=0;
    // cin>>a>>b;
    // cout<<(a>b?a:b)<<endl;
    // (a>b?a:b)=100;//####在c++里三目运算符返回的是变量可以继续赋值####
    // cout<<"a="<<a<<endl;
    // cout<<"b="<<b<<endl;
    // return 0;

    //switch语句
    int score=0;
    cout<<"请打分：";
    cin>>score;
    switch (score)
    {
    case 10:
        cout<<"good\n";
        break;
    case 5:
        cout<<"nommal\n";
        break;
    default:
        cout<<"how dine you\n";
        break;
    }
}