#include <stdio.h>

int find_item( int buf[], int len, int value )
{
    int left=0;
    int right=len;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(buf[mid]<value)
        {
            left=mid+1;
        }
        else if(buf[mid]>value)
        {
            right=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,4,6,8,9,14};
    int a=find_item(arr,7,5);
    printf("%d",a);
    return 0;
}