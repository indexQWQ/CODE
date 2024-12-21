#include <stdio.h>

//void print(int *arr,int n)
//{
//	int i=0;
//	for(i=0;i&lt;n;i++)
//	{
//		printf("%d ",*(arr+i));
//	}
//}
int main()
{
	int n=0,count=0;
	scanf("%d",&n);
	int i=0;
	int arr[1000]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int arr1[n-3];
	int j=0;
	for(i=1;i<n-2;i++)
	{
		arr1[j++]=arr[i]-arr[i+1];
	}
	for(i=0;i<n-3;i++)
	{
		if(arr1[i]==0)
		{
			int j=i;
			for(;j<n-4;j++)
			{
				int temp=arr1[j];
				arr1[j]=arr1[j+1];
				arr1[j+1]=temp;
			}
			i--;
			n--;
		}
	}
	//print(arr1,n-3);
	for(i=0;i<n-4;i++)
	{
		if(arr1[i]>0 && arr1[i+1]<0)
		{
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
