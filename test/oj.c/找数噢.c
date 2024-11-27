#include <stdio.h>

int main()
{
	int m=0;
	scanf("%d",&m);
	int i=0;
	int flag=1;
	for(i=1;i<=199;i+=2)
	{
		int j=0;
		for(j=1;j<m;j++)
		{
			if((j*i+j*(j-1))==m && i<i+(j-1)*2 && i+(j-1)*2<=199)
			{
				flag=0;
				printf("%d %d\n",i,i+(j-1)*2);
			}
		}
	}
	if(flag)
	{
		printf("-1");
	}
	return 0;
}