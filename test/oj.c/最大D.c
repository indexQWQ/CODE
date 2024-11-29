#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int caculate(int sum,int len)
{
    if(len==1)
    {
        return sum;
    }
    if(sum==0)
    {
        return 0;
    }
    int temp=sum;
    int reverse=0;
    while(temp>0)
    {
        reverse=reverse*10+temp%10;
        temp/=10;
    }
    if(reverse>sum)
    {
        return (sum%10)*pow(10,len-1)+caculate(sum/10,len-1);
    }
    else if(reverse<sum)
    {
        return (reverse%10)*pow(10,len-1)+caculate(reverse/10,len-1);
    }
    else
    {
        return (sum%10)*pow(10,len-1)+caculate(sum/10,len-1);
    }
    return 0;
}
int main()
{
    char arr[100]={0};
    scanf("%s",arr);
    int len=strlen(arr);
    int sum=0,count=0;
    int i=0;
    for(i=0;i<len;i++)
    {
        if(!isalpha(arr[i]))
        {
            sum=sum*10+(arr[i]-'0');
            count++;
        }
    }
    int a=caculate(sum,count);
    printf("%d",a);
    return 0;
}