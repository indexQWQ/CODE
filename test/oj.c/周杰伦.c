#include <stdio.h>

#define MAX 1000
int main()
{
    int m=0,n=0;
    int arr[MAX]={0};
    int arrr[MAX]={0};
    scanf("%d %d",&m,&n);
    getchar();
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0;
    int sum=0;
    for(j=0;j<m;j++)
    {
        arrr[j]++;
        n--;
        sum+=arrr[j]*arr[n];
        if(j==m-1)
        {
            j=0;
        }
        if(n==0)
        {
            break;
        }
    }
    printf("%d\n",sum);
    return 0;
}