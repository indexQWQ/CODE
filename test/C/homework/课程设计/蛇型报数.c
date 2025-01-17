#include <stdio.h>
#include <string.h>

int main()
{
    int n=0,m=0,k=0,count=1;
    int team[100][100]={0};
    scanf("%d%d%d",&n,&m,&k);
    int i=0;
    for(i=0;i<n;i++)
    {
        int j=0;
        for(j=0;j<m;j++,count++)
        {
            if(count>k)
            {
                count=1;
            }
            team[i][j]=count;
        }
    }
    for(i=0;i<n;i++)
    {
        int j=0;
        if(i%2==0)
        {
            for(j=0;j<m;j++)
            {
                printf("%d ",team[i][j]);
            }
        }
        else
        {
            for(j=m-1;j>=0;j--)
            {
                printf("%d ",team[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}