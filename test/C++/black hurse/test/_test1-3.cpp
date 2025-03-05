#include <iostream>
using namespace std;

int sum=0;

int main()
{
	int sum=0;
	int array[10]={1,2,3,4,5,6,7,8,9,10};
	int len=sizeof(array)/sizeof(array[0]);
	for(int i=0;i<len;i++)
	{
		::sum+=array[i];
		if(array[i]%2==1)
		{
			sum+=array[i];
		}
	}
	cout<<::sum<<endl;
	cout<<sum<<endl;
	system("pause");
	return 0;
}