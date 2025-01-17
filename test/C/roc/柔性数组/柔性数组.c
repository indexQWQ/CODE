#include <stdio.h>
#include <string.h>
#include <errno.h>
// 也许你从来没有听说过柔性数组（flexible array）这个概念，但是它确实是存在的。
// C99 中，结构中的最后一个元素允许是未知大小的数组，这就叫做『柔性数组』成员。
// // 例如：
// typedef struct st_type
// {
//     int i;
//     int a[0];//柔性数组成员
// }type_a;
// // 有些编译器会报错无法编译可以改成：
// typedef struct st_type
// {
//     int i;
//     int a[];//柔性数组成员
// }type_a;

// // 柔性数组的特点： 
// // 结构中的柔性数组成员前面必须至少一个其他成员。
// // sizeof 返回的这种结构大小不包括柔性数组的内存。
// // 包含柔性数组成员的结构用malloc ()函数进行内存的动态分配，并且分配的内存应该大于结构的大
// // 小，以适应柔性数组的预期大小。
// // 例如：
// //code1
// // typedef struct st_type
// // {
// //     int i;
// //     int a[0];//柔性数组成员
// // }type_a;
// // int main()
// // {
// //     printf("%d\n",(int) sizeof(type_a));//输出的是4
// //     return 0;
// // }

// //  柔性数组的使用
// //代码1
// int main()
// {
//     int i = 0;
//     type_a *p = (type_a*)malloc(sizeof(type_a)+100*sizeof(int));
//     if(p==NULL)
//     {
//         printf("%s\n",strerror(errno));
//     }
//     //业务处理
//     p->i = 100;
//     for(i=0; i<100; i++)
//     {
//         p->a[i] = i; 
//     }
//     for(i=0; i<100; i++)
//     {
//         printf("%d ",p->a[i]); 
//     }
//     free(p);
//     p=NULL;
//     return 0;
// }
// //代码2
// typedef struct st_type
// {
//     int i;
//     int *p_a;
// }type_a;
// int main()
// {
//     type_a *p = (type_a *)malloc(sizeof(type_a));//放在堆区
//     p->i = 100;
//     p->p_a = (int *)malloc(p->i*sizeof(int));
//     //业务处理
//     int i=0;
//     for(i=0; i<100; i++)
//     {
//         p->p_a[i] = i;
//     }
//     //释放空间
//     free(p->p_a);
//     p->p_a = NULL;
//     free(p);
//     p = NULL;
//     return 0;
// }
//  上述代码1和代码2可以完成同样的功能，但是方法1的实现有两个好处：
// 第一个好处是：方便内存释放
// 如果我们的代码是在一个给别人用的函数中，你在里面做了二次内存分配，并把整个结构体返回给
// 用户。用户调用free可以释放结构体，但是用户并不知道这个结构体内的成员也需要free，所以你
// 不能指望用户来发现这个事。所以，如果我们把结构体的内存以及其成员要的内存一次性分配好
// 了，并返回给用户一个结构体指针，用户做一次free就可以把所有的内存也给释放掉。
// 第二个好处是：这样有利于访问速度.
// 连续的内存有益于提高访问速度，也有益于减少内存碎片。（其实，我个人觉得也没多高了，反正
// 你跑不了要用做偏移量的加法来寻址）