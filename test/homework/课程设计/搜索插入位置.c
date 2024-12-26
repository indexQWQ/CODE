#include <stdio.h>

int main()
{
    int n=0,k=0;
    scanf("%d%d",&n,&k);
    int i=0;
    int start=0;
    int end=0;
    int output=0;
    for(i=0;i<n;i++)
    {
        int input=0;
        scanf("%d",&input);
        if(i==0)
        {
            start=input;
        }
        else
        {
            end=input;
        }
        if(k>start && k<=end)
        {
            output=i;
            break;
        }
        else if(i==n-1)
        {
            output=n;
            break;
        }
        start=end;
    }
    printf("%d\n",output);
    return 0;
}