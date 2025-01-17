#include <stdio.h>

void selection_sort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)//从0到n-2
    {
        int min=i;
        for(int j=i+1;j<n;j++)//从i+1到n-1
        {
            if(arr[j]<arr[min])
                min=j;
        }
        int temp=arr[i];//交换
        arr[i]=arr[min];
        arr[min]=temp; 
    }
}

int main()
{
    int arr[10]={2,3,8,6,9,5,7,10,1,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr ,len);
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}                            