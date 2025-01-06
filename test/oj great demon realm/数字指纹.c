#include <stdio.h>
#include <string.h>

int main()
{
    char arr[400]={0};
    fgets(arr,400,stdin);
    int len=strlen(arr);
    arr[len-1]='\0';
    int i=0;
    int count=0;
    for(i=0;i<len-1;i+=4)
    {
        char copy[5]={0};
        strncpy(copy,arr+i,4);
        int j=0;
        int sum=0;
        for(j=0;j<4;j++)
        {
            if(copy[j]=='\0')
                copy[j]=' ';
            sum=sum+(copy[j]<<(24-8*j));
        }
        if(i==0)
            count=sum;
        else
            count^=sum;
    }
    printf("%X\n",count);
    return 0;
}