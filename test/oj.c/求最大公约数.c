#include <stdio.h>
// int main ()
// {
//     long long a=3, b=7;
//     //scanf("%lld%lld", &a, &b);
//     while (b!= 0) 
//     {
//         long long temp = b;//保存b的值
//         b = a % b;
//         a = temp;
//     }
//     printf("%lld\n", a);
//     return 0;
// }

int main ()
{
    int a=3, b=7;
    //scanf("%lld%lld", &a, &b);
    int c=0;
    
    while (c=a%b) 
    {
        a=b;
        b=c;
    }
    printf("%d\n", b);
    return 0;
}