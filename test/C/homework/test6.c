// #include <stdio.h>

// void prt(char c,int n)
// {
//     int i=0;
//     for(i=0;i<n;i++)
//     {
//         int j=0;
//         for(j=0;j<i+1;j++)
//         {
//             printf("%c",c);
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     char c=0;
//     int n=0;
//     scanf("%s %d",&c,&n);
//     prt(c,n);
//     return 0;
// }

// #include <stdio.h>

// #define pi 3.1415926

// double C(double r)
// {
//     return 2*pi*r;
// }
// double S1(double r)
// {
//     return pi*r*r;
// }
// double S2(double r,double h)
// {
//     return 2*pi*r*h+2*pi*r*r;
// }
// double V(double r,double h)
// {
//     return pi*r*r*h;
// }
// int main()
// {
//     double n=0,h=0;
//     scanf("%lf %lf",&n,&h);
//     double c=C(n);
//     printf("%lf\n",c);
//     double s1=S1(n);
//     printf("%lf\n",s1);
//     double s2=S2(n,h);
//     printf("%lf\n",s2);
//     double v=V(n,h);
//     printf("%lf\n",v);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double sum=0;
//     int n=0;
//     scanf("%d",&n);
//     int i=0;
//     for(i=1;i<=n;i++)
//     {
//         sum+=1.0/(i*i);//这里
//     }
//     //printf("%lf\n",sum);
//     printf("%.5lf\n",sqrt(6*sum));
//     return 0;
// }

#include <stdio.h>
#include <stdbool.h>

#define LEFT 100
#define RIGHT 200
bool isprime(int n)
{
	if(1>=n) return false;
	if(2==n) return true;
	if(n%2==2) return false;
	int i=0;
	for(i=3;i*i<=n;i+=2)
	{
		if(n%i==0) return false;
	}
	return true;
}

int primeadd(int n)
{
	int i=0;
	for(i=0;i*i<n;i++)
	{
		int sub=n-i;
		if(isprime(i) && isprime(sub))
		{
			return i;
		}
	}
    return -1;
}
int main()
{
	int i=0;
	for(i=LEFT;i<=RIGHT;i+=2)
	{
		int sub=0;
		sub=primeadd(i);
        if(sub==-1)
        {
            printf("err\n");
        }
        else
        {
            printf("%d=%d+%d\n",i,sub,i-sub);
        }
	}
	return 0;
}
