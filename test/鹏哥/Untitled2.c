#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    int count=0;
    while(EOF!=scanf("%c",&arr[count]))
    {
        count++;
    }
    int i=0;
    int count1=0;
    for(i=0;i<count-count1-1;i++)
    {
        if(arr[i]>'0' && arr[i]<'9')
        {
            if(i<count-count1-2)
            {
                int j=0;
                for(j=i;j<count-2;j++)
                {
                    arr[j]=arr[j+1];
                }
                i-=1;
            }
            count1++;
        }
    }
    for(i=0;i<count-count1-1;i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}