#include <stdio.h>
#include <string.h>

char convert_alpha(char *arr)
{
    int i=0,sum=0;
    int tow=8;
    for(i=0;i<4;i++)
    {
        if(arr[i]=='1')
            sum+=tow;
        tow/=2;
    }
    return 65+sum;    
}
void convert_nary(const char *arr,char *word)
{
    int len=strlen(arr);
    int i=0;
    int j=0;
    for(i=0;i<len/4;i++)
    {
        char copy[5]={0};
        strncpy(copy,arr,4);
        word[j]=convert_alpha(copy);
        //printf("%c\n",word[j]);
        j++;
        arr+=4;
    }
}
int main()
{
    char binary[50]={0};
    char word[50]={0};
    char index[10]={0};
    gets(binary);
    gets(index);
    int len=strlen(binary);
    int len2=strlen(index);
    // printf("%d %d\n",len,len2);
    convert_nary(binary,word);
    int i=0;
    int flag=0;
    int len3=strlen(word);
    for(i=0;i<len2;i++)
    {
        int num=index[i]-'0'-1;
        if(num+1>len3)
        {
            flag=1;
            break;
        }
        printf("%c",word[num]);
    }
    if(len%4!=0 || flag)
    {
        printf("Bad code!\n");
        return 0;
    }
    return 0;
}