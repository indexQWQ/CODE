#include <stdio.h>

int main()
{
    //int arr[10]={0};
    //在支持变长的编译器上，数组的大小可以是变量

    int n=0;
    scanf("%d",&n);
    int arr[n];//这个数组不能初始化
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //输出
    int j=0;
    for(j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}