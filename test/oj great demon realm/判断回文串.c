#include <stdio.h>
#include <string.h>

int offer(char arr[])
{
    int len=strlen(arr);
    int i=0;
    for(i=0;i<len;i++)
    {
        if(arr[i]!=arr[--len])
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return -1;
}
int main()
{
    char arr[100];
    scanf("%s",arr);
    if(offer(arr))
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}