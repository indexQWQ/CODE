#include <stdio.h>

int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,0};
    int ze=sizeof(arr1)/sizeof(arr1[0]);
    int i;
    for(i=0;i<ze;i++)
    {
        int temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    int j=0;
    for(j=0;j<ze;j++)
    {
        printf("%d ",arr1[j]);
    }
    return 0;
}