#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define M 100
int main()
{
    char arr[M];
    scanf("%s",arr);
    int len=strlen(arr);
    int i=0;
    //printf("%d",len);
    for(i=0;i<len;i++)
    {
        
        if(!isalpha(arr[i]))
        {
            int sum=0;
            int j=i;
            while(!isalpha(arr[j]))
            {
                sum=sum*10+(arr[j]-'0');
                j++;
            }
            //printf("%d",sum);
            int k=0;
            for(k=0;k<sum;k++)
            {
                printf("%c",arr[j]);
            }
            i=j;
        }
        else
        {
            printf("%c",arr[i]);
        }
    }
    return 0;
}