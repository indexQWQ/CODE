#include <stdio.h>

// int reverse_number(int n)
// {
//     int a=n;
//     if(n<0)
//     {
//         a=-n;
//     }
//     int count=0;
//     while(a%10>0)
//     {
//         count++;
//         a/=10;
//     }
//     int i=0;
//     int reverse=1;
//     for(i=0;i<count-1;i++)
//     {
//         reverse*=10;
//     }
//     int j=0;
//     int sum=0;
//     for(j=0;j<count;j++)
//     {
//         int a=n%10;
//         sum+=reverse*a;
//         reverse/=10;
//         n/=10;
//     }
//     return sum;

// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int a=reverse_number(n);
//     printf("%d\n",a);
//     return 0;
// }

int reverse_number(int n) 
{
    int flag=0;
    if(n<0)
    {
        n=-n;
        flag=1;
    }
    int reverse = 0;
    while (n > 0) 
    {
        reverse = reverse * 10 + (n % 10);
        n /= 10;
    }
    if(flag)
    {
        return -reverse;
    }
    else
    {
        return reverse;
    }
}

int main()
{
    int n=0;
    scanf("%d",&n);
    int a=reverse_number(n);
    printf("%d\n",a);
    return 0;
}
