#include <stdio.h>
int main ()
{
    int a,count=0;
    scanf("%d", &a);
    //char flag[50];
    for(int i=1;i<=a;i++)
    {
        int j;
        for( j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            printf("%d",i);
            count++;
        }
        printf("\n");
    }
    //printf("%d",flag[count]);
    return 0;
}