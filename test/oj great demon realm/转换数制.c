#include <stdio.h>
#include <string.h>

char convert(int num)
{
    char word[6]={'A','B','C','D','E','F'};
    return word[num-10];
}
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

int main()
{
    int input=0;
    int nary=0;
    scanf("%d%d",&input,&nary);
    char word[100]={0};
    int count=0;
    while(input)
    {
        int num=input%nary;
        char temp=0;
        if(num>=10)
        {
            temp=convert(num);
        }
        else
        {
            temp=num+'0';
        }
        word[count++]=temp;
        input/=nary;
    }
    word[count]='\0';
    reverse(word);
    puts(word);
    return 0;
}