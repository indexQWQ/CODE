#include<stdio.h>
int main()
{
    int arr[10]={1,3,5,7,9,11,13,15,19,21};
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