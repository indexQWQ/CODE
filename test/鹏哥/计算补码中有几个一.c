#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0;
    int b=0;
    scanf("%d",&a);
    /* while(a)
    {
        if(a%2==1)
        {
            b++;
        }
        a=a/2;
    }  */
    for(int i=0;i<32;i++)
    {
        if((a>>i)&1==1)  //判断第i位是否为1nb
        {
            b++;
        }
    }
    printf("%d",b);
    return 0;
}