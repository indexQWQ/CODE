#include <iostream>
using namespace std;

void myswap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=0;
    int b=10;
    cout<<a<<' '<<b<<endl;
    myswap(&a,&b);
    cout<<a<<' '<<b<<endl;
    return 0;
}