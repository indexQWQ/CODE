#include <stdio.h>
#include <string.h>
#include <errno.h>
//  文件指针 
// 缓冲文件系统中，关键的概念是“文件类型指针”，简称“文件指针”。
// 每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息（如文件的名
// 字，文件状态及文件当前的位置等）。这些信息是保存在一个结构体变量中的。该结构体类型是有系统
// 声明的，取名FILE.
// 例如，VS2013编译环境提供的stdio.h 头文件中有以下的文件类型申明：
// struct _iobuf {
//     char *_ptr;
//     int   _cnt;
//     char *_base;
//     int   _flag;
//     int   _file;
//     int   _charbuf;
//     int   _bufsiz;
//     char *_tmpfname;
// };
// typedef struct _iobuf FILE;
// 不同的C编译器的FILE类型包含的内容不完全相同，但是大同小异。
// 每当打开一个文件的时候，系统会根据文件的情况自动创建一个FILE结构的变量，并填充其中的信息，使用者不必关心细节。
// 一般都是通过一个FILE的指针来维护这个FILE结构的变量，这样使用起来更加方便。

// 文件的打开和关闭
// 文件在读写之前应该先打开文件，在使用结束之后应该关闭文件。
// 在编写程序的时候，在打开文件的同时，都会返回一个FILE*的指针变量指向该文件，也相当于建立了指
// 针和文件的关系。
// ANSIC 规定使用fopen函数来打开文件，fclose来关闭文件。
// //打开文件
// FILE * fopen ( const char * filename, const char * mode );
//  //关闭文件
// int fclose ( FILE * stream );

int main()
{
    FILE *pf=fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\CODE1\\test\\roc\\C语言文件操作\\test.txt","w");
    if(pf==NULL)
    {
        printf("%s\n",strerror(errno));
        return 1;
    }
    fclose(pf);
    pf=NULL;
    return 0;
}