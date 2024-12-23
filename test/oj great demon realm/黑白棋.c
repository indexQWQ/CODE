#include <stdio.h>

typedef struct point
{
    int x;
    int y;
}point;
typedef struct ha_point
{
    point date[100];
    int count;
}have;
void my_scanf(int (*arr)[10],have *ph,int n,int m)
{
    //assert(ph);
    int i=0;
    for(i=0;i<n;i++)
    {
        int j=0;
        for(j=0;j<m;j++)
        {
            scanf("%d",&(*(*(arr+i)+j)));
            if((*(*(arr+i)+j))==1)
            {
                (ph->date)[ph->count].x=j;
                (ph->date)[ph->count].y=i;
                ph->count++;
            }
        }
    }
}
void my_printf(int (*arr)[10],int n,int m)
{
    //assert(ph);
    int i=0;
    for(i=0;i<n;i++)
    {
        int j=0;
        for(j=0;j<m;j++)
        {
            printf("%d",(*(*(arr+i)+j)));
        }
        printf("\n");
    }
}
int caculate_s(int x1,int y1,int x2,int y2)
{
    if(x1==x2)
    {
        int max=y1>y2?y1:y2;
        int min=y1<y2?y1:y2;
        return max-min-1;
    }
    else
    {
        int max=x1>x2?x1:x2;
        int min=x1<x2?x1:x2;
        return max-min-1;
    }
}
void find(int (*arr)[10],have *ph,int n,int m,int x1,int y1,int *flag)
{
    int i=0;
    for(i=0;i<ph->count;i++)
    {
        int x2=(ph->date)[i].x;
        int y2=(ph->date)[i].y;
        int s=caculate_s(x1,y1,x2,y2);
        int sum=0;
        if(x1==x2)
        {
            int max=y1>y2?y1:y2;
            int min=y1<y2?y1:y2;
            int i=0;
            for(i=min+1;i<max;i++)
            {
                sum+=(*(*(arr+i)+x1));
            }
        }
        else if(y1==y2)
        {
            int max=x1>x2?x1:x2;
            int min=x1<x2?x1:x2;
            int i=0;
            for(i=min+1;i<max;i++)
            {
                sum+=(*(*(arr+y1)+i));
            }
        }
        else
        {
            int i=0;
            for(i=0;i<n;i++)
            {
                int j=0;
                for(j=0;j<m;j++)
                {
                    if((x1-x2)*(y1-y2)>0)
                    {
                        if(j-i==x1-y1 && j>(x1<x2?x1:x2) && j<(x1>x2?x1:x2) && i>(y1<y2?y1:y2) && i<(y1>y2?y1:y2))
                        {
                            sum+=(*(*(arr+i)+j));
                        }
                    }
                    else
                    {
                        if(j+i==x1+y1 && j>(x1<x2?x1:x2) && j<(x1>x2?x1:x2) && i>(y1<y2?y1:y2) && i<(y1>y2?y1:y2))
                        {
                            sum+=(*(*(arr+i)+j));
                        }
                    }
                }
            }
        }
        if(sum==s*2)
        {
            *flag=0;
        }
        else
        {
            
            int j=0;
            for(j=i;j+1<ph->count;j++)
            {
                (ph->date)[j]=(ph->date)[j+1];
            }
            ph->count--;
        }
    }
    
}
void huan(int (*arr)[10],have *ph,int n,int m,int x1,int y1)
{
    int i=0;
    for(i=0;i<ph->count;i++)
    {
        int x2=(ph->date)[i].x;
        int y2=(ph->date)[i].y;
        if(x1==x2)
        {
            int max=y1>y2?y1:y2;
            int min=y1<y2?y1:y2;
            int i=0;
            for(i=min+1;i<max;i++)
            {
                (*(*(arr+i)+x1))=1;
            }
        }
        else if(y1==y2)
        {
            int max=x1>x2?x1:x2;
            int min=x1<x2?x1:x2;
            int i=0;
            for(i=min+1;i<max;i++)
            {
                (*(*(arr+y1)+i))=1;
            }
        }
        else
        {
            int i=0;
            for(i=0;i<n;i++)
            {
                int j=0;
                for(j=0;j<m;j++)
                {
                    if((x1-x2)*(y1-y2)>0)
                    {
                        if(j-i==x1-y1 && j>(x1<x2?x1:x2) && j<(x1>x2?x1:x2) && i>(y1<y2?y1:y2) && i<(y1>y2?y1:y2))
                        {
                            (*(*(arr+i)+j))=1;
                        }
                    }
                    else
                    {
                        if(j+i==x1+y1 && j>(x1<x2?x1:x2) && j<(x1>x2?x1:x2) && i>(y1<y2?y1:y2) && i<(y1>y2?y1:y2))
                        {
                            (*(*(arr+i)+j))=1;
                        }
                    }
                }
            }
        }
    }
    (*(*(arr+y1)+x1))=1;
}
int main()
{
    have pint;
    pint.count=0;
    int arr[10][10]={0};
    int n=0,m=0;
    int x=0,y=0;
    int flag=1;
    scanf("%d%d ",&n,&m);
    my_scanf(arr,&pint,n,m);
    scanf("%d%d",&x,&y);
    find(arr,&pint,n,m,x,y,&flag);
    huan(arr,&pint,n,m,x,y);
    if(flag)
    {
        printf("not allowed!\n");
    }
    else
    {
        my_printf(arr,n,m);
    }
    return 0;
}