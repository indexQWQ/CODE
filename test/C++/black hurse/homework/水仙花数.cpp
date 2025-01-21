#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i=100;
    do
    {
        int j=0,sum=0,copy=i;
        for(j=0;j<3;j++)
        {
            sum+=pow(copy%10,3);
            copy/=10;
        }
        if(sum==i)
        {
            cout<<i<<endl;
        }
        i++;
    } while (i<1000);
    
    return 0;
}