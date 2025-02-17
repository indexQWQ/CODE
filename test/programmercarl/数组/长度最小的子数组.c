#include <stdio.h>
//暴力
int test1(int *nums,int s,int len)
{
    int max=len;
    for(int i=0;i<len;i++)
    {
        int sum=0;
        for(int j=i;j<len;j++)
        {
            sum+=nums[j];
            if(sum>=s)
            {
                int len2=j-i+1;
                max=len2<max?len2:max;
                break;
            }
        }
    }
    return max;
}
//滑动窗口
int test2(int *nums,int s,int len)
{
    int j=0,sum=0,i=0,max=len;
    for(j=0;j<len;j++)
    {
        sum+=nums[j];
        while(sum>=s)
        {
            sum-=nums[i];
            int len2=j-i+1;
            max=max>len2?len2:max;
            i++;
        }
    }
    return max;
}
int main()
{
    int s = 6, nums[]={1,1,1,1,1,3};
    printf("%d\n",(int)test2(nums,s,6));
    return 0;
}