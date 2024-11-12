#include <stdio.h>
int main ()
{
    long long a=3, b=7;
    //scanf("%lld%lld", &a, &b);
    while (b!= 0) 
    {
        long long temp = b;//保存b的值
        b = a % b;
        a = temp;
    }
    printf("%lld\n", a);
    return 0;
}