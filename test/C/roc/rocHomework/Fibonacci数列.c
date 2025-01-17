#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int a=0,b=1,c=0,index=0;
    while(c<=n)
    {
        if(index>0)
        {
            a=b;
            b=c;
        }
        c=a+b;
        index++;
    }
    printf("%d\n",(n-b)<(c-n)?(n-b):(c-n));
    return 0;
}