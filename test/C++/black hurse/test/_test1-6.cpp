#include <iostream>
using namespace std;

void Index(int a[], int n, int & sub)
{
	int left=0;
	int right=n-1;
	while(left<=right)
	{
		int mid=left+(right-left)/2;
		if(a[mid]>sub)
		{
			right=mid-1;
		}
		else if(a[mid]<sub)
		{
			left=mid+1;
		}
		else
		{
			sub=mid;
			return;
		}
	}
	sub=-1;
}
int main()
{
	int array[]={1,2,3,4,5};
	int n=5;
	int sub=0;
	Index(array,n,sub);
	cout<<sub<<endl;
	system("pause");
	return 0;
}