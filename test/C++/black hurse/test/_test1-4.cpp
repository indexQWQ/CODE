#include <iostream>
#include <string>
using namespace std;

void swap(char& a,char& b)
{
	if(a<b)
	{
		return;
	}
	else
	{
		char temp=a;
		a=b;
		b=temp;
	}
}
int main()
{
	char a,b;
	cin>>a;
	cin>>b;
	swap(a,b);
	cout<<a<<" "<<b<<endl;
	system("pause");
	return 0;
}