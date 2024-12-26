#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char word[1000]={0};
    fgets(word,1000,stdin);
    char *p=word;
    while((p=strstr(p,"@"))!=NULL)
    {
        p++;
        char copy[1000]={0};
        strcpy(copy,p);
        int flag=1;
        char *pc=strtok(copy,"@ ");
        if(pc!=NULL)
        {
            int len=strlen(pc);
            //printf("%d\n",len);
            int i=0;
            for(i=0;i<len-1;i++)
            {
                if(!isalpha(*(pc+i)))flag=0;
            }
        }
        if(flag)
        printf("%s\n",pc);
    }
    return 0;
}