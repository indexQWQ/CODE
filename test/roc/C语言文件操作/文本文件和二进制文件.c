// 根据数据的组织形式，数据文件被称为文本文件或者二进制文件。
// 数据在内存中以二进制的形式存储，如果不加转换的输出到外存，就是二进制文件。
// 如果要求在外存上以ASCII码的形式存储，则需要在存储前转换。以ASCII字符的形式存储的文件就是文本文件。
// 一个数据在内存中是怎么存储的呢？
// 字符一律以ASCII形式存储，数值型数据既可以用ASCII形式存储，也可以使用二进制形式存储。
// 如有整数10000，如果以ASCII码的形式输出到磁盘，则磁盘中占用5个字节（每个字符一个字节），而
// 二进制形式输出，则在磁盘上只占4个字节（VS2013测试）。

#include <stdio.h>
#include <errno.h>
int main()
{
    int a = 10000;
    FILE* pf = fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\CODE1\\test\\roc\\C语言文件操作\\test1.txt", "wb");
    if(pf==NULL)
    {
        perror("fopen");
        return 1;
    }
    fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
    fclose(pf);
    pf = NULL;
    return 0;
}