#include <stdio.h>
//数组传参有两种形式
//1.数组
//2.指针

//数组作为函数参数
void bubbleSort(int arr[],int len)
{
    int i=0,j=0;
    for(i=0;i<len-1;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={3,2,1,6,5,4,9,8,7,0};
    int len=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,len);
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}