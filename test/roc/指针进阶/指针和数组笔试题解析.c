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

int main()
{
    //字符数组
    char arr[] = "abcdef";
    // char arr[]={'a','b','c','d','e','f','\0'}
    printf("%d\n", sizeof(arr));//7
    printf("%d\n", sizeof(arr+0));//4or8
    printf("%d\n", sizeof(*arr));//1
    printf("%d\n", sizeof(arr[1]));//1
    printf("%d\n", sizeof(&arr));//4or8
    printf("%d\n", sizeof(&arr+1));//4or8
    printf("%d\n", sizeof(&arr[0]+1));//4or8
    printf("----------\n");
    // strlen--库函数:是求字符串长度的关注的是‘\0’,计算的是'\0'之前出现的字符串的长度
    // 所使用的步长与所传地址的类型有关
    // sizeof--操作符:只关注占用内存的空间的大小，不在乎内存里面放的是什么

    printf("%d\n", strlen(arr));//6
    printf("%d\n", strlen(arr+0));//6
    //printf("%d\n", strlen(*arr));//err
    //printf("%d\n", strlen(arr[1]));//err
    printf("%d\n", strlen(&arr));//6
    printf("%d\n", strlen(&arr+1));//random number
    printf("%d\n", strlen(&arr[0]+1));//5

    char *p = "abcdef";
    printf("%d\n", sizeof(p));//4or8
    printf("%d\n", sizeof(p+1));//4or8
    printf("%d\n", sizeof(*p));//1
    printf("%d\n", sizeof(p[0]));//1
    printf("%d\n", sizeof(&p));//4or8
    // &p是一个二级指针
    printf("%d\n", sizeof(&p+1));//4or8
    printf("%d\n", sizeof(&p[0]+1));//4or8
    // p[0]-->'a',&('a')+1-->'b'的地址
    printf("%d\n", strlen(p));//6
    printf("%d\n", strlen(p+1));//5
    printf("%d\n", strlen(*p));//err
    printf("%d\n", strlen(p[0]));//err
    printf("%d\n", strlen(&p));//random number
    printf("%d\n", strlen(&p+1));//random number-1
    printf("%d\n", strlen(&p[0]+1));//random number-1
    return 0;
}
