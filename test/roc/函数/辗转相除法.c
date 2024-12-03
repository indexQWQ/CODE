#include <stdio.h>
//最小公被数=a+b/最大公约数
int arr(int a,int b)
{
    // if(a<b)
    // {
    //     int c=a;
    //     a=(a>b?a:b);
    //     b=c;
    // }
        
    // while(1)
    // {
    //     int d=a%b;
    //     if(d==0)
    //         return b;
    //     a=b;
    //     b=d;
    // }
    int c=0;
    while(c=a%b)
    {
        a=b;
        b=c;
    }
    return b;
}
int main()
{
    int a=0,b=0,c=0;
    scanf("%d%d",&a,&b);
    c=arr(a,b);
    printf("%d",c);
    return 0;
}