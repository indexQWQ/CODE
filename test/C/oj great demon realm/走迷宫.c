#include <stdio.h>

#define LOW 100
#define ROW 100


void findexit(int (*arr)[ROW], int (*flag)[ROW], int h, int w, int x, int y)
{
    if(x<0 || x>=h || y<0 || y>=w || flag[x][y]==1)
    {
        return ;
    }
    else
    {
        flag[x][y]=1;
        arr[x][y]=1;
    }
    if(arr[x-1][y]==0)
    {
        findexit(arr,flag,h,w,x-1,y);
    }
    if(arr[x+1][y]==0)
    {
        findexit(arr,flag,h,w,x+1,y);
    }
    if(arr[x][y-1]==0)
    {
        findexit(arr,flag,h,w,x,y-1);
    }
    if(arr[x][y+1]==0)
    {
        findexit(arr,flag,h,w,x,y+1);
    }
}
int main()
{
    int h=0,w=0,beginx,beginy,endx,endy;
    int arr[LOW][ROW]={0};
    int flag[LOW][ROW]={0};
    scanf("%d%d",&h,&w);
    int i=0;
    for(i=0;i<h;i++)
    {
        int j=0;
        for(j=0;j<w;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d%d ",&beginx,&beginy);
    scanf("%d%d",&endx,&endy);
    findexit(arr,flag,h,w,beginy,beginx);
    if(arr[endy][endx]==1)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}