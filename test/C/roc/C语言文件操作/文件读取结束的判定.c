// 被错误使用的feof(当设置了与流关联的文件结束标识符时，该函数返回一个非零值，否则返回零。)
// 牢记：在文件读取过程中，不能用feof函数的返回值直接用来判断文件的是否结束。
// 而是应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束。
// 1. 文本文件读取是否结束，判断返回值是否为
// EOF （fgetc ），或者NULL （fgets ）
// 例如：
// fgetc 判断是否为EOF .
// fgets 判断返回值是否为NULL .
// 2. 二进制文件的读取结束判断，判断返回值是否小于实际要读的个数。
// 例如：
// fread判断返回值是否小于实际要读的个数。

// // 正确的使用：
// // 文本文件的例子：
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int c; // 注意：int，非char，要求处理EOF
//     FILE* fp = fopen("test.txt", "r");
//     if(!fp) 
//     {
//         perror("File opening failed");
//         return EXIT_FAILURE;
//     }
//     //fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//     while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//     { 
//         putchar(c);
//     }
//     //判断是什么原因结束的
//     if (ferror(fp))//如果ferror返回的是真，说明是读取的时候遇到了错误
//         puts("I/O error when reading");
//     else if (feof(fp))
//         puts("End of file reached successfully");
//     fclose(fp);
// }

// 二进制文件的例子：

#include <stdio.h>
enum { SIZE = 5 };
int main(void)
{
    double a[SIZE] = {1.,2.,3.,4.,5.};
    FILE *fp = fopen("test.bin", "wb"); // 必须用二进制模式
    fwrite(a, sizeof *a, SIZE, fp); // 写 double 的数组
    fclose(fp);
    double b[SIZE];
    fp = fopen("test.bin","rb");
    size_t ret_code = fread(b, sizeof *b, SIZE, fp); // 读 double 的数组
    if(ret_code == SIZE) 
    {
        puts("Array read successfully, contents: ");
        for(int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
        putchar('\n');
    }
    else 
    { // error handling
        if (feof(fp))
        printf("Error reading test.bin: unexpected end of file\n");
        else if (ferror(fp)) 
        {
            perror("Error reading test.bin");
        }
    }
    fclose(fp);
}