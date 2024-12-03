#include <stdio.h>

// 4.1 指针+-整数
// #define N_VALUES 5
// float values[N_VALUES];
// float *vp;
// //指针+-整数；指针的关系运算
// for (vp = &values[0]; vp < &values[N_VALUES];)
// {
//      *vp++ = 0;
// }

// 4.2 指针-指针
// int my_strlen(char *s)
// {
//        char *p = s;
//        while(*p != '\0' )
//               p++;
//        return p-s;
// }

// 4.3 指针的关系运算
// for(vp = &values[N_VALUES]; vp > &values[0];)
// {
//     *--vp = 0;
// }
// 代码简化, 这将代码修改如下：
// for(vp = &values[N_VALUES-1]; vp >= &values[0];vp--)
// {
//     *vp = 0;
// }
// 实际在绝大部分的编译器上是可以顺利完成任务的，然而我们还是应该避免这样写，因为标准并不保证
// 它可行。
// 标准规定：
// 允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与
// 指向第一个元素之前的那个内存位置的指针进行比较。

