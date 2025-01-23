#include <stdio.h>
int search(int* nums, int numsSize, int target) 
{
    int left=0;
    int right=numsSize-1;
    int mid=0;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(nums[mid]>target)
        {
            right=mid-1;
        }
        else if(nums[mid]<target)
        {
            left=mid+1;
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
    int nums[10]={1,2,3,4,5,6,7,8,9,10};
    int numsSize=10;
    int target=2;
    printf("%d\n",search(nums,numsSize,target));
}