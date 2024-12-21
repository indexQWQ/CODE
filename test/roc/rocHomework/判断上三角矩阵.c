// KiKi想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。
// 第一行包含一个整数n，表示一个方阵包含n行n列，用空格分隔。 (2≤n≤10)
// 从2到n+1行，每行输入n个整数（范围-231~231-1），用空格分隔，共输入n*n个数。
#include <stdio.h>

int main()
{
    int arr[10][10]={0};
    int n=0;
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++)
    {
        int j=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int flag=1;
    for(i=0;i<n;i++)
    {
        int j=0;
        for(j=0;j<i;j++)
        {
            if(arr[i][j]!=0)
            {
                flag=0;
                goto end;
            }
        }
    }
end:
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}