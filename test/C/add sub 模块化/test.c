
#include <stdio.h>

#include "comen.h"

int main() 
{
    int a = 10, b = 20; // 定义变量
    int c = add(a, b); // 调用 Add 函数
    int d = sub(a, b); // 调用 Sub 函数
    printf("The sum of %d and %d is %d\n", a, b, c); // 输出结果
    printf("The difference between %d and %d is %d\n", a, b, d); // 输出结果
    
    return 0;
}
