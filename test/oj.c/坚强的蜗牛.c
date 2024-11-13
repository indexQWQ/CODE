// #include <stdio.h>

// int main() 
// {
//     double n,x;
//     scanf("%lf%lf",&n,&x);
//     int days=0;
//     int n1=n;
//     if(x>2.0)
//     {
//         while(n>0)
//         {
            
//             n-=x;
//             x*=0.95;
//             n+=2.0;
//             if(n>=n1)
//             {
//                 n=n1;
//                 days=-1;
//                 break;
//             }
//             days++;
//         }
        
//     }
//     else
//     {
//         days=-1;
//     }
//     printf("%d",days);
//     return 0;
// }

// #include <stdio.h>

// int main() 
// {
//     double n,x,zz=0.0,z=0.0;
//     scanf("%lf%lf",&n,&x);
//     int days=0,days1=0;
//     double x1=x,x2=x;
    
//     if(x>2.0)
//     {
//         while(x>=2.0)
//         {
//             x*=0.95;
//             days++;
//         }
        
//         for(int i=0;i<days-1;i++)
//         {
//             zz+=x1;
//             x1*=0.95;
//             zz-=2.0;
//         }
        
//         if(zz>=n)
//         {
//             while(1)
//             {
//                 z+=x2;
//                 x2*=0.95;
//                 z-=2.0;
//                 days1++;
//                 if(z>=n)
//                 {
//                     break;
//                 }
//             }
            
//             days=days1-1;
//         }
//         else
//         {
//             days=-1;
//         }
//     }
//     else
//     {
//         days=-1;
//     }
//     printf("%d",days);
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
// 	double n,x;
// 	scanf("%lf %lf",&n,&x);
// 	int day =1;
// 	int x1=0;
// 	if(x>=n)
// 	{
// 		printf("1");
// 		return 0;
// 	}
// 	while (x1<n)
// 	{
// 		day++;
// 		x1+=x;
// 		x1-=2;
// 		if(x1<=0)
// 		{
// 			x1=0;
// 		}
// 		x*=0.95;
// 		if(x<0.01)
// 		{
// 			printf("-1");// 如果爬升能力小于0.01，则表示无法继续
// 			return 0;
// 		}
// 	}
//     printf("%d",day);
// 	return 0;
// }



// #include <stdio.h>

// int main() 
// {
//     double n, x;
//     int day = 0;
//     scanf("%lf %lf", &n, &x);

//     if (x >= n) 
//     {
//         printf("1\n");
//         return 0;
//     }

//     while (x < 0.01) 
//     {
//         day++;
//         x += x - 2;
//         if (x <= 0) 
//         {
//             x = 0;
//         }
//         x *= 0.95;
//     }

//     if (x >= n) 
//     {
//         printf("1\n");
//     } 
//     else 
//     {
//         printf("-1\n");
//     }

//     return 0;
// }


#include <stdio.h>

int main()
{
    
    return 0;
}
