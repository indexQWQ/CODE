#include <stdio.h>
#include <string.h>

int main()
{
    char ch[5] = {'a', 'b', 'c', 'd'};
    //ch[5]中‘d’后面的值会被初始化为0也就是'\0'
    printf("%d\n",strlen(ch));
    char ch1[5] = "hel";
    //字符串初始化时，如果字符串长度小于数组长度，则后面用0填充
    printf("%zu\n",sizeof(ch1));
    char ch2[] = "hel";

    printf("%zu\n",sizeof(ch2));
    char ch3[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    //
    printf("%zu\n",sizeof(ch3));
    return 0;
}