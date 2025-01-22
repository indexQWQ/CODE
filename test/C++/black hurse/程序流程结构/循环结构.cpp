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
    // int i=0;
    // do
    // {
    //     cout<<i++<<endl;
    // }while(i<1);

    // for()循环
    // int i=0;
    // for(i=0;i<10;i++)
    // {
    //     cout<<i<<endl;
    // }

    // 嵌套循环
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
