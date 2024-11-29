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
    
    for(i=0;i<len;i++)
    {
        int flag=1;
        arr1[count]=arr[i];
        count++;
        int j=0;
        for(j=0;j<len;j+=count)
        {
            if(strncmp(arr+j,arr1,count)!=0)
            {
                flag=0;
                //count++;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }
    //printf("%s\n",arr1);
    printf("%d\n",count);
    return 0;
}