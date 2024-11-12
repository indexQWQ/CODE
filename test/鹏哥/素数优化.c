#include <stdio.h>
#include <math.h>
int main ()
{
    int count=0;
    for(int i=101;i<=200;i+=2)//只判断奇数
    {
        int j;
        
        for( j=2;j<=sqrt(i);j++)//只判断sqrt(i)以内的因数
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>sqrt(i))//如果i是素数
        {
            printf("%d\n",i);
            count++;
        }
    
    }
    printf("共有%d个素数\n",count);
    return 0;
}
