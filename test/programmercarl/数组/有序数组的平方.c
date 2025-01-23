#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//双指针
void test(int *nums,int len)
{
    int *p=(int *)calloc(len,4);
    int index=len;
    if(p==NULL)
    {
        perror("calloc");
        return ;
    }
    for(int i=0,j=len-1;i<=j;)
    {
        if(nums[i]*nums[i]>nums[j]*nums[j])
        *(p+index---1)=nums[i]*nums[i],i++;
        else
        *(p+index---1)=nums[j]*nums[j],j--;
    }
    memcpy(nums,p,len*4);
    free(p);
    p=NULL;
}
int main()
{
    int num[5]={-5,-4,3,4,5};
    int len=5;
    test(num,len);
    for(int i=0;i<len;i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}