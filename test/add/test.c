#include<stdio.h> 
#include<math.h>
int main()
{
	long long n, i, j,count,o; 
	count = 0;
	scanf_s("%lld", &n);
    //n=3;
    if(n>2)count++;
    
	for (i =3; i < n; i+=2)
	{
        
		for (j = 3; j*j<=i; j+=2)
		{
			if (i%j==0)
			{
				break;
			} 
		} 
        if (j*j> i)
		{
			count++;
		}
	} 
	printf("%lld", count);
	return 0;
}