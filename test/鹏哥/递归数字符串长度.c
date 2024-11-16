//编写函数不允许创建临时变量，求字符串的长度

#include <stdio.h>

int my_strlen(char *str)
{
    int count =0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}
int main()
{
    char arr[]="abcd";
    int len=my_strlen(arr);
    printf("%d",len);
    return 0;
}
//下面的是使用while循环计算的
// #include <stdio.h>

// int my_strlen(char *str)//chan
// {
//     int count =0;
//     while(*str!='\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }
// int main()
// {
//     char arr[]="abcd";
//     int len=my_strlen(arr);
//     printf("%d",len);
//     return 0;
// }


// #include <stdio.h>
// int strlen(char *str) 
// {
    
//     if(*str !='\0')
//     {
//         return 1+strlen(++str);
//     }
    
// }
// int main() 
// {
//     char str[100];
//     printf("请输入字符串：");
//     scanf("%s",str);
//     printf("字符串长度为：%d",strlen(&str));
//     return 0;
// }