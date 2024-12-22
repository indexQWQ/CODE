#include <stdio.h>
#include <string.h>
#include <ctype.h>
void reverse(char *pw)
{
    int len=strlen(pw);
    char temp=*pw;
    *pw=*(pw+len-1);
    *(pw+len-1)='\0';
    if(len-1>1)
    {
        reverse(pw+1);
    }
    *(pw+len-1)=temp;
}
int main()
{
    int count[100]={0};
    char word[2048]={0};
    char neword[5000]={0};
    gets(word);
    int len=strlen(word);
    int i=0;
    int j=0;
    for(i=0;i<len;i++)
    {
        if(isalpha(word[i]))
        {
            int count1=0;
            int index=word[i]-'0';
            int num=++count[index];
            char n[10];
            while(num)
            {
                n[count1]=num%10+'0';
                count1++;
                num/=10;
            }
            n[count1]='\0';
            //puts(n);
            reverse(n);
            neword[j]=word[i];
            strcat(neword,n);
            //puts(neword);
            j+=count1+1;
        }
        else
        {
            neword[j]=' ';
            j++;
        }
    }
    reverse(neword);
    puts(neword);
    return 0;
}