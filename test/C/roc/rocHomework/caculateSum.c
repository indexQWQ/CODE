#include <stdio.h>

int main()
{
    int a=0,n=0;
    scanf("%d%d",&a,&n);
    int sum=0,k=0;
    int i=0;
    for(i=0;i<n;i++)
    {
        k=k*10+a;
        sum+=k;
    }
    printf("%d\n",sum);
    return 0;
}