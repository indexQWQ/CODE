// #include <stdio.h>

// int main()
// {
//     int n=0,k=0;
//     scanf("%d%d",&n,&k);
//     int i=0,start=0,end=0,output=0;
//     for(i=0;i<n;i++)
//     {
//         int input=0;
//         scanf("%d",&input);
//         if(n==1)// 判断n==1时的情况
//         {
//             if(k>input)
//             {
//                 output=1;
//                 break;
//             }
//             else
//             {
//                 output=0;
//                 break;
//             }
//         }
//         //初始化start
//         if(i==0){
//             start=input;
//         }else{
//             end=input;
//         }

//         if(i==0 && k<start)
//         {
//             output=0;
//             break;
//         }
//         else if(k>start && k<end)
//         {
//             output=i;
//             break;
//         }
//         else if(k==start)
//         {
//             output=i-1;
//             break;
//         }
//         //判断结尾
//         else if(i==n-1)
//         {
//             output=n;
//             break;
//         }
//         start=end;
//     }
//     printf("%d\n",output);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n];
    for(int i = 0; i < n; i++) 
    {
    scanf("%d", &arr[i]);
    }
    int left = 0;
    int right = n - 1;
    int mid;
    while(left <= right) 
    {
        mid =left+(right-left)/2;
        if(arr[mid] == k) 
        {
            printf("%d\n", mid);
            return 0;
        } 
        else if(arr[mid] < k) 
        {
            left = mid + 1;
        } 
        else 
        {
            right = mid - 1;
        }
    }
    printf("%d\n", left);
    return 0;
}