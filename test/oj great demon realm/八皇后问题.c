#include <stdio.h>

void my_scanf(int (*arr)[8])
{
    int i=0;
    for(i=0;i<8;i++)
    {
        int j=0;
        for(j=0;j<8;j++)
        {
            scanf("%d",&(*(*(arr+i)+j)));
        }
    }
}
int fill(int (*arr)[8],int n,int m)
{
    int i=0;
    *(*(arr+n)+m)=0;
    for(i=0;i<8;i++)
    {
        int j=0;
        for(j=0;j<8;j++)
        {
            if(i+j==n+m || i-j==n-m || i==n || j==m)
            {
                if(*(*(arr+i)+j)==1)
                {
                    return 1;
                }
            }
        }
    }
    *(*(arr+n)+m)=1;
    return 0;
}
int main()
{
    int arr[8][8]={0};
    my_scanf(arr);
    int flag=1;
    int i=0;
    for(i=0;i<8;i++)
    {
        int j=0;
        for(j=0;j<8;j++)
        {
            if(arr[i][j]==1 && fill(arr,i,j)==1)
            {
                flag=0;
                goto end;
            }
        }
    }
end:
    // for(i=0;i<8;i++)
    // {
    //     int j=0;
    //     for(j=0;j<8;j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    if(flag)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}