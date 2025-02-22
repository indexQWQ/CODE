#include <iostream>
using namespace std;

int main()
{
	int first=1,step=2,ret=first;
	int n=4;
    cout<<"请分别输入n、first、step：";
    cin>>n>>first>>step;
	int **array=new int*[n];
	for(int i=0;i<n;i++)
	{
		array[i]=new int[n];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0 && j==0)
			{
				array[i][j]=first;
			}
			else
			{
				array[i][j]=ret;
			}
			ret+=step;
		}
	}
	int sum=array[0][0]+array[n-1][n-1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j || i+j==n-1)
			{
				array[i][j]=sum-array[i][j];
			}
			cout<<array[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	for(int i=0;i<n;i++)
	{
		delete[] array[i];
	}
	delete[] array;
	return 0;
} 