#include <stdio.h>

#define MAX 100000
int main()
{
    int arr[MAX]={0};
    int arrr[MAX]={0};
    int n=0;
    scanf("%d",&n);
    int i=0;
    int flag=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0;
    int count=0;
    for(i=1;i<n-1;i++)
    {
        flag=0;
        arrr[j]=arr[i]-arr[i+1];
        //printf("%d ",arr[i]);
        j++;
    }
    for(j=0;j<n-3;j++)
    {
        if(arrr[j]==0)
        {
            int i=0;
            for(i=j;i<n-4;i++)
            {
                arrr[j]=arrr[j+1];
            }
            n--;
            j--;
        }
    }
    for(j=0;j<n-3;j++)
    {
        if(arrr[j]>0 && arrr[j+1]<0)
        {
            count++;
        }
        //printf("%d ",arrr[j]);
    }
    if(flag)
    {
        printf("0");
    }
    else
    {
        printf("%d",count);
    }
    return 0;
}
