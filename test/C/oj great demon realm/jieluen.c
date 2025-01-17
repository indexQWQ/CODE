#include <stdio.h>
#include <math.h>
#define MAX 100
int main()
{
    int m=0,n=0;
    int arr[MAX]={0};
    int sum=0;
    scanf("%d %d",&m,&n);
    getchar();
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(m==n)
    {
        int i=0;
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
        }
    }
    else
    {
        int i=0,j=1;;
        int ret=ceil((float)n/m);
        int count =0;
        for(i=n-1;i>=0 && j<=ret;i--)
        {
            if(count==m)
            {
                j++;
                count=0;
            }
            sum+=arr[i]*j;
            count++;
        }
    }
    printf("%d\n",sum);
    return 0;
}