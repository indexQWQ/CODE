#include <iostream>
using namespace std;

int main()
{   
    // while()循环
    // int i=0;
    // while(i<10)
    // {
    //     cout<<i++;
    // }

    // do...while();循环
    // 会先执行一次语句再进行判断
    int i=0;
    do
    {
        cout<<i++<<endl;
    }while(i<1);
    return 0;
}
