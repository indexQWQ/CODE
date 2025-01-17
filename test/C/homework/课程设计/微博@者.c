#include <stdio.h>
#include <ctype.h>

int main()
{
    char word[1000]={0};
    fgets(word,1000,stdin);
    char *p=word;
    while(*p!='\0')
    {
        if(*p=='@')
        {
            p++;
            int flag=0;
            while(isalpha(*p))
            {
                printf("%c",*p++);
                flag=1;
            }
            if(flag)
            {
                printf("\n");
            }
            continue;
        }
        p++;
    }
    return 0;
}