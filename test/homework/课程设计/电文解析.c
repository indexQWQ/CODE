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

int index_big(char *index,int len)
{   
    int max=0;
    int i=0;
    for(i=0;i<len;i++)
    {
        int num=index[i]-'0';
        if(num>max)
            max=num;
    }
    return max;
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
    int max=index_big(index,len2);
    if(len%4!=0 || max>len/4)
    {
        printf("Bad code!\n");
        return 0;
    }
    convert_nary(binary,word);
    int i=0;
    for(i=0;i<len2;i++)
    {
        int num=index[i]-'0'-1;
        if(num>=0 && num<len/4)
        printf("%c",word[num]);
    }
    return 0;
}