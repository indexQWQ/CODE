#include <stdio.h>

//左闭右闭
int binary_search1(int *num,int target,int len)
{
    int left=0;
    int right=len-1;
    int middle=0;
    while(left<=right)
    {
        middle=left+(right-left)/2;
        if(num[middle]>target)
        {
            right=middle-1;
        }
        else if(num[middle]<target)
        {
            left=middle+1;
        }
        else
        {
            return middle;
        }   
    }
    return left;
}
//左闭右开
int binary_search2(int *num,int target,int len)
{
    int left=0;
    int right=len;
    int middle=0;
    while(left<right)
    {
        middle=left+(right-left)/2;
        if(num[middle]>target)
        {
            right=middle;
        }
        else if(num[middle]<target)
        {
            left=middle+1;
        }
        else
        {
            return middle;
        }
    }
    return left;
}
int main()
{
    int num[10]={1,2,3,4,5,6,7,8,9,10};
    int target=2;
    int len=sizeof(num)/sizeof(num[0]);
    int num1=binary_search1(num,target,len);
    int num2=binary_search2(num,target,len);
    printf("%d %d\n",num1,num2);
    return 0;
}