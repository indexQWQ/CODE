#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int n=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)//输入数组
    {
        scanf("%d",&a[i]);//输入数组元素
    }
    int sum=0;
    for (int i=0;i<n-1;i++)//从小到大排序 冒泡排序
    {
        for (int j=0;j<n-i-1;j++)//
        {
            if (a[j]>a[j+1])//交换
            {
                int temp=a[j];//临时变量
                a[j]=a[j+1];//交换
                a[j+1]=temp;//交换
            }
        }
    }
    
    sum=fabs(a[n-1]-a[0]);//两点之间的距离
    printf("%d",sum);
    return 0;
}
