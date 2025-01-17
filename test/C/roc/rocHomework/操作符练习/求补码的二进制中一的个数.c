//求一个整数存储在内存中的二进制中1的个数
#include <stdio.h>
//提示
//int a=3
//011

//a&1
//011 a
//001 1
//001 a&1
// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     int count=0;
//     int b=1;
//     int i=0;
//     for(i=0;i<32;i++)
//     {
        
//         if((a & b)!=0)
//         {
//             count++;
//         }
//         b=b<<1;
//     }
//     printf("%d\n",count);
//     return 0;
// }
//-1
//原码1000 0000 0000 0000 0000 0000 0000 0001
//反码1111 1111 1111 1111 1111 1111 1111 1110
//补码1111 1111 1111 1111 1111 1111 1111 1111

//只适用于正数
// int add(int n)//但如果是(unsigned int n)则可以
// {
//     int count=0;
//     while(n>0)
//     {
//         if(n%2==1)
//         {
//             count++;
//         }
//         n/=2;
//     }
//     return count;
// }

// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int a=add(n);
//     printf("%d\n",a);
//     return 0;
// }


// #include <math.h>
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     unsigned int a=(unsigned int)n;
//     printf("%u\n",a);
//     printf("%lf\n",pow(2,32));
//     return 0;
// }

//另外一种高效的方法
// int add(int n)
// {
//     int count=0;
//     while(n)
//     {
//         n=n&(n-1);
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     int a=add(n);
//     printf("%d\n",a);
//     return 0;
// }
//原理
//n=n&(n-1)
//1111 n
//1110 n-1
//1110 n
//1101 n-1
//1100 n
//1011 n-1
//1000 n
//0111 n-1
//0000