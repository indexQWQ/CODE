#include <stdio.h>

void init(int arr[],int ze)
{
    int i=0;
    for(i=0;i<ze;i++)
    {
        arr[i]=0;
    }
}

void print(int arr[],int ze)
{
    int i=0;
    for(i=0;i<ze;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

void reverse(int arr[],int left,int right)
{
    int temp=arr[left];
    arr[left]=arr[right];
    arr[right]=temp;
    if(left<right)
        reverse(arr,left+1,right-1);
}
int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int ze=sizeof(arr)/sizeof(arr[0]);
    int left=0,right=ze-1;
    //init(arr,ze);
    print(arr,ze);
    reverse(arr,left,right);
    print(arr,ze);
    return 0;
}