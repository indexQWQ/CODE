#include "allgame.h"
#include <time.h>
#include <stdlib.h>
#include <windows.h>
//初始化
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
//展示
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
//布置雷
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
            i-=1;
            continue;
        }
    }
}
//计算x,y周围一圈有没有雷，并返回雷的数量
int caculate(char mine[ROWS][COLS],int x,int y)
{
    int count=mine[x-1][y-1]+mine[x-1][y]+mine[x-1][y+1]+mine[x][y-1]+mine[x][y+1]+mine[x+1][y-1]+mine[x+1][y]+mine[x+1][y+1]-8*'0';
    return count;
}
//实现一片功能
void allfind(char mine[ROWS][COLS],char show[ROWS][COLS],int arr[ROW][COL],int x,int y)
{
    if(arr[x][y]==0)
    {
        arr[x][y]=1;
    }
    else
    {
        return;
    }
    if(caculate(mine,x-1,y-1)==0)
    {
        show[x-1][y-1]='0'; 
    }
    else
    {
        show[x-1][y-1]=caculate(mine,x-1,y-1)+'0';
    }
    if(caculate(mine,x-1,y)==0)
    {
        show[x-1][y]='0'; 
    }
    else
    {
        show[x-1][y]=caculate(mine,x-1,y)+'0';
    }
    if(caculate(mine,x-1,y+1)==0)
    {
        show[x-1][y+1]='0'; 
    }
    else
    {
        show[x-1][y+1]=caculate(mine,x-1,y+1)+'0';
    }
    if(caculate(mine,x,y-1)==0)
    {
        show[x][y-1]='0'; 
    }
    else
    {
        show[x][y-1]=caculate(mine,x,y-1)+'0';
    }
    if(caculate(mine,x,y+1)==0)
    {
        show[x][y+1]='0'; 
    }
    else
    {
        show[x][y+1]=caculate(mine,x,y+1)+'0';
    }
    if(caculate(mine,x+1,y-1)==0)
    {
        show[x+1][y-1]='0'; 
    }
    else
    {
        show[x+1][y-1]=caculate(mine,x+1,y-1)+'0';
    }
    if(caculate(mine,x+1,y)==0)
    {
        show[x+1][y]='0'; 
    }
    else
    {
        show[x+1][y]=caculate(mine,x+1,y)+'0';
    }
    if(caculate(mine,x+1,y+1)==0)
    {
        show[x+1][y+1]='0'; 
    }
    else
    {
        show[x+1][y+1]=caculate(mine,x+1,y+1)+'0';
    }
    //递归
    if(caculate(mine,x-1,y-1)==0 && show[x-1][y-1]=='0')
    {
        allfind(mine,show,arr,x-1,y-1);
    }
    if(caculate(mine,x-1,y)==0 && show[x-1][y]=='0')
    {
        allfind(mine,show,arr,x-1,y);
    }
    if(caculate(mine,x-1,y+1)==0 && show[x-1][y+1]=='0')
    {
        allfind(mine,show,arr,x-1,y+1);
    }
    if(caculate(mine,x,y-1)==0 && show[x][y-1]=='0')
    {
        allfind(mine,show,arr,x,y-1);
    }
    if(caculate(mine,x+1,y-1)==0 && show[x+1][y-1]=='0')
    {
        allfind(mine,show,arr,x+1,y-1);
    }
    if(caculate(mine,x-1,y)==0 && show[x-1][y]=='0')
    {
        allfind(mine,show,arr,x-1,y);
    }
    if(caculate(mine,x-1,y+1)==0 && show[x-1][y+1]=='0')
    {
        allfind(mine,show,arr,x-1,y+1);
    }
}
//查找雷
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int win=0;//排雷的个数
    int arr[ROW][COL];//记录是否
    memset(arr,0,sizeof(arr));//初始化二维数组
    while(win<row*col-BOMB)
    {
        printf("请输入要排查的坐标:");
        int x=0,y=0;
        scanf("%d%d",&x,&y);
        system("cls");
        Sleep(500);
        if(x>=1 && x<=row && y>=1 && y<=col)
        {
            if(show[x][y]!='*')//排查过了
            {
                printf("排查过了\n");
                displayboard(show,ROW,COL);
                continue;
            }
            else
            {
                //如果是雷
                if(mine[x][y]=='1')
                {
                    printf("you are bomb\n");
                    displayboard(mine,ROW,COL);
                    break;
                }
                //如果不是雷
                else
                {
                    win++;
                    allfind(mine,show,arr,x,y);
                    show[x][y]=(caculate(mine,x,y)+'0');//转换成字符
                    displayboard(show,ROW,COL);
                }
            }
        }
        else
        {
            printf("输入错误，请重新输入！！！\n");
        }
    }
    if(win==row*col-BOMB)
    {
        printf("you are win!!!!!\n");
    }
}


//基础的功能扩展
//1.当排查x y时，展开一片
//（1）.该坐标不是雷（2）.该坐标周围没有雷（3）.该坐标没有被排查过
//2.标记的功能
