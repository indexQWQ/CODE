#include <stdio.h>

#define pe 10000
void scan(int arr[],int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void paixu(int arr[],int low,int high)
{
    if (low < high) 
    {
        int pivot = arr[high];
        int i = low - 1;
        int j=0;
        for ( j = low; j < high; j++) 
        {
            if (arr[j] < pivot) 
            {
                i++;
                // 交换
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        // 交换基准数
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;

        paixu(arr, low, pi - 1);
        paixu(arr, pi + 1, high);
    }
}
double caculate(int arr[],int n,int m)
{
    int i=0;
    int sum=0;
    for(i=m;i<n-m;i++)
    {
        sum+=arr[i];
    }
    //printf("%d",sum);
    return (double)sum/(n-2*m);
}
int main()
{
    int arr[pe];
    int n=0,m=0;
    scanf("%d%d",&n,&m);
    scan(arr,n);
    paixu(arr,0,n-1);
    double a=caculate(arr,n,m);
    printf("%.2lf\n",a);
    return 0;
}

