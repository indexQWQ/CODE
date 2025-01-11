#include <stdio.h>
#include <stdlib.h>

typedef struct s
{
    int num;
    int left;
    int right; 
}sum;

int main()
{
    int n=0,r=0,i=0,count=0;
    sum arr[100]={0};
    scanf("%d%d",&n,&r);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i].num);
        arr[i].left=arr[i].num-r;
        arr[i].right=arr[i].num+r;
    }
    for(i=1;i<n;i++)
    {
        if(arr[i-1].right>arr[i].left)
        {
            count++;
            arr[i].right=arr[i-1].right;
        }
    }
    printf("%d\n",n-count);
    return 0;
}