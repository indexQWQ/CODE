#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int *p=calloc(2,4);
    if(p==NULL)
    {
        perror("calloc");
    }
    int i=0;
    for(i=0;i<numsSize;i++)
    {
        int j=0;
        for(j=0;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target && i!=j)
            {
                p[0]=j;
                p[1]=i;
                break;
            }
        }
    }
    *returnSize=2;
    return p;
    free(p);
    p=NULL;
}
int main()
{
    int nums[100]={9,0,2,7};
    int numsSize=4; 
    int returnSize=0;
    int target=9;
    int *num=twoSum(nums,numsSize,target,&returnSize);
    int i=0;
    for(i=0;i<returnSize;i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}