// 检查两字符串是否相互为旋转结果

#include <stdio.h>
#include <string.h>
// int is_revolve(char *s1,char *s2)
// {
//     int len=strlen(s1);
//     while(len--)
//     {
//         char temp=*s1;
//         char *ret=s1;
//         while(*(ret+1))
//         {
//             *ret=*(ret+1);
//             ret++;
//         }
//         *ret=temp;
//         if(strcmp(s1,s2)==0)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }


// 使用库函数的方法
int is_revolve(char *s1,char *s2)
{
    int len=strlen(s1);
    int len2=strlen(s2);
    if(len!=len2)
    {
        return 0;
    }
    strncat(s1,s1,len);
    if(strstr(s1,s2)==NULL)
        return 0;
    else
        return 1;
}
int main()
{
    char arr[22]="asdfghj";
    char arr2[22]="ghjasdf";
    if(is_revolve(arr,arr2))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}