#include "allgame.h"
#include <time.h>
#include <stdlib.h>
void initboard(char arr[ROWS][COLS],int rows,int cols,char set)
{
    int i=0;
    for(i=0;i<rows;i++)
    {
        int j=0;
        for(j=0;j<cols;j++)
        {
            arr[i][j]=set;
        }
    }
}

void displayboard(char arr[ROWS][COLS],int row,int col)
{
    int i=0;
    printf("-------------------\n");
    printf("  ");
    int k=0;
    for(k=1;k<=col;k++)
    {
        printf("%d ",k);
    }
    printf("\n");
    for(i=1;i<=row;i++)
    {
        printf("%d ",i);
        int j=0;
        for(j=1;j<=col;j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    printf("-------------------\n");
}

void setmine(char arr[ROWS][COLS],int row,int col)
{
    int i=0;
    for(i=0;i<BOMB;i++)
    {
        int x=rand()%row+1;
        int y=rand()%col+1;
        if(arr[x][y]=='0')
        {
            arr[x][y]='1';
        }
        else
        {
            continue;
            i-=1;
        }
    }
}

void findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    printf("请输入要排查的坐标：\n");
    int x=0,y=0;
    scanf("")
}