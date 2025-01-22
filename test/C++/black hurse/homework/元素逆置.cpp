#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    int left=0,right=sizeof(arr)/sizeof(arr[0])-1;
    while(left<right)
    {
        arr[left]=arr[left]^arr[right];
        arr[right]=arr[left]^arr[right];
        arr[left]=arr[left]^arr[right];
        left++;
        right--;
    }
    for(int i=0;i<(int)(sizeof(arr)/sizeof(arr[0]));i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}