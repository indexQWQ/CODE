

// #include <stdio.h>

// int main() 
// {
//     int m, n;
//     if (scanf("%d%d", &m, &n) != 2 || m <= 0 || n <= 0) 
//     {
//         fprintf(stderr, "输入错误：请输入两个正整数。\n");
//         return 1;
//     }

//     if (m >= n) 
//     {
//         // 计算最后的结果
//         int a=1,b=0;
//         while(a<m)
//         {
//             a*=n;
//         }
//         b=m-a/n;
//         printf("%d",n*b+1);
//     } 
//     else 
//     {
//         int arr[m];
//         // 初始化数组
//         for (int y = 0; y < m; y++) 
//         {
//             arr[y] = y + 1;
//         }

//         int index = 0;
//         while (m > 1) {
//             index = (index + n - 1) % m;  // 计算要移除的元素的索引
//             for (int p = index; p < m - 1; p++) 
//             {
//                 arr[p] = arr[p + 1]; // 前移元素
//             }
//             m--; // 去掉已移除的元素
//         }

//         printf("%d", arr[0]); // 剩下的最后一个人的编号
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() 
// {
//     int m,n;
//     scanf("%d%d",&m,&n);
//     if(m>=n)
//     {
//         int a=1,b=0;
//         while(a<m)
//         {
//             a*=n;
//         }
//         b=m-a/n;
//         printf("%d",n*b+1);
//     }
//     else
//     {
//         int arr[m];
//         for(int i=0;i<m;i++)
//         {
//             arr[i]=i+1;
//         }
//         if(m==1)
//         {
//             printf("%d",arr[0]);
//             return 0;
//         }
//         int index=0;
//         while(m>1)
//         {
//             index=(index+n-1)%m;
//             for(int j=index;j<m-1;j++)
//             {
//                 arr[j]=arr[j+1];
//             }
//             m--;
//         }
//         printf("%d",arr[0]);
        
//     }
//     return 0;
// }


// #include <stdio.h>

// // 递归函数，计算约瑟夫斯问题的解
// int josephus(int n, int k) 
// {
//     if (n == 1)
//         return 1;
//     else
//         return (josephus(n - 1, k) + k - 1) % n + 1;// 计算下一个人的编号
// }

// int main() 
// {
//     int m, n;
//     scanf("%d%d", &m, &n);

//     // 使用递归函数计算最后剩下的个体
//     int result = josephus(m, n);
//     printf("%d\n", result);
//     return 0;
// }


#include <stdio.h>
int arr(int m,int n)
{
    if(m==1)
    {
        return 1;
    }
    else
    {
        return(arr(m-1,n)+n-1)%m+1;
    }
}
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int hello=arr(m,n);
    printf("%d",hello);
    return 0;
}