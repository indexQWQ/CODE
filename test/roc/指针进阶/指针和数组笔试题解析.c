#include <stdio.h>
// // 数组名的意义：
// // 1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
// // 2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
// // 3. 除此之外所有的数组名都表示首元素的地址。
// int main()
// {
//     // 一维数组
//     int a[] = {1,2,3,4};
//     printf("%d\n",sizeof(a));//16
//     printf("%d\n",sizeof(a+0));//4or8
//     // a不是单独放在sizeof()内部,a==&a[0],就相当于首元素的地址
//     printf("%d\n",sizeof(*a));//4
//     // *a中的a是数组是数组首元素的地址，*a就是对首元素的地址解引用
//     printf("%d\n",sizeof(a+1));//4or8
//     printf("%d\n",sizeof(a[1]));//4
//     printf("%d\n",sizeof(&a));//4or8
//     // &a取出的是数组的地址，数组的地址也是一个地址
//     // 但是在早期的编译器中是16，这可能是给bug
//     printf("%d\n",sizeof(*&a));//16
//     // 可以理解为*和&抵消了
//     // &a---->得到的int(*)[4]类型的指针
//     // 而指针的类型决定了在解引用时候有多大的访问权限
//     // 因为&a得到是一个整形数组的指针，所以解引用时访问一个数组
//     // *&a---->a  
//     printf("%d\n",sizeof(&a+1));//4or8
//     // &a得到一个数组的地址，数组的地址加一跳过一个数组
//     // (&a+1)是从数组a的地址向后跳过一个(四个整型元素的)数组的大小
//     // 而这个(&a+1)地址已经越界了
//     printf("%d\n",sizeof(&a[0]));//4or8
//     // &a[0]就是第一个元素的地址
//     printf("%d\n",sizeof(&a[0]+1));//4or8
//     // &a[0]+1 第二个元素的地址
//     // &a[0]+1---->&a[1]
//     return 0;
// }

// int main()
// {
//      //字符数组
//     char arr[] = {'a','b','c','d','e','f'};
//     printf("%d\n", sizeof(arr));//6
//     printf("%d\n", sizeof(arr+0));//4or8
//     printf("%d\n", sizeof(*arr));//1
//     printf("%d\n", sizeof(arr[1]));//1
//     printf("%d\n", sizeof(&arr));//4or8
//     printf("%d\n", sizeof(&arr+1));//4or8
//     printf("%d\n", sizeof(&arr[0]+1));//4or8
//     printf("------------------------\n");
//     printf("%d\n", strlen(arr));//random number
//     // strlen(arr)中arr 表示首元素地址
//     printf("%d\n", strlen(arr+0));//random number

//     //printf("%d\n", strlen(*arr));//err//--->strlen('a')--->strlen(97),相当于97作为地址，变成野指针
//     // size_t strlen(const char* str)所以传给strlen的应该是一个地址
//     //printf("%d\n", strlen(arr[1]));//err//--->strlen('b')
//     //低地址是内核使用的所以会报错，高地址才是提供给用户使用的
//     //我们现在在c语言里面看到地址的基本上都是虚拟地址，而虚拟地址最后还要经过硬件和软件的计算才能转换为物理地址

//     printf("%d\n", strlen(&arr));//random number
//     // 类型为char (*)[6],虽然与上面strlen(arr)中的arr类型不一样，但是
//     //传入strlen后都是一个字节一个字节的查找
//     printf("%d\n", strlen(&arr+1));//random number-6
//     printf("%d\n", strlen(&arr[0]+1));//random number-1
//     return 0;
// }

// int main()
// {
//     //字符数组
//     char arr[] = "abcdef";
//     // char arr[]={'a','b','c','d','e','f','\0'}
//     printf("%d\n", sizeof(arr));//7
//     printf("%d\n", sizeof(arr+0));//4or8
//     printf("%d\n", sizeof(*arr));//1
//     printf("%d\n", sizeof(arr[1]));//1
//     printf("%d\n", sizeof(&arr));//4or8
//     printf("%d\n", sizeof(&arr+1));//4or8
//     printf("%d\n", sizeof(&arr[0]+1));//4or8
//     printf("----------\n");
//     // strlen--库函数:是求字符串长度的关注的是‘\0’,计算的是'\0'之前出现的字符串的长度
//     // 所使用的步长与所传地址的类型有关
//     // sizeof--操作符:只关注占用内存的空间的大小，不在乎内存里面放的是什么

//     printf("%d\n", strlen(arr));//6
//     printf("%d\n", strlen(arr+0));//6
//     //printf("%d\n", strlen(*arr));//err
//     //printf("%d\n", strlen(arr[1]));//err
//     printf("%d\n", strlen(&arr));//6
//     printf("%d\n", strlen(&arr+1));//random number
//     printf("%d\n", strlen(&arr[0]+1));//5

//     char *p = "abcdef";
//     printf("%d\n", sizeof(p));//4or8
//     printf("%d\n", sizeof(p+1));//4or8
//     printf("%d\n", sizeof(*p));//1
//     printf("%d\n", sizeof(p[0]));//1
//     printf("%d\n", sizeof(&p));//4or8
//     // &p是一个二级指针
//     printf("%d\n", sizeof(&p+1));//4or8
//     printf("%d\n", sizeof(&p[0]+1));//4or8
//     // p[0]-->'a',&('a')+1-->'b'的地址
//     printf("%d\n", strlen(p));//6
//     printf("%d\n", strlen(p+1));//5
//     //printf("%d\n", strlen(*p));//err
//     //printf("%d\n", strlen(p[0]));//err
//     printf("%d\n", strlen(&p));//random number
//     printf("%d\n", strlen(&p+1));//random number与上面的随机值无关系
//     printf("%d\n", strlen(&p[0]+1));//5
//     return 0;
// }

// int main()
// {
//     //二维数组
//     int a[3][4] = {0};
//     printf("%d\n",sizeof(a));//48
//     printf("%d\n",sizeof(a[0][0]));//4
//     printf("%d\n",sizeof(a[0]));//16
//     // a[0]是第一行这个一维数组的数组名，单独放在sizeof内部，a[0]表示第一个整个这个的一维数组
//     // 可以将a[0]理解为数组名
//     // 类比 int a[4] 和 int a[0][4]
//     printf("%d\n",sizeof(a[0]+1));//4or8
//     // a[0]并没有单独放在sizeof内部，也没有取地址，a[0]就表示首元素的地址
//     // (a[0]+1)就是第一行的一维数组的第一个元素的地址
//     printf("%d\n",sizeof(*(a[0]+1)));//4
//     printf("%d\n",sizeof(a+1));//4or8
//     // a虽然是二维数组的地址，但是并没有单独放在sizeof中，也没有取地址
//     // 所以a表示首元素的地址，二维数组的首元素是它的第一行的地址
//     printf("%d\n",sizeof(*(a+1)));//16
//     // *(a+1)是对第二行地址的解引用，拿到的是第二行
//     // *(a+1)-->a[1]
//     printf("%d\n",sizeof(&a[0]+1));//4or8
//     printf("%d\n",sizeof(*(&a[0]+1)));//16
//     printf("%d\n",sizeof(*a));//16
//     printf("%d\n",sizeof(a[3]));//16
//     // sizeof只要知道类型就知道是几个字节
//     return 0;
// }



//笔试题1：
// int main()
// {
//     int a[5] = { 1, 2, 3, 4, 5 };
//     int *ptr = (int *)(&a + 1);
//     printf( "%d,%d", *(a + 1), *(ptr - 1));
//     return 0;
// }//2，5

//笔试题2
// //由于还没学习结构体，这里告知结构体的大小是20个字节
// struct Test
// {
//     int Num;
//     char *pcName;
//     short sDate;
//     char cha[2];
//     short sBa[4];
// }*p=(struct Test*)0x100000;
// //假设p 的值为0x100000。 如下表表达式的值分别为多少？
// //已知，结构体Test类型的变量大小是20个字节//x86
// int main()
// {
//     printf("%p\n", p + 0x1);//0X100014
//     printf("%p\n", (unsigned long)p + 0x1);//0x100001
//     printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//     // 
//     return 0;
// }

// //笔试题3
//  int main()
//  {
//  int a[4] = { 1, 2, 3, 4 };
//  int *ptr1 = (int *)(&a + 1);
//  int *ptr2 = (int *)((int)a + 1);
//  printf( "%x,%x", ptr1[-1], *ptr2);//4,02000000
//  return 0;
//  }

//笔试题4
// #include <stdio.h>
// int main()
// {
//     int a[3][2] = { (0, 1), (2, 3), (4, 5) };//O.o
//     int *p;
//     p = a[0];
//     printf( "%d", p[0]);//1
//     return 0;
// }

//笔试题5
//  int main()
// {
//     int a[5][5];
//     int(*p)[4];
//     p = a;
//     printf( "%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//     return 0;//fffffffc,-4//x86
// }

//笔试题6
//  int main()
// {
//     int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//     int *ptr1 = (int *)(&aa + 1);
//     int *ptr2 = (int *)(*(aa + 1));
//     printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
//     return 0;
// }

//笔试题7
#include <stdio.h>
int main()
{
    char *a[] = {"work","at","alibaba"};
    char* *pa = a;
    pa++;
    printf("%s\n", *pa);
    return 0;
}