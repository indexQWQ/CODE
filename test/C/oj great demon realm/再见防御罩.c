#include <stdio.h>
#include <string.h>
int main()
{
    int base[100][100]={0};
    memset(base,0,sizeof(base));
    int n=0,m=0,z=0,h=0,v=0;
    scanf("%d%d%d%d%d",&n,&m,&z,&h,&v);
    int i=0;
    for(i=0;i<z;i++)
    {
        int x,y,x1,y1;
        scanf("%d%d%d%d",&x,&y,&x1,&y1);
        int j=0;
        for(j=x-1;j<=x1-1;j++)
        {
            int z=0;
            for(z=y-1;z<=y1-1;z++)
            {
                base[j][z]=2;
            }
        }
    }
    for(i=0;i<h;i++)
    {
        int up,down;
        scanf("%d%d",&up,&down);
        int j=0;
        for(j=up-1;j<=down-1;j++)
        {
            int z=0;
            for(z=0;z<m;z++)
            {
                if(base[j][z]==0)
                    base[j][z]=1;
            }
        }
    }
    for(i=0;i<v;i++)
    {
        int left,right;
        scanf("%d%d",&left,&right);
        int j=0;
        for(j=0;j<n;j++)
        {
            int z=0;
            for(z=left-1;z<=right-1;z++)
            {
                if(base[j][z]==0)
                    base[j][z]=1;
            }
        }
    }
    int count=0;
    int j=0;
    for(j=0;j<n;j++)
    {
        int z=0;
        for(z=0;z<m;z++)
        {
            if(base[j][z]==1)
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}