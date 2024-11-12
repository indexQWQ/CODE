#include <stdio.h>
int main ()
{
    
    int b=7;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int sz=sizeof(a)/sizeof(a[0]);
    int left=0;
    int right=sz-1;
    while(left<=right)
    {
        int mid=(left+right)/2;//防止溢出
        if(a[mid]>b)
        {
            right=mid-1;//右边界收缩
        }
        else if(a[mid]<b)
        {
            left=mid+1;//左边界收缩
        }
        else
        {
            printf("Element found at index %d",mid);
            break;
        }
    }
    if(left>right)
    {
        printf("Element not found");
    }

    return 0;
}
