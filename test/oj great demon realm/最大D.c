#include <stdio.h>
#include <string.h>
#include <ctype.h>
int find(int *arr,int i,int j)
{
    while(i<=j)
    {
        if(arr[i]>arr[j])
        {
            return 1;
        }
        else if(arr[i]<arr[j])
        {
            return 2;
        }
        i++,j--;
    }
    return 0;
}
// 1j2j3j4j5j6j4j4j2j1   1244654321
void caculate(int *arr,int len,int *big,int *len2)
{
    int i=0,j=len-1;
    for(i=0;i<len && j>=0;)
    {
        if(arr[i]>arr[j])
        {
            big[(*len2)++]=arr[i++];
        }
        else if(arr[i]<arr[j])
        {
            big[(*len2)++]=arr[j--];
        }
        else
        {
            int flag=find(arr,i+1,j-1);
            if(flag==1)
            {
                big[(*len2)++]=arr[i++];
            }
            else if(flag==2)
            {
                big[(*len2)++]=arr[j--];
            }
            else
            {
                big[(*len2)++]=arr[i++];
            }
        }
    }
}
int main()
{
    char arr[100]={0};
    scanf("%s",arr);
    int len=strlen(arr);
    //printf("%d",len);
    int sum[100]={0};
    int count=0,count1=0,i=0,big[100]={0};
    for(i=0;i<len;i++)
    {
        if(!isalpha(arr[i]))
        {
            sum[count++]=(arr[i]-'0');
        }
    }
    // for(i=0;i<count;i++)
    // {
    //     printf("%d",sum[i]);
    // }putchar('\n');
    caculate(sum,count,big,&count1);
    for(i=0;i<count;i++)
    {
        printf("%d",big[i]);
    }
    if(count==0)
    {
        printf("0\n");
    }
    return 0;
}
