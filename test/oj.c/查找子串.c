#include <stdio.h>
#include <string.h>

void judje(char *s1,char s2[])
{
    int len1=strlen(s1);
    int len2=strlen(s2);
    int i=0;
    int flag=1;
    for(i=0;i<=len1-len2;i++)
    {
        if(strncmp(s1+i,s2,len2)==0)
        {
            flag=0;
            printf("%d\n",i);
        }
    }
    if(flag)
    {
        printf("none\n");
    }
}
int main()
{
    char s1[100];
    char s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    judje(s1,s2);
    return 0;
}