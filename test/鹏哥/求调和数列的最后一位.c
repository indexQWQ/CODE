#include <stdio.h>
double hsum(int n)
{
    double sum = 0.0;
    for (int i = 1; i <= n; i++)
	{
		sum += 1.0 / i;
	}
		return sum;
}

int main ()
{
	double f;
	scanf("%lf", &f);
	
	int n=1;
	double sum;
	do
	{
		sum = hsum(n);
		if (sum > f)
		{
			break;
		}
		n++;
	} while (1);
	printf("%f\n", hsum(n-1));
	
	return 0;
}
	