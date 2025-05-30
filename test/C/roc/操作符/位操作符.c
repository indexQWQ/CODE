#include <stdio.h>

//& 按（二进制）位与  1 1为1  0 0为0  0 1为0
//| 按（二进制）位或  1 1为1  0 0为0  0 1为1
//^ 按（二进制）位异或 相同为0相异为1  1 1为0  0 0为0  0 1为1
//~ 按（二进制）位取反

// & 按（二进制）位与
// int main()
// {
//     int a=3;
//     int b=-5;
//     int c=a&b;
//     printf("a&b=%d\n",c);  
//     return 0;
// }
//输出：a&b=3

//a=2
//原码 0000 0000 0000 0000 0000 0000 0000 0011 
//反码 0000 0000 0000 0000 0000 0000 0000 0011 
//补码 0000 0000 0000 0000 0000 0000 0000 0011

//b=-5
//原码 1000 0000 0000 0000 0000 0000 0000 0101 
//反码 1111 1111 1111 1111 1111 1111 1111 1010 
//补码 1111 1111 1111 1111 1111 1111 1111 1011

//a&b=3
//  3的补码 0000 0000 0000 0000 0000 0000 0000 0011
// -5的补码 1111 1111 1111 1111 1111 1111 1111 1011
//a&b的补码 0000 0000 0000 0000 0000 0000 0000 0011

//&的运算规则：
//1. 两个操作数都是1，则结果为1；
//2. 两个操作数都是0，则结果为0；
//3. 两个操作数有一个是1一个是0，则结果为0；

//| 按（二进制）位或
// int main()
// {
//     int a=3;
//     int b=-5;
//     int c=a|b;
//     printf("a|b=%d\n",c);  
//     return 0;
// }
//a | b=-5
//  3的补码 0000 0000 0000 0000 0000 0000 0000 0011
// -5的补码 1111 1111 1111 1111 1111 1111 1111 1011
//a|b的补码 1111 1111 1111 1111 1111 1111 1111 1011
//a|b的反码 1111 1111 1111 1111 1111 1111 1111 1010
//a|b的原码 1000 0000 0000 0000 0000 0000 0000 0101

//|的运算规则：
//1. 两个操作数都是1，则结果为1；
//2. 两个操作数都是0，则结果为0；
//3. 两个操作数有一个是1一个是0，则结果为1；

//^ 按（二进制）位异或
int main()
{
    int a=3;
    int b=-5;
    int c=a^b;
    printf("a^b=%d\n",c);  
    return 0;
}
//结果
//a^b=-8
//  3的补码 0000 0000 0000 0000 0000 0000 0000 0011
// -5的补码 1111 1111 1111 1111 1111 1111 1111 1011
//a^b的补码 1111 1111 1111 1111 1111 1111 1111 1000
//a^b的反码 1111 1111 1111 1111 1111 1111 1111 0111
//a^b的原码 1000 0000 0000 0000 0000 0000 0000 1000

//^的运算规则：
//1. 两个操作数相同，则结果为0；
//2. 两个操作数不同，则结果为1；