// #include <stdio.h>
// #include <string.h>

// #define ROW 100
// #define COL 100

// int caculate(char mine[ROW][COL], int x, int y,int h,int w) 
// {
//     if(x<0 || x>w-1 || y<0 || y>h-1)
//     {
//         return -1;
//     }
//     int count=mine[x-1][y-1]+mine[x-1][y]+mine[x-1][y+1]+mine[x][y-1]+mine[x][y+1]+mine[x+1][y-1]+mine[x+1][y]+mine[x+1][y+1]-8*'0';
//     return count;
// }

// // 递归查找周围的方块
// void allfind(char mine[ROW][COL], char show[ROW][COL], int visited[ROW][COL], int x, int y, int h, int w) 
// {
//     // 边界检查
//     if (x<0 || x>w-1 || y<0 || y>h-1 || visited[x][y]) 
//     {
//         return;
//     }
    
//     visited[x][y] = 1;  // 标记为已访问

//     // 获取周围地雷的数量
//     int count = caculate(mine, x, y,h,w);
    
//     if (count == 0) 
//     {
//         show[x][y] = '_';  // 若周围地雷数量为0，显示为'_'
//     }
//     else if(count==-1)
//     {
//         return ;
//     } 
//     else 
//     {
//         show[x][y] = count + '0';  // 显示周围雷的数量
//     }
    
//     // 递归调用周围的方块
//     allfind(mine, show, visited, x - 1, y - 1, h, w);
//     allfind(mine, show, visited, x - 1, y, h, w);
//     allfind(mine, show, visited, x - 1, y + 1, h, w);
//     allfind(mine, show, visited, x, y - 1, h, w);
//     allfind(mine, show, visited, x, y + 1, h, w);
//     allfind(mine, show, visited, x + 1, y - 1, h, w);
//     allfind(mine, show, visited, x + 1, y, h, w);
//     allfind(mine, show, visited, x + 1, y + 1, h, w);
// }

// void findboom(char mine[ROW][COL],char show[ROW][COL],int h,int w,int x,int y)
// {
//     if(mine[x][y]=='1')
//     {
//         int i=0;
//         for(i=0;i<h;i++)
//         {
//             int j=0;
//             for(j=0;j<w;j++)
//             {
//                 if(mine[i][j]=='0')
//                 {
//                     show[i][j]='#';
//                 }
//                 else if(mine[i][j]=='1')
//                 {
//                     show[i][j]='*';
//                 }
//             }
//         }
//         show[x][y]='x';
//     }
//     else
//     {
//         int arr[ROW][COL];
//         memset(arr,0,sizeof(arr));
//         allfind(mine,show,arr,x,y,h,w);
//         if(caculate(mine,x,y,h,w)==0)
//         {
//             show[x][y]='_';
//         }
//         else
//         {
//             show[x][y]=caculate(mine,x,y,h,w)+'0';
//         }
//     }
// }

// void scan(char mine[ROW][COL],int h,int w)
// {
//     int i=0;
//     for(i=0;i<h;i++)
//     {
//         int j=0;
//         for(j=0;j<w;j++)
//         {
//             char ch=0;
//             scanf("%c",&ch);
//             if(ch=='*')
//             {
//                 mine[i][j]='1';
//             }
//         }
//         getchar();
//     }
// }
// void displayboard(char arr[ROW][COL],int h,int w)
// {
//     int i=0;
//     for(i=0;i<h;i++)
//     {
//         int j=0;
//         for(j=0;j<w;j++)
//         {
//             printf("%c",arr[i][j]);
//         }
//         putchar('\n');
//     }
// }
// int main()
// {
//     char mine[ROW][COL];
//     char show[ROW][COL];
//     int h=0,w=0;
//     scanf("%d %d",&h,&w);
//     getchar();
//     memset(mine,'0',sizeof(mine));
//     memset(show,'#',sizeof(show));
//     //displayboard(show,h,w);
//     scan(mine,h,w);
//     int x=0,y=0;
//     scanf("%d %d",&y,&x);
//     findboom(mine,show,h,w,x,y);
//     displayboard(show,h,w);
//     //displayboard(mine,h,w);
//     return 0;
// }


#include <stdio.h>
#include <string.h>

#define ROW 100
#define COL 100

int caculate(char mine[ROW][COL], int x, int y, int h, int w) 
{
    if (x < 0 || x > w - 1 || y < 0 || y > h - 1)
    {
        return -1;
    }
    int count = 0;
    for (int i = -1; i <= 1; i++) 
    {
        for (int j = -1; j <= 1; j++) 
        {
            int nx = x + i;
            int ny = y + j;
            if (nx >= 0 && nx < w && ny >= 0 && ny < h) 
            {
                count += mine[nx][ny] - '0';
            }
        }
    }
    return count;
}

void allfind(char mine[ROW][COL], char show[ROW][COL], int visited[ROW][COL], int x, int y, int h, int w) 
{
    if (x < 0 || x > w - 1 || y < 0 || y > h - 1 || visited[x][y]) 
    {
        return;
    }
    
    visited[x][y] = 1;  // 标记为已访问

    int count = caculate(mine, x, y, h, w);
    
    if (count == 0) 
    {
        show[x][y] = '_';  // 若周围地雷数量为0，显示为'_'
    }
    else 
    {
        show[x][y] = count + '0';  // 显示周围雷的数量
        return;  // 如果周围有雷，不再递归
    }
    
    // 递归调用周围的方块
    for (int i = -1; i <= 1; i++) 
    {
        for (int j = -1; j <= 1; j++) 
        {
            allfind(mine, show, visited, x + i, y + j, h, w);
        }
    }
}

void findboom(char mine[ROW][COL], char show[ROW][COL], int h, int w, int x, int y)
{
    if (mine[x][y] == '1')
    {
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (mine[i][j] == '0')
                {
                    show[i][j] = '#';
                }
                else if (mine[i][j] == '1')
                {
                    show[i][j] = '*';
                }
            }
        }
        show[x][y] = 'x';
    }
    else
    {
        int arr[ROW][COL];
        memset(arr, 0, sizeof(arr));
        allfind(mine, show, arr, x, y, h, w);
        if (caculate(mine, x, y, h, w) == 0)
        {
            show[x][y] = '_';
        }
        else
        {
            show[x][y] = caculate(mine, x, y, h, w) + '0';
        }
    }
}

void scan(char mine[ROW][COL], int h, int w)
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            char ch;
            scanf(" %c", &ch);  // 使用空格跳过换行符
            if (ch == '*')
            {
                mine[i][j] = '1';
            }
            else
            {
                mine[i][j] = '0';
            }
        }
    }
}

void displayboard(char arr[ROW][COL], int h, int w)
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            printf("%c", arr[i][j]);
        }
        putchar('\n');
    }
}

int main()
{
    char mine[ROW][COL];
    char show[ROW][COL];
    int h = 0, w = 0;
    scanf("%d %d", &h, &w);
    getchar();
    memset(mine, '0', sizeof(mine));
    memset(show, '#', sizeof(show));
    scan(mine, h, w);
    int x = 0, y = 0;
    scanf("%d %d", &y, &x);
    findboom(mine, show, h, w, x, y);
    displayboard(show, h, w);
    return 0;
}