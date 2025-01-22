#include "swap.h"

int main()
{
    int a=10,b=20;
    swap(&a,&b);
    cout<<"a="<<a<<'\t'<<"b="<<b<<endl;
    return 0;
}