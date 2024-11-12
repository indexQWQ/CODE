#include <stdio.h>

int main() 
{
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<=m)
        {
            count++;
            m-=arr[j];
        }
    }
    printf("%d",n-count);
    return 0;
}