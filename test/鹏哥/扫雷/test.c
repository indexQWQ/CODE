#include <stdio.h>

#include "allgame.h"
void menu()
{
    printf("*********************\n");
    printf("****1.play 2.exit****\n");
    printf("*********************\n");
}

void game()
{
    char mine[ROWS][COLS]={0};
    char show[ROWS][COLS]={0};
    //初始化数组的内容为指定的内容
    initboard(mine,ROWS,COLS,'0');
    //displayboard(mine,ROW,COL);
    initboard(show,ROWS,COLS,'*');
    //设置雷
    setmine(mine,ROW,COL);
    //displayboard(mine,ROW,COL);
    displayboard(show,ROW,COL);
    //排查雷
    findmine(mine,show,ROW,COL);
}
int main()
{
    srand((unsigned int)time(NULL));
    int input=0;
    do
    {
        menu();
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            printf("开始游戏\n");
            game();
            break;
        case 2:
            printf("退出游戏\n");
            break;
        default:
            printf("输入错误\n");
            break;
        }
    } while (input);
    
    return 0;
}