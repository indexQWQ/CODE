// #include <stdio.h>
// int count_true_prime( long long begin, long long end )
// {
//     int count=0;
//     while(begin<end)
//     {
//         int reverse=0;
//         int temp=begin;
//         while(temp>0)
//         {
//             reverse=reverse*10+temp%10;
//             temp/=10;
//         }
//         //printf("%d\n",reverse);
//         int flag=1;
//         if(begin%2==0 || reverse%2==0)
//         {
//             flag=0;
//             begin++;
//             continue;
//         }
//         int i=0,b=0;
//         b=begin>reverse?begin:reverse;
//         for(i=2;i*i<=b;i++)
//         {
//             if(begin%i==0 || reverse%i==0)
//             {
//                 flag=0;
//                 begin++;
//                 //printf("%d\n",reverse);
//                 continue;

//             }
//         }
//         if(flag)
//         {
//             count++;
//             begin++;
//         }
//     }
//     return count;
// }

// int main()
// {
//     int len=count_true_prime(10,100);
//     printf("%d\n",len);
// }


#include <stdio.h>
#include <string.h>
#define MAX 100000
int count_true_prime( long long begin, long long end )
{
    int count=0;
    long long i=0;
    long long arr[MAX]={0};
    memset(arr,1,MAX*sizeof(int));//将数组初始化1
    arr[1]=0,arr[0]=0;
    for(i=2;i<MAX;i++)
    {
        long long j=0;
        for(j=i*i;j<MAX;j+=i)
        {
            arr[j]=0;
        }
    }
    while(begin<end)
    {
        int reverse=0;
        int temp=begin;
        while(temp>0)
        {
            reverse=reverse*10+temp%10;//交换
            temp/=10;
        }
        if(arr[begin] && arr[reverse])//判断素数
        {
            count++;
        }
        begin++;
    }
    return count;
}

int main()
{
    int len=count_true_prime(10,100);
    printf("%d\n",len);
}