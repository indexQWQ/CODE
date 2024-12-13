#include <stdio.h>

void scanf_(int *arr,int num)
{
    int i=0;
    for(i=0;i<num;i++)
    {
        scanf("%d",arr+i);
    }
}

void printf_(int *arr,int num)
{
    int i=0;
    for(i=0;i<num;i++)
    {
        printf("%d ",*(arr+i));
    }
}

void quiksort(int *arr,int low,int high)
{
    if(low<high)
    {
        int pivot=*(arr+high);
        int j=low;
        int i=0;
        for(i=low;i<high;i++)
        {
            if(*(arr+i)<pivot)
            {
                int temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
                j++;
            }
        }
        int temp=*(arr+high);
        *(arr+high)=*(arr+j);
        *(arr+j)=temp;
        quiksort(arr,low,j-1);
        quiksort(arr,j+1,high);
    }
}
void merge(int *arr,int *arr1,int *arr2,int a,int b)
{
    int i=0;
    int j=0;
    int z=0;
    for(i=0;i<a+b;i++)
    {
        if(i<a)
        {
            
            *(arr2+i)=*(arr+j);
            j++;
        }
        else
        {
            *(arr2+i)=*(arr1+z);
            z++;
        }
    }
}
int main() 
{
    int a, b;
    int arr[3000],arr1[3000],arr2[6000];
    scanf("%d%d",&a,&b);
    scanf_(arr,a);
    scanf_(arr1,b);
    merge(arr,arr1,arr2,a,b);
    quiksort(arr2,0,a+b-1);
    printf_(arr2,a+b);
    return 0;
}