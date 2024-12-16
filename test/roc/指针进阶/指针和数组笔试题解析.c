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

int main()
{
     //字符数组
    char arr[] = {'a','b','c','d','e','f'};
    printf("%d\n", sizeof(arr));//6
    printf("%d\n", sizeof(arr+0));//4or8
    printf("%d\n", sizeof(*arr));//1
    printf("%d\n", sizeof(arr[1]));//1
    printf("%d\n", sizeof(&arr));//4or8
    printf("%d\n", sizeof(&arr+1));//4or8
    printf("%d\n", sizeof(&arr[0]+1));//4or8

    printf("%d\n", strlen(arr));//random number
    // strlen(arr)中arr 表示首元素地址
    printf("%d\n", strlen(arr+0));//random number
    printf("%d\n", strlen(*arr));//--->strlen('a')--->strlen(97)
    // size_t strlen(const char* str)所以传给strlen的应该是一个地址
    printf("%d\n", strlen(arr[1]));
    printf("%d\n", strlen(&arr));
    printf("%d\n", strlen(&arr+1));
    printf("%d\n", strlen(&arr[0]+1));
    return 0;
}

// int main()
// {
//     char arr[] = "abcdef";
//     printf("%d\n", sizeof(arr));
//     printf("%d\n", sizeof(arr+0));
//     printf("%d\n", sizeof(*arr));
//     printf("%d\n", sizeof(arr[1]));
//     printf("%d\n", sizeof(&arr));
//     printf("%d\n", sizeof(&arr+1));
//     printf("%d\n", sizeof(&arr[0]+1));
//     printf("%d\n", strlen(arr));
//     printf("%d\n", strlen(arr+0));
//     printf("%d\n", strlen(*arr));
//     printf("%d\n", strlen(arr[1]));
//     printf("%d\n", strlen(&arr));
//     printf("%d\n", strlen(&arr+1));
//     printf("%d\n", strlen(&arr[0]+1));
//     char *p = "abcdef";
//     printf("%d\n", sizeof(p));
//     printf("%d\n", sizeof(p+1));
//     printf("%d\n", sizeof(*p));
//     printf("%d\n", sizeof(p[0]));
//     printf("%d\n", sizeof(&p));
//     printf("%d\n", sizeof(&p+1));
//     printf("%d\n", sizeof(&p[0]+1));
//     printf("%d\n", strlen(p));
//     printf("%d\n", strlen(p+1));
//     printf("%d\n", strlen(*p));
//     printf("%d\n", strlen(p[0]));
//     printf("%d\n", strlen(&p));
//     printf("%d\n", strlen(&p+1));
//     printf("%d\n", strlen(&p[0]+1));
//     return 0;
// }
