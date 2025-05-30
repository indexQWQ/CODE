#include <stdio.h>
#include <stdlib.h>
#include "allgame.h"

void initboard(char board[ROW][COL],int row,int col)
{
    int i=0,j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            board[i][j]=' ';
        }
    }
}

void displayboard(char board[ROW][COL],int row,int col)
{
    int i=0;
    for(i=0;i<row;i++)
    {
        int j=0;
        for(j=0;j<col;j++)
        {
            printf(" %c ",board[i][j]);
            if(j<col-1)
            {
                printf("|");
            }
        }
        printf("\n");
        if(i<row-1)
        {
            int k=0;
            for(k=0;k<col;k++)
            {
                printf("---");
                if(k<col-1)
                    printf("|");
            }
            printf("\n");
        }
       
    }
}

void player_move(char board[ROW][COL])//,int row,int col
{
    int x=0,y=0;
    printf("玩家移动：\n");
    while(1)
    {
        printf("请输入坐标：");
        scanf("%d %d",&x,&y);
        if(x>=1 && x<=COL && y>=1 && y<=ROW)
        {
            if(board[x-1][y-1]==' ')
            {
                board[x-1][y-1]='*';
                break;
            }
            else
            {
                printf("位置被占用,请重新输入\n");
            }
        }
        else
        {
            printf("输入错误，请重新输入\n");
        }
    }
}

void computer_move(char board[ROW][COL],int row,int col)
{
    printf("电脑下棋......\n");
    int x=0,y=0;
    while(1)
    {
        x=rand()%row;
        y=rand()%col;
        if(board[x][y]==' ')
        {
            board[x][y]='#';
            break;
        }
    }
}

int isfull(char board[ROW][COL],int row,int col)
{
    int i=0;
    for(i=0;i<row;i++)
    {
        int j=0;
        for(j=0;j<col;j++)
        {
            if(board[i][j]==' ')
            {
                return 0;
            }
        }
    }
    return 1;
}
//判断输赢
char iswin(char board[ROW][COL],int row,int col)
{
    //行
    //第一代
    // int i=0;
    // for(i=0;i<row;i++)
    // {
    //     if(board[i][0]==board[i][1] &&board[i][1]==board[i][2] && board[i][0]!=' ')
    //     {
    //         return board[i][0];
    //     }
    // }

    int i=0;
    for(i=0;i<row;i++)
    {
        int flag=0;
        char refer=board[i][0];
        int j=0;
        for(j=1;j<col;j++)
        {
            if(refer != board[i][j])
            {
                flag=0;//不加不行
                break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag && refer!=' ')
        {
            return refer;
        }
    }
    //列
    //第一代
    // int j=0;
    // for(j=0;j<col;j++)
    // {
    //     if(board[0][j]==board[1][j] && board[1][j]==board[2][j] && board[0][j]!=' ')
    //     {
    //         return board[0][j];
    //     }
    // }

    int j=0;
    for(j=0;j<col;j++)
    {
        int flag=0;
        char refer=board[0][j];
        int i=0;
        for(i=1;i<row;i++)
        {
            if(refer != board[i][j])
            {
                flag=0;//不加不行
                break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag && refer!=' ')
        {
            return refer;
        }
    }
    //对角线
    //第一代
    // if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!=' ')
    // {
    //     return board[0][0];
    // }
    // if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!=' ')
    // {
    //     return board[0][2];
    // }

    //局限性：只能是等边的棋盘
    int flag=0;
    char refer=board[0][0];
    for(i=1;i<row;i++)
    {
        
        if(refer != board[i][i])
        {
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
    }
    if(flag && refer!=' ')
    {
        return refer;
    }

    char refer1=board[0][col-1];
    for(i=row-1;i>=0;i--)
    {
        
        if(refer1 != board[i][-i+row-1])
        {
            flag=0;
            break;
        }
        else
        {
            flag=1;
        }
    }
    if(flag && refer1!=' ')
    {
        return refer1;
    }
    //没有人赢
    if(isfull(board,row,col))
    {
        return 'Q';
    }
    //游戏继续
    return 'C';
}
//第一代
// void displayboard(char board[ROW][COL],int row,int col)
// {
//     int i=0;
//     for(i=0;i<row;i++)
//     {
//         printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//         if(i<row-1)
//             printf("---|---|---\n");
//     }
// }


// #ifdef __cplusplus
// extern "C" {
// #endif

// #ifdef __cplusplus// 防止 C++ 编译器报错
// }
// #endif