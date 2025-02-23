#include <stdio.h>

int* replaceElements(int* arr, int arrSize, int* returnSize) {
    *returnSize=arrSize;
    if(arrSize==1)
    {
        arr[0]=-1;
        return arr;
    }
    int max=arr[arrSize-1];
    for(int i=arrSize-2;i>=0;i--)
    {
        int temp=arr[i];
        arr[i]=max;
        max=max>temp?max:temp;
    }
    arr[arrSize-1]=-1;
    return arr;
}