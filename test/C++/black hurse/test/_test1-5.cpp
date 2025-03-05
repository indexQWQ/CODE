#include <iostream>
using namespace std;

int array[]={2,4,6,8,10};
int &index(int i)
{
	return array[i];
}
int main()
{
	index(3)=16;
	for(int i=0;i<5;i++)
	{
		cout<<array[i]<<" ";
	}
	system("pause");
	return 0;
}