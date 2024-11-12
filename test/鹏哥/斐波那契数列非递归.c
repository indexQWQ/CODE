#include <stdio.h>
int main() 
{
    long long a=1,b=1,c=0,n;
    scanf("%lld",&n);
    if(n==1||n==2)
        printf("%lld",a);
    while(n>2)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    printf("%lld",c);
    return 0;
}