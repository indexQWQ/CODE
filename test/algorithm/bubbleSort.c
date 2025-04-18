#include <stdio.h>

void bubbleSort (int arr[] ,int n)
{
    for(int i=0; i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)//从0到n-i-2，因为最后一个数不需要比较
        {
            if(arr[j]>arr[j+1])//如果前面的数比后面的数大，则交换
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
            
        }
        if(flag==0)//如果没有交换，说明已经排序好了，可以退出循环
            break;
    }
}

int main ()
{
    int arr[10] = {2,3,8,6,9,5,7,10,1,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,len);
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}