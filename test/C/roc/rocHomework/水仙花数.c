#include<stdio.h>
#include <math.h>
int is_liky(int n)
{
    int flag=n;
    int flag1=n;
    int sum=0;
    int count=0;
    while(n>0)
    {
        n/=10;
        count++;
    }
    int i=0;
    for(i=0;i<count;i++)
    {
        sum+=pow(flag%10,count);
        flag/=10;
    }
    if(flag1==(sum))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i=0;
    for(i=1;i<100000;i++)
    {
        if(is_liky(i))
        {
            printf("%d ",i);
        }
    }
    return 0;
}