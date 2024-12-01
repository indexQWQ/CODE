#include <stdio.h>

int caculate(int n,int m)
{
    int count=0;
    int flag=n^m;
    while(flag)
    {
        flag=flag&(flag-1);
        count++;
    }
    return count;
}
int main()
{
    int n=0;
    int m=0;
    scanf("%d%d",&n,&m);
    int a=caculate(n,m);
    printf("%d\n",a);
    return 0;
}