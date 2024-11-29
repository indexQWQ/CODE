#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100]={0};
    char arr1[100]={0};
    scanf("%s",arr);
    int len=strlen(arr);
    //printf("%d",len);
    int i=0,count=0;
    int flag=1;
    for(i=0;i<len;i++)
    {
        arr1[count]=arr[i];
        count++;
        int j=0;
        for(j=0;j<len;j+=count)
        {
            if(strncpy(arr+j,arr1,count)!=0)
            {
                flag=0;
            }
        }
        if(flag)
        {
            break;
        }
    }
    printf("%d\n",count);
    return 0;
}