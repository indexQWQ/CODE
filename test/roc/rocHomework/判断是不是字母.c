#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch=0;
    while(scanf(" %c",&ch)==1)//%c前面的空格有下面getchar的作用
    //跳过下一个字符之前的所有空白字符
    {
        if(isalpha(ch))//判断是不是字母
        {
            printf("%c是字母\n",ch);
        }
        else
        {
            printf("%c不是字母\n",ch);
        }
        //getchar();
    }
    return 0;
}
// a
// 6

