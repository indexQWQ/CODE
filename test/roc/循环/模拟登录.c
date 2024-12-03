// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//     for (int i = 1; i <=3; i++)
//     {
//         printf("请输入密码：");
//         char password[10];
//         scanf("%s", password);
//         if (strcmp(password, "123456") == 0)//strcmp函数用来比较两个字符串是否相等
//         {
//             printf("密码正确！\n");
//             break;
//         }
//         else
//         {
//             printf("密码错误！\n");
//         }
//     }
//     return 0;
// }


#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    char password[]={0};
    int i=0;
    for(i=0;i<3;i++)
    {
        system("cls");
        printf("请输入密码：");
        scanf("%s",password);
        int judge=strcmp(password,"123456");
        if(judge==0)
        {
            printf("正确");
            break;
        }
        else
        {
            printf("错误 还有%d次机会\n",(2-i));
        }
        Sleep(1000);
    }
    return 0;
}