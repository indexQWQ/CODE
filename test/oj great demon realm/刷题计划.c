#include <stdio.h>

int main()
{
    int n=0,k=0;
    scanf("%d%d",&n,&k);
    int sum=0;
    int add=0;
    int day=0;
    while(sum<n)
    {
        if(day==0)
        {
            add=1;
        }
        else
        {
            add+=k;
        }
        sum+=add;
        day++;
    }
    printf("%d\n",day);
}