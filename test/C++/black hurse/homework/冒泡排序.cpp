#include <iostream>
using namespace std;

int main()
{
    int arr[10]={3,2,5,4,1,6,10,9,7,8};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<' ';
    }
    return 0;
}