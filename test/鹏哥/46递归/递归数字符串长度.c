//编写函数不允许创建临时变量，求字符串的长度

#include <stdio.h>

int my_strlen(char *str)
{
    if(*str=='\0')//限制条件，字符串末尾的'\0'
    {
        return 0;
    }
    return 1+my_strlen(str+1);//接近限制条件
    //++str会改变arr[]字符串//尾递归优化
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

////int my_strlen(char *str[])//参数部分写成数组的形式
// int my_strlen(char *str)//参数部分写成指针的形式
// {
//     int count =0;//创建临时变量count
//     while(*str!='\0')
//     {
//         count++;
//         str++;//找下一个字符
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