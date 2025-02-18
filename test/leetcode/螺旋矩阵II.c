#include <stdlib.h>

int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) 
{
    * returnSize=n;
    * returnColumnSizes=(int *)malloc(sizeof(int)*n);
    int **p=(int **)malloc(sizeof(int*)*n);
    for(int i=0;i<n;i++)
    {
        p[i]=(int *)malloc(sizeof(int)*n);
        (*returnColumnSizes)[i] = n;
    }
    int loop=n/2;
    int startx=0,starty=0;
    int count=1;
    int offset=1;
    while(loop)
    {
        int i=startx,j=starty;
        for(;j<startx+n-offset;j++)
        {
            p[i][j]=count++;
        }
        for(;i<starty+n-offset;i++)
        {
            p[i][j]=count++;
        }
        for(;j>startx;j--)
        {
            p[i][j]=count++;
        }
        for(;i>starty;i--)
        {
            p[i][j]=count++;
        }
        offset+=2;
        startx++;
        starty++;
        loop--;
    }
    if(n%2)
    {
        p[n/2][n/2]=count;
    }
    return p;
}