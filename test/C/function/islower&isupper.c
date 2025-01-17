#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch=0;
    while(scanf("%c",&ch)!=EOF)
    {
        if(islower(ch))
        {
            printf("%c\n",toupper(ch));
        }
        else if(isupper(ch))
        {
            printf("%c\n",tolower(ch));
        }
    }
    return 0;
}