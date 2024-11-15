//第一种方法使用指针

// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>
// int add (int a,int b,int *count)
// {
//     (*count)++;//加括号
//     return a+b;
// }
// int main()
// {
//     srand((unsigned int)time(NULL));
//     int i=0;
//     int count=0;
//     while(i<3)
//     {
//         int b=rand()%10+1;
//         int sum=add(b,b,&count);
//         printf("%d ",sum);
//         i++;
//     }
//     printf("\n调用次数为%d次\n",count);
//     return 0;
// }

//第二种方法使用形参

// #include <stdio.h>

// int add(int n)
// {
//     return ++n;//不能n++；
// }

// int main()
// {
//     int i=0;
//     int num=0;
//     while(i<3)
//     {
//         num=add(num);
//         printf("%d ",num);
//         i++;
//     }
//     return 0;
// }

//第三种方法使用全局变量

#include <stdio.h>

int add()
{
    static int count=0;
    count++;
    return;//不能n++；
}

int main()
{
    int i=0;
    int a=0;
    while(i<3)
    {
        a=add(i);
        printf("%d ",a);
        i++;
    }
    return 0;
}