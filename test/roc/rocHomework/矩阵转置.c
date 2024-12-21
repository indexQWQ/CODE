#include <stdio.h>
// 第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。 (1≤n≤10,1≤m≤10)
// 从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，
// 表示第一个矩阵中的元素。
int main()
{
    int arr[10][10]={0};
    int r=0,c=0;
    scanf("%d%d",&r,&c);
    int i=0;
    for(i=0;i<r;i++)
    {
        int j=0;
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        int j=0;
        for(j=0;j<r;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}