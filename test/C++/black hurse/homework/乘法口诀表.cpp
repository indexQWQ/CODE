#include <iostream>
using namespace std;

int main()
{
    int i=1;
    for(;i<10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<'*'<<j<<"="<<i*j<<' ';
        }
        cout<<endl;
    }
    return 0;
}