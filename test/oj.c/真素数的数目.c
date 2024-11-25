#include <stdio.h>
int count_true_prime( long long begin, long long end )
{
    int count=0;
    while(begin<end)
    {
        int ten=10;
        int reverse=0;
        int temp=begin;
        while(temp>0)
        {
            reverse=reverse*ten+temp%10;
            temp/=10;
        }
        //printf("%d\n",reverse);
        int flag=1;
        if(begin%2==0 || reverse%2==0)
        {
            flag=0;
            begin++;
            continue;
        }
        int i=0,b=0;
        b=begin>reverse?begin:reverse;
        for(i=2;i*i<=b;i++)
        {
            if(begin%i==0 || reverse%i==0)
            {
                flag=0;
                begin++;
                //printf("%d\n",reverse);
                continue;

            }
        }
        if(flag)
        {
            count++;
            begin++;
        }
    }
    return count;
}

int main()
{
    int len=count_true_prime(10,100);
    printf("%d\n",len);
}