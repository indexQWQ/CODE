#include <stdio.h>

int fib(int n)
{
    int a=1;
    int b=1;
    int c=1;
    while(n>=3)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}
int main()
{
    int n=0;
    scanf("%d",&n);
    int a=fib(n);
    printf("%d",a);
    return 0;
}