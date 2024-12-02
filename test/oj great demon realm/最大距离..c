// #include <stdio.h>
// #include <string.h>

// #define ROW 100
// #define COL 100

// typedef struct
// {
//     int x,y;
// }point;

// void scan(int arr[ROW][COL],int n,int m)
// {
//     int i=0;
//     for(i=0;i<n;i++)
//     {
//         int j=0;
//         for(j=0;j<m;j++)
//         {
//             scanf("%d",arr[i][j]);
//         }
//     }
// }
// void jishu(point *arr1[ROW][COL],int count [], int arr[ROW][COL],int n,int m)
// {
//     int i=0;
//     for(i=0;i<n;i++)
//     {
//         int j=0;
//         for(j=0;j<m;j++)
//         {
//             count[arr[i][j]]++;
//             arr1[i][j]->x=i+1;
//             arr1[i][j]->y=j+1;
//         }
//     }
// }
// int main()
// {
//     int arr[ROW][COL];
//     int count[ROW*COL]={0};
//     point arr1[ROW][COL];
//     memset(arr,0,sizeof(arr));
//     int n=0,m=0;
//     scanf("%d%d",&n,&m);
//     jishu(arr1,count,arr,n,m);
//     int i=0;
//     for(i=0;i<n;i++)
//     {
//         int j=0;
//         for(j=0;j<m;j++)
//         {
            
//         }
//     }
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

#define MAX_COLORS 1000  // 假设颜色的最大值不超过1000
#define MAX_POINTS 10000 // 假设每个颜色的点数不超过10000

typedef struct 
{
    int x, y;
} Point;

int max(int a, int b) 
{
    return a > b ? a : b;
}

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);

    int image[n][m];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &image[i][j]);
        }
    }

    // 记录每个颜色的点的坐标
    Point points[MAX_COLORS][MAX_POINTS];
    int count[MAX_COLORS] = {0};

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            int color = image[i][j];
            points[color][count[color]].x = i;
            points[color][count[color]].y = j;
            count[color]++;
        }
    }

    // 计算相同颜色点的最大平方距离
    int max_distance = 0;
    for (int color = 0; color < MAX_COLORS; color++) 
    {
        if (count[color] > 1) {
            for (int i = 0; i < count[color]; i++) 
            {
                for (int j = i + 1; j < count[color]; j++) 
                {
                    int dx = points[color][i].x - points[color][j].x;
                    int dy = points[color][i].y - points[color][j].y;
                    int distance = dx * dx + dy * dy;
                    max_distance = max(max_distance, distance);
                }
            }
        }
    }

    printf("%d\n", max_distance);

    return 0;
}