#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char word[200]={0};
    int arr[200]={0};
    fgets(word,200,stdin);
    int len=strlen(word);
    //printf("%d\n",len);
    int i=0;
    for(i=0;i<len-1;i++)
    {
        if(isalpha(word[i]))
        {
            arr[(int)word[i]]++;
        }
    }
    int flag=1;
    for(i=0;i<len-1;i++)
    {
        if(arr[(int)word[i]]==1)
        {
            printf("%c",word[i]);
            flag=0;
        }
    }
    if(flag)
    {
        printf("none\n");
    }
    else
    {
        putchar('\n');
    }
    return 0;
}