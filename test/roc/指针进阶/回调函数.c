// 回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个
// 函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数
// 的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进
// 行响应。


//qsort
// void qsort( void *base,
//             size_t num, 
//             size_t width, 
//             int (__cdecl*compare )(const void *elem1, const void *elem2 ) );
// __cdecl-->函数调用约定 可以简化一下
// void qsort( void *base,// 你要排序的数据的起始位置
//             size_t num, //待排序的数据元素的大小
//             size_t width, // 待排序的数据元素的大小(单位字节)
//             int (*cmp )(const void *e1, const void *e2 ) );//函数指针--比较函数

// #include <stdio.h>
// #include <stdlib.h>
//  //qosrt函数的使用者得实现一个比较函数
// int int_cmp(const void * p1, const void * p2)
// {
//     return (*( int *)p2 - *(int *) p1);
// }
// // void* 是无类型的指针，可以接受任意类型的地址
// // void* 是无具体类型的指针，所以不能解引用操作，也不能+-整数0
// void bubble_sort(int arr[],int len)//这种排序只能排整型
// {
//     int i=0;
//     for(i=0;i<len-1;i++)
//     {
//         int flag=1;
//         int j=0;
//         for(j=0;j<len-1-i;j++)
//         {
//             if(arr[j]>arr[j+1])//比较
//             {
//                 flag=0;
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//         if(flag)
//         {
//             break;
//         }
//     }
// }
// int main()
// {
//     int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//     int i = 0;
//     qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
//     //bubble_sort(arr,10);
//     int ze=sizeof(arr) / sizeof(arr[0]);
//     for (i = 0; i< ze; i++)
//     {
//         printf( "%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// 使用qsort排序结构数据
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// typedef struct person
// {
//     char name[10];
//     int age;
// }pop;

// int cmp_pop_byname(const void*p1,const void*p2)
// {
//     return strcmp(((pop *)p1)->name,((pop *)p2)->name);
// }
// int cmp_pop_age(const void*p1,const void*p2)
// {
//     return (((pop *)p1)->age-((pop *)p2)->age);
// }
// void test()
// {
//     pop arr[]={{"zhangsan",12},{"lisi",13},{"wangwu",19}};
//     int ze=sizeof(arr)/sizeof(arr[0]);
//     qsort(arr,ze,sizeof(pop),cmp_pop_byname);
//     int i=0;
//     for(i=0;i<3;i++)
//     {
//         printf("%s %d\n",arr[i].name,arr[i].age);
//     }
// }
// int main()
// {
//     test();
//     return 0;
// }

// 将冒泡排序改写成泛型
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct person
{
    char name[10];
    int age;
}pop;
void Swap(char *b1,char *b2,int width)
{
    int i=0;
    for(i=0;i<width;i++)
    {
        char temp=*b1;
        *b1=*b2;
        *b2=temp;
    }
}
void bubble_sort(void *arr,int len,int width,int(*cmp)(const void *p1,const void *p2))//这种排序只能排整型
{
    int i=0;
    for(i=0;i<len-1;i++)
    {
        int flag=1;
        int j=0;
        for(j=0;j<len-1-i;j++)
        {
            if(cmp(((char *)arr+j*width),((char*)arr+(j+1)*width)))//比较
            {
                flag=0;
                Swap(((char *)arr+j*width),((char*)arr+(j+1)*width),width);
            }
        }
        if(flag)
        {
            break;
        }
    }
}
int cmp_pop_age(const void*p1,const void*p2)
{
    return (((pop *)p1)->age-((pop *)p2)->age);
}
void test()
{
    pop arr[]={{"zhangsan",12},{"lisi",13},{"wangwu",19}};
    int ze=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,ze,sizeof(pop),cmp_pop_age);
    int i=0;
    for(i=0;i<3;i++)
    {
        printf("%s %d\n",arr[i].name,arr[i].age);
    }
}
int main()
{
    test();
    return 0;
}