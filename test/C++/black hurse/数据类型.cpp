#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
// 1.数据类型存在的意义：给变量分配适合的空间
// int main()
// {
//     // 整型：short int long longlong
//     short a=32768;
//     int b=32768;
//     cout<<a<<'\n'<<b<<endl;
//     return 0;
// }

// 2.sizeof关键字：计算数据类型占内存的大小
// int main()
// {
//     short a=32768;
//     int b=32768;
//     long c=0;
//     long long d=0;
//     cout<<sizeof(a)<<'\n'<<sizeof(b)<<endl;
//     cout<<sizeof(c)<<'\n'<<sizeof(d)<<endl;
//     return 0;
// }

// 3.实型(浮点型)
// int main()
// {
//     float f1=3.1415926f;//3.14F 也行
//     double f2=3.1425926;
//     cout<<setprecision(8)<<f1<<'\n'<<f2<<endl;
//     cout<<sizeof(f1)<<'\n'<<sizeof(f2)<<endl;
//     // 科学计数法
//     float f3=3e-2;
//     float f4=3e2;
//     cout<<setprecision(8)<<f3<<'\n'<<f4<<endl;
//     return 0;
// }

// 4.字符型(和c一样)
// int main()
// {
//     char ch[6]="sdfsd";
//     char ch1=65;
//     char ch2=32;
//     cout<<ch<<endl;
//     cout<<ch1<<endl;
//     cout<<(int)ch1<<endl;
//     cout<<ch1<<ch2<<ch1<<endl;
//     return 0;
// }

// 5.转义字符
// int main()
// {
//     // 换行符\n
//     cout<<"hello world\n";
//     /*反斜杠\     */
//     cout<<'\\'<<endl;
//     //水平制表符
//     cout<<"aaaaaaaa\tbbb\n";
//     cout<<"aaaaaaa\tbbb\n";
//     cout<<"aaaaaa\tbbb\n";
//     cout<<"aaaaa\tbbb\n";
//     return 0;
// }

// 6.字符串类型
// int main()
// {
//     //1.C风格字符串
//     char s1[]="hello world";
//     cout<<s1<<endl;
//     //2.C++风格字符串 头文件<string>
//     string s2="hello world";
//     cout<<s2<<endl;
//     return 0;
// }

// 7.布尔类型 bool 只占用一个字节大小
// int main()
// {
//     bool flag=true;
//     cout<<flag<<endl;
//     flag=false;
//     cout<<flag<<endl;
//     cout<<sizeof(flag)<<endl;
//     return 0;
// }

// 8.数据的输入
int main()
{
    //1.整型or浮点型
    // int a=0;
    // cin>>a;
    // cout<<a<<endl;
    //2.字符串型
    // string s1={0};
    // cin>>s1;
    // cout<<s1<<endl;
    //3.布尔类型
    bool flag=0;
    //cin>>flag;
    cout<<flag<<endl;
    return 0;
}