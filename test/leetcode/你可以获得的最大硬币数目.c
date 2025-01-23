#include <stdio.h>
void quiksort(int *arr,int left,int right)
{
    if(left<right)
    {
        int povint=arr[right];
        int i=0;
        int j=left;
        for(i=left;i<right;i++)
        {
            if(povint>arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j++]=temp;
            }
        }
        int temp=arr[right];
        arr[right]=arr[j];
        arr[j]=temp;
        quiksort(arr,left,j-1);
        quiksort(arr,j+1,right);
    }
}
void quiksort(int *arr,int left,int right)
{
    if(left<right)
    {
        int povint=arr[right];
        int i=0;
        int j=left;
        for(i=left;i<right;i++)
        {
            if(povint>arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j++]=temp;
            }
        }
        int temp=arr[right];
        arr[right]=arr[j];
        arr[j]=temp;
        quiksort(arr,left,j-1);
        quiksort(arr,j+1,right);
    }
}
int maxCoins(int* piles, int pilesSize) 
{
    quiksort(piles,0,pilesSize-1);
    int index=pilesSize-2,sum=0;
    for(int i=0;i<pilesSize/3;i++)
    {
        sum+=piles[index];
        index-=2;
    }
    return sum;
}
int main()
{

    return 0;
}