#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int ze=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    // for(i=0;i<ze;i++)
    // {
    //     scanf("%d",arr+i);
    // }
    int j=0;
    for(i=0;i<ze;i++)
    {
        if(arr[i]%2==1)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
        
    }
    for(i=0;i<ze;i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}