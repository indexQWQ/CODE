#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
// malloc和free
// C语言提供了一个动态内存开辟的函数：
// void* malloc (size_t size);
// 这个函数向内存申请一块连续可用的空间，并返回指向这块空间的指针。
// 如果开辟成功，则返回一个指向开辟好空间的指针。
// 如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
// 返回值的类型是void* ，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定。
// 如果参数size 为0，malloc的行为是标准是未定义的，取决于编译器。
// INT_MAX整型最大
// 区别变长数组
// int main()
// {
//     //int arr[10]={0};
//     // 动态开辟内存
//     int *p=(int*)malloc(40);
//     if(p==NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;//有异常返回1
//     }
//     //使用
//     int i=0;
//     for(i=0;i<10;i++)
//     {
//         *(p+i)=i;
//     }
//     for(i=0;i<10;i++)
//     {
//         printf("%d\n",*(p+i));
//     }
//     // 如果申请的内存一直没用也没有free就有可能会内存泄漏
//     // 没有free
//     // 并不是说内存空间就不会回收了
//     // 当程序退出的时候，系统会自动回收内存的空间
//     return 0;
// }
// int main()
// {
//     //int arr[10]={0};
//     // 动态开辟内存
//     int *p=(int*)malloc(40);
//     if(p==NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;//有异常返回1
//     }
//     //使用
//     int i=0;
//     for(i=0;i<10;i++)
//     {
//         *(p+i)=i;
//     }
//     for(i=0;i<10;i++)
//     {
//         printf("%d\n",*(p+i));
//     }
//     free(p);// 调试输入p,10可以观察十个整型
//     //free 只能把申请的内存还给系统，但是p里面还是存了地址的
//     p=NULL;
//     return 0;
// }
// 栈区：局部变量，形式参数
// 堆区：malloc calloc realloc free
// 静态区：static 全局变量
// C语言提供了另外一个函数free，专门是用来做动态内存的释放和回收的，函数原型如下：
// void free (void* ptr);
//  free函数用来释放动态开辟的内存。
// 如果参数ptr指向的空间不是动态开辟的，那free函数的行为是未定义的。
// 如果参数ptr是NULL指针，则函数什么事都不做。


// calloc
// C语言还提供了一个函数叫calloc ，calloc 函数也用来动态内存分配。原型如下：
// void* calloc (size_t num, size_t size);
// 函数的功能是为num 个大小为size 的元素开辟一块空间，并且把空间的每个字节初始化为0。
// 与函数malloc 的区别只在于calloc 会在返回地址之前把申请的空间的每个字节(初始化为全0)。
// 举个例子：
// 开辟10个整型的空间
// int main()
// {
//     int *p=(int *)calloc(10,sizeof(int));
//     if(p==NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;
//     }
//     // 打印
//     int i=0;
//     for(i=0;i<10;i++)
//     {
//         printf("%d\n",*(p+i));
//     }
//     free(p);
//     p=NULL;
//     return 0;
// }

// realloc
// realloc函数的出现让动态内存管理更加灵活。
// 有时会我们发现过去申请的空间太小了，有时候我们又会觉得申请的空间过大了，那为了合理的时
// 候内存，我们一定会对内存的大小做灵活的调整。那的调整。
// 函数原型如下：
// void* realloc (void* ptr, size_t size);
//  realloc 函数就可以做到对动态开辟内存大小
//  ptr 是要调整的内存地址
// size 调整之后新大小
// 返回值为调整之后的内存起始位置。
// 这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间。
// realloc在调整内存空间的是存在两种情况：
// 情况1：原有空间之后有足够大的空间
// 情况2：原有空间之后没有足够大的空间
// 情况1
// 当是情况1 的时候，要扩展内存就直接原有内存之后直接追加空间，原来空间的数据不发生变化。
// 情况2
// 当是情况2 的时候，原有空间之后没有足够多的空间时，扩展的方法是：在堆空间上另找一个合适大小
// 的连续空间来使用。这样函数返回的是一个新的内存地址。
// 由于上述的两种情况，realloc函数的使用就要注意一些。
// 举个例子：
// int main()
// {
//     int *p=malloc(40);
//     if(p==NULL)
//     {
//         printf("%s\n",strerror(errno));
//         return 1;
//     }
//     // 使用
//     // 1 2 3 4 5 6 7 8 9 10
//     int i=0;
//     for(i=0;i<10;i++)
//     {
//         *(p+i)=i+1;
//     }
//     // 扩容
//     int *ptr=realloc(p,80);
//     if(ptr!=NULL)
//     {
//         p=ptr;
//     }
//     for(i=0;i<10;i++)
//     {
//         *(p+i)=i+1;
//     }
//     free(p);
//     p=NULL;
//     return 0;
// }
int main()
{
    int *p=realloc(NULL,40);//相当于malloc(40);
    if(p==NULL)
    {
        printf("%s\n",strerror(errno));
        return 1;
    }
    // 使用
    // 1 2 3 4 5 6 7 8 9 10
    int i=0;
    for(i=0;i<10;i++)
    {
        *(p+i)=i+1;
    }
    // 扩容
    int *ptr=realloc(p,80);
    if(ptr!=NULL)
    {
        p=ptr;
    }
    for(i=0;i<10;i++)
    {
        *(p+i)=i+1;
    }
    free(p);
    p=NULL;
    return 0;
}
// 内存池