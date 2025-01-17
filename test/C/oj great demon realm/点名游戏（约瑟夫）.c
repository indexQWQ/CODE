

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

//迭代
// #include <stdio.h>
// int arr(int m, int n) {
//     int result = 0; // 从 0 开始计数
//     for (int i = 2; i <= m; i++) {
//         result = (result + n) % i;
//     }
//     return result + 1; // 转换为从 1 开始计数
// }
// int main() {
//     int m, n;
//     scanf("%d%d", &m, &n);
//     int hello = arr(m, n);
//     printf("%d", hello);
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