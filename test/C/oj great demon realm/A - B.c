#include <stdio.h>
#include <string.h>
void reverse(char *arr)
{
    int len=strlen(arr);
    char temp=*arr;
    *arr=*(arr+len-1);
    *(arr+len-1)='\0';
    if(len>2)
    {
        reverse(arr+1);
    }
    *(arr+len-1)=temp;
}
void sub(char *s1,char *s2,char *s3,int len1,int len2)
{
    int flag=0;
    int i=0;
    int count=0;
    for(i=0;i<len1;i++)
    {
        int num1=(*(s1+i)-'0')-flag;
        int num2=0;
        if(i<len2)
            num2=(*(s2+i)-'0');
        if(num1<num2)
        {
            flag=1;
            *(s3+count)=num1+10-num2+'0';
            count++;
        }
        else
        {
            flag=0;
            *(s3+count)=num1-num2+'0';
            count++;
        }
        *(s3+count)='\0';
    }
}
void quling(char *s3) 
{
    int len = strlen(s3);
    int i = 0;
    while (i < len && s3[i] == '0') 
    {
        i++;
    }
    if (i == len) 
    {
        s3[0] = '0';
        s3[1] = '\0';
    } else 
    {
        memmove(s3, s3 + i, len - i + 1);
    }
}
int main()
{
    char s1[100]={0};
    char s2[100]={0};
    char s3[100]={0};
    scanf("%s",s1);
    scanf("%s",s2);
    int len1=strlen(s1);
    int len2=strlen(s2);
    reverse(s1);
    reverse(s2);
    sub(s1,s2,s3,len1,len2);
    reverse(s3);
    quling(s3);
    printf("%s\n",s3);
    return 0;
}