#include <stdio.h>

unsigned int digitsum(unsigned int n)
{
    if(n>9)
    {
        return digitsum(n/10)+n%10;
    }
    else
    {
        return n;
    }
}
int main()
{
    unsigned int n=0;
    scanf("%u",&n);
    unsigned int num=digitsum(n);
    printf("%u",num);
    return 0;
}



//自己写的

// #include <stdio.h>

// unsigned int digitsum(unsigned int n)
// {
//     static unsigned int sum=0;
//     if(n>9)
//     {
//         digitsum(n/10);
//     }
//     return sum+=n%10;
// }
// int main()
// {
//     unsigned int n=0;
//     scanf("%u",&n);
//     unsigned int num=digitsum(n);
//     printf("%u",num);
//     return 0;
// }