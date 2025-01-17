#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int* arrr = (int*)malloc(n*sizeof(int));
    int* arrrr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        int arr[2];
        scanf("%d.%d", &arr[0], &arr[1]);
        arrr[i]=arr[0];
        arrrr[i]=arr[1];
    }
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n-1-j;k++)
        {
            if(arrr[k+1]>arrr[k])
            {
                int temp=arrr[k+1];
                arrr[k+1]=arrr[k];
                arrr[k]=temp;
                int temp1=arrrr[k+1];
                arrrr[k+1]=arrrr[k];
                arrrr[k]=temp1;
            }
        }
    }
    
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n-1-j;k++)
        {
            if(arrrr[k+1]>arrrr[k] && arrr[k+1]==arrr[k])
            {
                int temp1=arrrr[k+1];
                arrrr[k+1]=arrrr[k];
                arrrr[k]=temp1;
                
            }
        }
    }
    
    int month=(arrr[0]-arrr[n-1])*12-arrrr[n-1]+arrrr[0];
    printf("%d", month);
    free(arrr);
    free(arrrr);
    return 0;
}