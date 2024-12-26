#include <stdio.h>
#include <string.h>

void reverse(char *arr)
{
    int len=strlen(arr);
    char temp=*arr;
    *arr=*(arr+len-1);
    *(arr+len-1)='\0';
    if(len>2)
    {
        reverse(arr+1);
    }
    *(arr+len-1)=temp;
}
int main()
{
    int n=0,m=0,k=0,count=1;
    char team[100][100]={0};
    scanf("%d%d%d",&n,&m,&k);
    int i=0;
    for(i=0;i<n;i++)
    {
        int j=0;
        for(j=0;j<m;j++,count++)
        {
            if(count==4)
            {
                count=1;
            }
            team[i][j]=count+'0';
        }
        if(i%2==1)
        {
            reverse(team[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        printf(team[i]);
        printf("\n");
    }
    return 0;
}