
#include "allgame.h"
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
    printf("***********************\n");
    printf("*****1.play 2.exit*****\n");
    printf("***********************\n");
}

void game()
{
    char ch=0;
    char board[ROW][COL]= {0};
    initboard(board, ROW, COL);//初始棋盘
    displayboard(board,ROW,COL);//展示棋盘
    //下棋
    while(1)
    {
        player_move(board);//玩家移动
        //判断输赢
        ch=iswin(board,ROW,COL);
        if(ch!='C')
        {
            break;
        }
        displayboard(board,ROW,COL);
        
        computer_move(board,ROW,COL);
        //判断输赢
        ch=iswin(board,ROW,COL);
        if(ch!='C')
        {
            break;
        }
        displayboard(board,ROW,COL);
    }
    if(ch=='*')
    {
        printf("玩家赢\n");
    }
    else if(ch=='#')
    {
        printf("电脑赢\n");
    }
    else
    {
        printf("平局\n");
    }
    displayboard(board,ROW,COL);
    //判断输赢
    //玩家赢 '*'
    //电脑赢 '#'
    //平局 'Q'
    //继续 'C'
}

int main()
{
    srand((unsigned int)time(NULL));//随机数起点
    int input=0;
    do
    {
        menu();
        printf("please input your choice:");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                printf("play game\n");
                system("cls");
                Sleep(100);
                game();
                break;
            case 2:
                printf("exit game\n");
                break;
            default:
                printf("invalid input\n");
                break;
        }
        break;
    }while(1);
    return 0;
}