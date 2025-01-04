#include <stdio.h>
void quiksort(int *arr,int low,int high)
{
    if(low<high)
    {
        int i=0;
        int j=low;
        int povit=arr[high];
        for(i=low;i<high;i++)
        {
            if(arr[i]<povit)
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
        quiksort(arr,low,j-1);
        quiksort(arr,j+1,high);
    }
}
int main()
{
    int n=0;
    int arr[100]={0};
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quiksort(arr,0,n-1);
    int sum=0;
    int count=0;
    for(i=n-1;i>=1;i-=2)
    {
        if(arr[i]>=0 && arr[i-1]>=0)
        {
            sum+=arr[i];
            sum+=arr[i-1];
            count++;
        }
        else if(arr[i]>0 && arr[i-1]<0 && arr[i]+arr[i-1]>0)
        {
            sum+=arr[i];
            sum+=arr[i-1];
            count++;
        }
    }
    if(count==0)
    {
        printf("%d\n",arr[n-1]+arr[n-2]);
    }
    else
    {
        printf("%d\n",sum);
    }
    return 0;
}