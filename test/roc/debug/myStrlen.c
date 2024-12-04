#include <stdio.h>
#include <assert.h>
int my_strlen(const char *str)//使字符串数据不会被修改
{
    int len=0;
    assert(str!=NULL);//断言
    while(*(str++) && ++len)
    {
        ;
    }
    return len;
}
int main()
{
    char arr[]="hello world";
    int len=my_strlen(arr);
    printf("%d\n",len);
    return 0;
}

//ctrl+f 搜索