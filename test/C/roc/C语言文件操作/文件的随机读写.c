#include <stdio.h>
#include <string.h>
#include <errno.h>

//  fseek 
// 根据文件指针的位置和偏移量来定位文件指针。
// int fseek ( FILE * stream, long int offset, int origin );
// stream -- 这是指向 FILE 对象的指针，该 FILE 对象标识了流。
// offset -- 这是相对 whence 的偏移量，以字节为单位。
// whence -- 这是表示开始添加偏移 offset 的位置。它一般指定为下列常量之一：
// 常量	     描述
// SEEK_SET	文件的开头
// SEEK_CUR	文件指针的当前位置
// SEEK_END	文件的末尾

//  ftell 
// 返回文件指针相对于起始位置的偏移量
// long int ftell ( FILE * stream );

// rewind 
// 让文件指针的位置回到文件的起始位置
// void rewind ( FILE * stream );
int main()
{
    FILE* pf=fopen("C:\\Users\\Lenovo\\OneDrive\\desktop\\CODE1\\test\\roc\\C语言文件操作\\test.txt","r");
    if(pf==NULL)
    {
        perror("fopen");
        return 1;
    }
    // 读文件
    fseek(pf,5,SEEK_SET);
    int ch=fgetc(pf);
    printf("%c %d\n",ch,(int)ftell(pf));// pf被读后文件指针会后移 所以为6
    fseek(pf,2,SEEK_SET);
    ch=fgetc(pf);
    printf("%c %d\n",ch,(int)ftell(pf));
    fseek(pf,8,SEEK_SET);
    ch=fgetc(pf);
    printf("%c %d\n",ch,(int)ftell(pf));
    fseek(pf,10,SEEK_SET);
    ch=fgetc(pf);
    printf("%c %d\n",ch,(int)ftell(pf));
    fseek(pf,12,SEEK_SET);
    ch=fgetc(pf);
    printf("%c %d\n",ch,(int)ftell(pf));
    fseek(pf,10,SEEK_SET);
    ch=fgetc(pf);
    printf("%c %d\n",ch,(int)ftell(pf));
    //文件指针会到起始位置
    rewind(pf);
    printf("%d\n",(int)ftell(pf));
    ch=fgetc(pf);
    printf("%c %d\n",ch,(int)ftell(pf));
    // 关闭文件
    fclose(pf);
    pf=NULL;
    return 0;
}