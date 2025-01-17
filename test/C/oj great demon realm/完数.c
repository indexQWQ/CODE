#include <stdio.h>

int main() 
{
    
    for(int n=6;n<=10000;n++)
    {
        int i,sum=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
            
        }
        if(sum==n)
        {
            printf("%d ",sum);
        }
    }
    return 0;
    
}