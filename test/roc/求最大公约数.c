#include <stdio.h>
int main ()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int max=a>b?a:b;
    a=b;
    b=max;
    while(a%b)
    {
        int c=a%b;
        a=b;
        b=c;
    }
    printf("%d", b);
    return 0;
}