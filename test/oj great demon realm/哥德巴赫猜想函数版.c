#include <stdio.h>
#include <stdbool.h>
int is_primer( long long n )
{
  	if(n<=1) return false;
  	for(long long i=2;i*i<=n;i++)
  	{
  		if(n%i==0) return false;
    }     
    return true;
}

long long min_prime_of_goldbach( long long n )
{
       
     for(long long j=2;j<=n;j++)
     {
     	long long p=n-j;
     	if(is_primer(j)&&is_primer(p))
     	{
          	return j;
          	break;
     	}
     }
}