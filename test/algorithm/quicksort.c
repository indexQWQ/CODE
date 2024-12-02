#include <stdio.h>

// /********************
//  * 函数名: quicksort
//  * 功能: 实现快速排序算法，对给定数组进行排序
//  * 参数: 
//  *      arr[] - 需要排序的数组
//  *      low - 当前排序的起始索引
//  *      high - 当前排序的结束索引
//  ********************/
// void quicksort(int arr[], int low, int high) 
// {
//    if(low<high)
//    {
//         int pivot=arr[high];
//         int i=low-1;
//         int j=0;
//         for(j=low;j<high;j++)
//         {
//             if(arr[j]<pivot)
//             {
//                 i++;
//                 int temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//         int temp=arr[i+1];
//         arr[i+1]=arr[high];
//         arr[high]=temp;

//         int ip=i+1;
//         quicksort(arr,low,ip-1);
//         quicksort(arr,ip+1,high);
//     }
// }
// int main()
// {
//     int arr[10]={2,1,3,4,7,6,8,9,5};
//     quicksort(arr,0,9);
//     int i=0;
//     for(i=0;i<10;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int povit=arr[high];
        int i=low-1;
        int j=0;
        for(j=low;j<high;j++)
        {
            if(arr[j]<povit)
            {
                i++;
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        int pt=i+1;
        int temp=arr[pt];
        arr[pt]=arr[high];
        arr[high]=temp;
        quicksort(arr,low,pt-1);
        quicksort(arr,pt+1,high);
    }
}
int main()
{
    int arr[10]={2,1,3,4,7,6,8,9,5};
    quicksort(arr,0,9);
    int i=0;
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

