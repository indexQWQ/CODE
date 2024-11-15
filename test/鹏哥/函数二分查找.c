#include <stdio.h>

int binarysearch(int arr[],int n,int k)
//实际上数组传参穿的是地址，所以arr实际上是一个指针变量，因此在函数内部计算数组长度是不行的
{
    int left=0,right=n-1;
    while(left<=right)
    {
        //int mid=(left+right)/2;
        //int mid=left/2+right/2;不行例如left=3，right=5，这样mid=3； 
        int mid=left + (right-left)/2;
        if(arr[mid]<k)
        {
            left=mid+1;
        }
        else if(arr[mid]>k)
        {
            right=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;//这个值是没有找到的,所以返回-1,表示没有找到,因为数组的索引从0开始，所以返回-1
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};//二分查找的数组只能是有序的，否则无法找到
    int len=sizeof(arr)/sizeof(arr[0]);
    int k=7;
    int index=binarysearch(arr,len,k);
    if(index==-1)
    {
        printf("没有找到%d",k);
    }
    else
    {
        printf("找到%d的索引是%d",k,index);
    }
    return 0;
}