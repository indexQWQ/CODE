#include <stdio.h>

int main() 
{
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) 
    { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
        int i=0;
        int count=0;
        for(i=0;i<32;i++)
        {
            int c=a&(1<<i);
            int d=b&(1<<i);
            if(c!=d)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}