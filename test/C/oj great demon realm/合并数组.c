#include <stdio.h>
#include <string.h>
int main()
{
    int x,y;
    scanf("%d,%d",&x,&y);
    int arr1[x];
    int arr2[x+y];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int j=x;j<x+y;j++)
    {
        scanf("%d",&arr2[j]);
    }
    memcpy(arr2,arr1,x* sizeof(int));
    for(int l=0;l<x+y;l++)
    {
        for(int p=0;p<x+y-1-l;p++)
        {
           if(arr2[p]<arr2[p+1])
           {
               int tump=arr2[p];
               arr2[p]=arr2[p+1];
               arr2[p+1]=tump;
           }
        }
        
    }
    for(int k=0;k<x+y;k++)
    {
        printf("%d ",arr2[k]);
        
    }
} 