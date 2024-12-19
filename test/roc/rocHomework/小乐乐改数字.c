#include <stdio.h>

// int main()
// {
//     char arr[100]={0};
//     gets(arr);
//     int i=0;
//     while(arr[i])
//     {
//         if((arr[i]-'0')%2==0)
//         {
//             arr[i]='0';
//         }
//         else
//         {
//             arr[i]='1';
//         }
//         i++;
//     }
//     int flag=1;
//     for(i=0;arr[i]!='\0';i++)
//     {
//         if(arr[i]=='0' && flag)
//         {
//             continue;
//         }
//         else
//         {
//             flag=0;
//             printf("%c",arr[i]);
//         }
//     }
//     if(flag)
//     {
//         printf("0");
//     }
//     return 0;
// }
#include <math.h>
int main()
{
    int n=0;
    int sum=0;
    int i=0;
    scanf("%d",&n);
    while(n)
    {
        int ret=0;
        if((n%10)%2==0)
        {
            ret=0;
        }
        else
        {
            ret=1;
        }
        sum+=ret*pow(10,i);
        n/=10;
        i++;
    }
    printf("%d\n",sum);
    return 0;
}