#include <iostream>
using namespace std;

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
int main()
{
    int arr[10]={3,2,5,4,1,6,10,9,7,8};
    int len=sizeof(arr)/sizeof(arr[0]);
    quiksort(arr,0,len-1);
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<' ';
    }
    return 0;
}