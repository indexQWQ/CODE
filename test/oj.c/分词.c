#include <stdio.h>
#include <string.h>
int main()
{
    char arr[20000];
    int len=0;
    int arr1[10000]={0};
    int i=0;
    while(scanf("%s",arr)!=EOF)
    {
        len=strlen(arr);
        if(*(arr+len-1)=='.' || *(arr+len-1)==',' ||*(arr+len-1)==';' ||*(arr+len-1)==':')
        {
            *(arr+len-1)='\0';
        }
        len=strlen(arr);
        arr1[i]=len;
        i++;
    }
    int j=0;
    for(j=0;j<10000;j++)
    {
        if(arr1[j]!=0)
        {
            printf("%d ",arr1[j]);
        }
    }
    return 0;
}