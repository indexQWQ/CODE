// #include <stdio.h>

// //全局变量，静态变量都是放在静态区
// //全局变量，静态变量不初始化的时候，默认会被初始化为0
// //局部变量，不初始化，默认值是随机值

// int i;
// int main()
// {
//     i--;
//     //sizeof这个操作符计算返回的结果是size_t类型的，是无符号整型的
//     if(i>sizeof(i))//unsigned int类型大于int类型，进行算术转换 所以不是(-1>4)而是(2^32>4)
//     {
//         printf(">\n");
//     }
//     else
//     {
//         printf("<\n");
//     }
//     return 0;
// }