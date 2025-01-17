#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int sum=n;
    int temp=n;
    while(temp>=2)
    {
        sum+=temp/2;
        temp=temp/2+temp%2;
    }
    printf("%d\n",sum);
    return 0;
}