#include <iostream>
using namespace std;

// int main()
// {
//     //int int=10; //err
//     //把变量的名字变为关键字会产生歧义
//     return 0;
// }

// 标识符命名规则：
// 标识符不能是关键字
// 标识符只能由字母、数字、下划线组成
// 第一个字符必须是字母或下划线
// 标识符区分大小写
// 且变量名最好见名知意

int main()
{
    int adf=10;
    int _ad=10;
    int _23df=10;
    //int 3sd=10;//err// 第一个字符必须是字母或下划线
    cout<<adf<<_ad<<_23df<<endl;
    return 0;
}

