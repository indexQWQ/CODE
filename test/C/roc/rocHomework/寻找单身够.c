#include <stdio.h>

void find_singledog(int *arr,int sz,int *pd1,int *pd2)
{
    int sum=0;
    int i=0;
    for(i=0;i<sz;i++)
    {
        sum^=arr[i];
    }
    int pos=0;
    for(pos=0;pos<32;pos++)
    {
        if(((sum>>pos)&1)==1)
        {
            break;
        }
    }
    for(i=0;i<sz;i++)
    {
        int num=arr[i];
        if(((num>>pos)&1)==1)
        {
            *pd1^=num;
        }
        else if(((num>>pos)&1)==0)
        {
            *pd2^=num;
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5,1,2,3,4,6};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int dog1=0;
    int dog2=0;
    find_singledog(arr,sz,&dog1,&dog2);
    printf("%d %d\n",dog1,dog2);
    return 0;
}