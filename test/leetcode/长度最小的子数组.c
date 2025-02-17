int minSubArrayLen(int target, int* nums, int numsSize)
{
    int i=0,j=0,max=numsSize,sum=0,flag=1;
    for(j=0;j<numsSize;j++)
    {
        sum+=nums[j];
        while(sum>=target)
        {
            int len=j-i+1;
            sum-=nums[i];
            max=max>len?len:max;
            i++;
            flag=0;
        }
    }
    if (flag) max=0;
    return max;
}