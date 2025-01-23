#include <stdio.h>
//双指针
void delete(int *nums,int *len,int val)
{
    int slow=0,fast=0;
    for(fast=0;fast<*len;fast++)
    {
        if(nums[fast]!=val)
        {
            int temp=nums[slow];
            nums[slow++]=nums[fast];
            nums[fast]=temp;
        }
    }
    (*len)--;
}
int main()
{   
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(num)/sizeof(num[0]);
    delete(num,&len,3);
    for(int i=0;i<len;i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}