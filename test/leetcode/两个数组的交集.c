#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int arr[1001]={0},arr2[1001]={0},flag=1;
    int *num=NULL;
    for(int i=0;i<nums1Size;i++)
    {
        arr[nums1[i]]++;
    }
    for(int i=0;i<nums2Size;i++)
    {
        arr2[nums2[i]]++;
    }
    for(int i=0;i<1001;i++)
    {
        if(arr[i]>0 && arr2[i]>0)
        {
            if(flag==1)
                num=calloc(flag,sizeof(int));
            else
                num=realloc(num,flag*4);
            num[flag-1]=i;
            flag++;
        }
    }
    *returnSize=flag-1;
    return num;
}