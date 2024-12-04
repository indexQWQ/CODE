#include <stdio.h>

//第一代
// void strcpy_mine(char *dest,char *src)
// {
//     while(*src !='\0')
//     {
//         *dest++=*src++;
//     }
//     *dest=*src;
// }

//第二代
// #include <assert.h>
// void strcpy_mine(char *dest,const char *src)
// {
//     //断言
//     assert(src!=NULL);
//     assert(dest!=NULL);

//     while(*dest++=*src++)
//     {
//         ;
//     }
// }

//第三代
#include <assert.h>
//为什么返回char*:为了实现链式访问
//strcpy_mine返回的是目标空间的起始地址
char* strcpy_mine(char *dest,const char *src)//const 使src不能被修改
{
    char *ret=dest;
    //断言
    assert(src!=NULL);
    assert(dest!=NULL);

    while(*dest++=*src++)
    {
        ;
    }
    return ret;
}
int main()
{
    char arr1[20]="xxxxxxxxxxx";
    char arr2[]="hello world";
    //char *p=NULL;
    strcpy_mine(arr1,arr2);
    // printf("%s\n",arr1);
    printf("%s\n",strcpy_mine(arr1,arr2));//当加了char*之后就能实现链式访问
    return 0;
}