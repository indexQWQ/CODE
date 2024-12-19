// #include <stdio.h>

// int main()
// {
//     int a=0,b=0,c=0,d=0;
//     for(a=0;a<2;a++)
//     {
//         for(b=0;b<2;b++)
//         {
//             for(c=0;c<2;c++)
//             {
//                 for(d=0;d<2;d++)
//                 {
//                    if((a==0)+(c==1)+(d==1)+(d==0)==3
//                    && a+b+c+d==1
//                    ) 
//                    printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
//                 }
//             }
//         }
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
   int killer = 0;
   //分别假设凶手是a,b,c,d,看谁是凶手时满足3个人说了真话，一个人说了假话
   for (killer = 'a'; killer <= 'd'; killer++)
   {
        if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
            printf("凶手是：%c", killer);
   }
   return 0;
}