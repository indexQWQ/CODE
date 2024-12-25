#include <stdio.h>
#include <string.h>
#define NUM 100
#define COLAR 100
typedef struct Point
{
	int x;
	int y;
}point;
typedef struct Calor
{
	point date[COLAR];
	int count;
}colar;
// 输入
void my_scanf(int (*arr)[NUM],int n,int m,colar *type)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		int j=0;
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
			(type[arr[i][j]].date)[type[arr[i][j]].count].x=j;
			(type[arr[i][j]].date)[type[arr[i][j]].count].y=i;
			//printf("%d %d\n",(type[arr[i][j]].date)[type[arr[i][j]].count].x,(type[arr[i][j]].date)[type[arr[i][j]].count].y);
			type[arr[i][j]].count++;
		}
	}
}
//计算距离
int caculate_s(int x1,int y1,int x2,int y2)
{
	return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}
//传给qsort
int sort_bynum(const void *e1, const void *e2 )
{
	return *((int *)e1)-*((int *)e2);
}
//功能写完//有问题
int find_max(colar *type)
{
    int max_distance = 0;
    for (int i = 0; i < COLAR; i++)
    {
        if (type[i].count >= 2)
        {
            int min_x = type[i].date[0].x;
            int max_x = type[i].date[0].x;
            int min_y = type[i].date[0].y;
            int max_y = type[i].date[0].y;
            for (int j = 1; j < type[i].count; j++)
            {
                if (type[i].date[j].x < min_x)
                    min_x = type[i].date[j].x;
                if (type[i].date[j].x > max_x)
                    max_x = type[i].date[j].x;
                if (type[i].date[j].y < min_y)
                    min_y = type[i].date[j].y;
                if (type[i].date[j].y > max_y)
                    max_y = type[i].date[j].y;
            }
            int distance = caculate_s(min_x, min_y, max_x, max_y);
            if (distance > max_distance)
            {
                max_distance = distance; 
            }
        }
    }
    return max_distance;
}
int main()
{
	int arr[NUM][NUM]={0};
	int n=0,m=0;
	scanf("%d%d ",&n,&m);
	colar type[COLAR]={0};
	my_scanf(arr,n,m,type);
	int max=find_max(type);
	printf("%d\n",max);
	return 0;
}
