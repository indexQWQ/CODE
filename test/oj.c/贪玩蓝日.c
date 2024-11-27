#include <stdio.h>

#define ren 100
#define zhi 100
int main()
{
    int arr[ren]={0};
    int arrr[zhi]={0};
    int n=0,m=0;
    scanf("%d %d",&n,&m);
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arrr[arr[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(arrr[arr[i]]>=2)
        {
            printf("%d\n",arrr[arr[i]]-1);
        }
        else
        {
            printf("ZGS\n");
        }
    }
    return 0;
}