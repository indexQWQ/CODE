#include <iostream>
using namespace std;

// 算术运算符：+ - * / % ++ --
// %两边必须是整数
// int main()
// {
//     int a=9;
//     int b=4;
//     cout<<a/(float)b<<endl;
//     // int a1=10;
//     // int b1=0;
//     // cout<<a1/b1<<endl;//err 两个数值相同除数不能为零
//     int a2=9;
//     int b2=4;
//     cout<<a2%b2<<endl;
//     // int a3=10;
//     // int b3=0;
//     // cout<<a3%b3<<endl;//err
//     //1.前置递增
//     int a4=10;
//     cout<<++a4<<endl;
//     //2.后置递增
//     int b4=10;
//     cout<<b4++<<endl;
//     return 0;
// }

// 赋值运算符：= += -= *= /= %=
// int main()
// {
//     // =
//     int a=10;
//     a=100;
//     cout<<"a="<<a<<endl;
//     // +=
//     a=10;
//     a+=2;
//     cout<<"a="<<a<<endl;
//     // -=
//     a=10;
//     a-=2;
//     cout<<"a="<<a<<endl;
//     // *=
//     a=10;
//     a*=10;
//     cout<<"a="<<a<<endl;
//     // /=
//     a=10;
//     a/=2;
//     cout<<"a="<<a<<endl;
//     // %=
//     a=10;
//     a%=3;
//     cout<<"a="<<a<<endl;
//     return 0;
// }

// 比较运算符：== != < > <= >=
// int main()
// {
//     // ==
//     cout<<(1==1)<<endl;
//     cout<<(1==2)<<endl;
//     // !=
//     cout<<(1!=1)<<endl;
//     cout<<(1!=2)<<endl;
//     return 0;
// }

// 逻辑运算符：！ && ||
int main()
{
    //!
    int a=10;
    int b=0;
    cout<<!a<<endl;
    cout<<!b<<endl;
    //&&
    cout<<(a&&!b)<<endl;
    cout<<(!a&&b)<<endl;
    // ||
    cout<<(a||b)<<endl;
    cout<<(!a||b)<<endl;
    return 0;
}