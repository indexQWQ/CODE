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
int main()
{
    int s = 7, nums[]={2,3,1,2,1,3};
    printf("%d\n",(int)test1(nums,s,6));
    return 0;
}