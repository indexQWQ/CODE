#include <stdio.h>
int strlen(char *str) 
{
    
    if(*str !='\0')
    {
        return 1+strlen(++str);
    }
    
}
int main() 
{
    char str[100];
    printf("请输入字符串：");
    scanf("%s",str);
    printf("字符串长度为：%d",strlen(&str));
    return 0;
}