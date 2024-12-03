#include <stdio.h>
//虽然数组越界没有报错，但是会导致程序崩溃，所以要注意数组越界的情况。
//程序员要自己注意数组越界的情况，防止程序崩溃。
int main()
{
    int arr[]={1,2,3,4,5};
    int i=0;
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
//二维数组的越界
#include <stdio.h>
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<=3;j++)//二维数组越界可以访问到自己定义的元素，但是不能访问到数组的边界
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}