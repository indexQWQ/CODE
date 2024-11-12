#include <stdio.h>
int main ()
{
    int count=0;
    for(int i=100;i<=200;i++)
    {
        int j;
        
        for( j=2;j<i;j++)//从2开始判断  
        {
            if(i%j==0)//试除法
            {
                break;
            }
        }
        if(j==i)//i是素数
        {
            printf("%d\n",i);
            count++;
        }
    
    }
    printf("共有%d个素数\n",count);
    return 0;
}
