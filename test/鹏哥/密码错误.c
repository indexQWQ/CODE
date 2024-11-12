#include <stdio.h>
#include <string.h>
int main ()
{
    for (int i = 1; i <=3; i++)
    {
        printf("请输入密码：");
        char password[10];
        scanf("%s", password);
        if (strcmp(password, "123456") == 0)//strcmp函数用来比较两个字符串是否相等
        {
            printf("密码正确！\n");
            break;
        }
        else
        {
            printf("密码错误！\n");
        }
    }
    return 0;
}