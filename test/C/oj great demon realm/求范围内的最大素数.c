#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main ()
{
    long long a,count=0;
    scanf("%lld", &a);
    long long flag[100000];
    for(long long i=a;i>=2;i--)
    {
        long long j;
        for( j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>sqrt(i))
        {
            flag[count]=i;
            count++;
        }
        
    }
    printf("%lld",flag[0]);
    return 0;
}
