#include <stdio.h>

int rev_num( int num, int len )
{
    int flag=0;
    if(num<0)
    {
        flag=1;
        num=-num;
    }
    if(num<10)
    {
        return num;
    }
    else
    {
        int i=0;
        int reverse=1;
        for(i=0;i<len-1;i++)
        {
            reverse*=10;
        }
        if(flag)
        {
            return -((num%10)*reverse+rev_num(num/10,len-1));
        }
        else
        {
            return (num%10)*reverse+rev_num(num/10,len-1);
        }
    }
}
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d",rev_num(n,6));
    return 0;
}