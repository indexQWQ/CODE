#include <iostream>
using namespace std;

void mul(int a,int b=2)
{
	cout<<"2个整数的乘积:"<<a*b<<endl;
}
void mul(int a,int b,int c)
{
	cout<<"3个整数的乘积:"<<a*b*c<<endl;
}
void mul(double a,double b=0.2)
{
	cout<<"2个双精度数的乘积:"<<a*b<<endl;
}
void mul(double a,double b,double c)
{
	cout<<"3个双精度数的乘积:"<<a*b*c<<endl;
}
int main()
{
	mul(3);
	mul(3,3,3);
	mul(0.1);
	mul(0.1,0.1,0.1);
	system("pause");
	return 0;
}