#include <stdio.h>
// 联合也是一种特殊的自定义类型
// 这种类型定义的变量也包含一系列的成员，特征是这些成员共用同一块空间（所以联合也叫共用体）。
// 比如：
//联合类型的声明
// union Un
// {
//     char c;
//     int i;
// };
// int main()
// {
//     //联合变量的定义
//     union Un un;
//     //计算连个变量的大小
//     printf("%d\n",(int)sizeof(un));
//     printf("%p\n%p\n%p\n",&un,&un.c,&un.i);
//     return 0;
// }

//  联合的特点 
// 联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小（因为联
// 合至少得有能力保存最大的那个成员）。
// union Un
// {
//     int i;
//     char c;
// };
// union Un un;
// int main()
// {
//     // 下面输出的结果是一样的吗？
//     printf("%d\n", &(un.i));
//     printf("%d\n", &(un.c));
//     //下面输出的结果是什么？
//     un.i = 0x11223344;
//     un.c = 0x55;
//     printf("%x\n", un.i);
//     return 0;
// }
// 判断大小端
// int ckeck_sys()
// {
//     union un
//     {
//         int a;
//         char c;
//     }u;
//     u.a=1;
//     return u.c;
// }

// int main()
// {
//     if(ckeck_sys()==1)
//     {
//         printf("小端\n");
//     }
//     else
//     {
//         printf("大端\n");
//     }
// }
// 联合大小的计算 
// 联合的大小至少是最大成员的大小。
// 当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。
// 比如：
union Un1
{
    char c[5];
    int i;
};
struct n1
{
    char c[5];
    int i;
};
union Un2
{
short c[7];
int i;
};
int main()
{
    //下面输出的结果是什么？
    printf("%d\n",(int) sizeof(union Un1));
    printf("%d\n",(int) sizeof(union Un2));
    printf("%d\n",(int) sizeof(struct n1));
    return 0;
}