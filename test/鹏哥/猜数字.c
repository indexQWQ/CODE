#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
    printf("猜数字游戏\n");
    printf("1. 开始游戏\n");
    printf("0. 退出游戏\n");
}
void game()
{
    int count=0;
    int num, guess;
    num=rand()%100+1;//生成1-100之间的随机数
    //printf("%d\n", num);
    while(1)
    {
        printf("请输入你猜的数字：");
        scanf("%d", &guess);
        if(guess==num)
        {
            system("cls");
            printf("恭喜你猜对了！\n");
            break;
        }
        else if(guess>num)
        {
            printf("猜的数字大了\n");
        }
        else
        {
            printf("猜的数字小了\n");
        }
        printf("你还有%d次机会\n", 6-count);
        count++;
        if(count==7)
        {
            system("cls");
            printf("你已经猜错了7次，游戏结束！\n");
            printf("正确答案是%d\n", num);
            break;
        }
    }
}
int main ()
{
    int choice;
    srand((unsigned int)time(NULL));//随机数种子 时间戳=当前计算机的时间-1970-01-01 00:00:00=（秒）
    do
    {
        menu();
        
        printf("请输入你的选择：");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("游戏开始\n");
            
            game();
            break;
        case 0:
            printf("游戏退出\n");
            break;
        default:
            printf("哥们你输错了\n");
            break;
        }
    }while(choice);
    return 0;
}
