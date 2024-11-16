//练习递归

#include <stdio.h>

int fac(int x)
{
    if(0==x)
    {
        return 1;
    }
    else
    {
        return x*fac(x-1);
    }
}
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d",fac(n));
    return 0;
}