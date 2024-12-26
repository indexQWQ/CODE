#include <stdio.h>

int main()
{
    int n=0,k=0;
    scanf("%d%d",&n,&k);
    int sum=0,i=0;
    for(i=0;i<n;i++)
    {
        int input=0;
        scanf("%d",&input);
        sum+=input;
    }
    if(sum>=k)
        printf("%d\n",sum%k);
    else
        printf("%d\n",sum);
}