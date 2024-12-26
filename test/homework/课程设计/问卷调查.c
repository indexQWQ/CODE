#include <stdio.h>

void quiksort(int *arr,int low,int high)
{
    if(low<high)
    {
        int povint=arr[high];
        int i=0;
        int j=low;
        for(i=low;i<high;i++)
        {
            if(arr[i]<povint)
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                j++;
            }
        }
        int temp=arr[high];
        arr[high]=arr[j];
        arr[j]=temp;
        quiksort(arr,0,j-1);
        quiksort(arr,j+1,high);
    }
}
void del(int *arr,int *n)
{
    int i=0;
    for(i=0;i<*n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            int j=0;
            for(j=i;j<*n-1;j++)
            {
                arr[j]=arr[j+1];
            }
            (*n)--;
            i--;
        }
    }
}
int main()
{
    int n=0;
    int arr[100]={0};
    scanf("%d ",&n);
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quiksort(arr,0,n-1);
    del(arr,&n);
    printf("%d\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}