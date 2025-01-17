#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100]={0},*s=s1;
    char c[100]={0};
    int index=0;
    gets(s);
    while(*s!='\0')
    {
        if(*s==' ')
        {
            strcat(c,"%20");
            index+=3;
        }
        else
        {
            c[index++]=*s;
        }   
        s++;
    }
    c[index]='\0';
    puts(c);
    return 0;
}