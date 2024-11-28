#include <stdio.h>
int max_seq( int n )
{
    int temp=n;
    int arr[100]={0};
    int count=0;
    int sum=0;
    while(temp>0)
    {
        arr[count]=temp%10;
        count++;
        temp/=10;
    }
    int i=0;
    for(i=0;i<count-1;i++)
    {
        int j=0;
        for(j=0;j<count-1-i;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<count;i++)
    {
        sum=sum*10+arr[i];
    }
    return sum;
}

int min_seq( int n )
{
    int temp=n;
    int arr[100]={0};
    int count=0;
    int sum=0;
    while(temp>0)
    {
        arr[count]=temp%10;
        count++;
        temp/=10;
    }
    int i=0;
    for(i=0;i<count-1;i++)
    {
        int j=0;
        for(j=0;j<count-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<count;i++)
    {
        sum=sum*10+arr[i];
    }
    return sum;
}

int main()
{
    printf("%d\n",max_seq(2431));
    printf("%d\n",min_seq(2431));
    return 0;
}