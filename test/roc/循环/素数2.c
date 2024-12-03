// #include <stdio.h>
// int arr(int n)
// {
//     int j=0;
//     for(j=2;j<n;j++)
//     {
//         if(n%j==0)
//         {
//             return 0;
//         }
//     }
//     if(j==n)
//     {
//         return 1;
//     }
// }
// int main ()
// {
//     int i=0;
//     for(i=100;i<=200;i++)
//     {
//         if(arr(i)==1)
//         {
//             printf("%d\n",i);
//         }
//         else
//         {
//             continue;
//         }
//     }

//     return 0;
// }


#include <stdio.h>
#include <stdbool.h>

bool prime(int n)
{
    if(1==n) return false;
    if(2==n) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2)//只检查奇数因子
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(prime(i))
            printf("%d ",i);
    }
    return 0;
}