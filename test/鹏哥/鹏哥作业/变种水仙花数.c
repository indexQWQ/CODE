// 变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，
//比如1461 可以拆分成（1和461）,（14和61）,（146和1),如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
// 例如：
// 655 = 6 * 55 + 65 * 5
// 1461 = 1*461 + 14*61 + 146*1
// 求出 5位数中的所有 Lily Number
#include <stdio.h>

int main() 
{
    int i=0;
    for(i=10000;i<100000;i++)
    {
        int n=i;
        int sum=0;
        int ten=10;
        while(n>0)
        {
            int a=i%ten;
            n/=10;
            ten*=10;
            sum+=(a*n);
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
        //printf("%d",count);
    }
    return 0;
}