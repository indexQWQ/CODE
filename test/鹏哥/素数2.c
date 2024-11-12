#include <stdio.h>
int arr(int n)
{
    int j=0;
    for(j=2;j<n;j++)
    {
        if(n%j==0)
        {
            return 0;
        }
    }
    if(j==n)
    {
        return 1;
    }
}
int main ()
{
    int i=0;
    for(i=100;i<=200;i++)
    {
        if(arr(i)==1)
        {
            printf("%d\n",i);
        }
        else
        {
            continue;
        }
    }

    return 0;
}