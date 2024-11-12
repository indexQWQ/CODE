// #include <stdio.h>

// int main() 
// {
//     int m,n,k;
//     scanf("%d%d%d",&m,&n,&k);
//     int a[m][n],b[n][k],c[m][k];
//     for(int i=0;i<m;i++)
//         for(int j=0;j<n;j++)
//             scanf("%d",&a[i][j]);    
//     for(int i=0;i<n;i++)
//         for(int j=0;j<k;j++)
//             scanf("%d",&b[i][j]);
//     for(int i=0;i<m;i++)
//         for(int j=0;j<k;j++)
//             for(int l=0;l<n;l++)
//                 c[i][j]+=a[i][l]*b[l][j];
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<k;j++)
//             printf("%d ",c[i][j]);
//         printf("\n");
//     }
//     return 0;
// }


#include <stdio.h>

int main() 
{
    int m, n, k;
    scanf("%d%d%d", &m, &n, &k);
    int a[m][n], b[n][k], c[m][k];
    for(int i = 0; i < m; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < k; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < m; i++) 
    {
        for(int j = 0; j < k; j++) 
        {
            c[i][j] = 0;
        }
    }

    
    for(int i = 0; i < m; i++) 
    {
        for(int j = 0; j < k; j++) 
        {
            for(int l = 0; l < n; l++) 
            {
                c[i][j] += a[i][l] * b[l][j];
            }
        }
    }
    for(int i = 0; i < m; i++) 
    {
        for(int j = 0; j < k; j++) 
        {
            printf("%d", c[i][j]);// 输出矩阵元素
            if (j < k - 1) 
            {
                printf(" ");// 输出空格
            }
        }
        printf(" ");    // 输出换行符
        printf("\n");   // 输出换行符
    }
    return 0;
}
