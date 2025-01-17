// 有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
// 请编写程序在这样的矩阵查找某个数字是否存在
// 时间复杂度小于o(N)
// 1 2 3
// 4 5 6
// 7 8 9
#include <stdio.h>

// typedef struct  point
// {
//     int x;
//     int y;
// }point;
// point find_num(int arr[3][3],int r,int c,int k)
// {
//     int x=0;
//     int y=c-1;
//     point p={-1,-1};
//     while(y>=0 && x<r)
//     if(k<arr[x][y])
//     {
//         y--;
//     }
//     else if(k>arr[x][y])
//     {
//         x++;
//     }
//     else
//     {
//         p.x=x;
//         p.y=y;
//         return p;
//     }
//     return p;
// }
// int main()
// {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int k=0;
//     scanf("%d",&k);
//     point ret=find_num(arr,3,3,k);
//     printf("%d %d",ret.x,ret.y);
//     return 0;
// }



// 返回型参数
int find_num(int arr[3][3],int* pr,int *pc,int k)
{
    int x=0;
    int r=*pr;
    int c=*pc;
    int y=c-1;
    while(y>=0 && x<r)
    if(k<arr[x][y])
    {
        y--;
    }
    else if(k>arr[x][y])
    {
        x++;
    }
    else
    {
        *pr=x;
        *pc=y;
        return 1;
    }
    return 0;
}
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int k=0;
    scanf("%d",&k);
    int x=3;
    int y=3;
    int ret=find_num(arr,&x,&y,k);
    printf("%d \n%d %d\n",ret,x,y);
    return 0;
}