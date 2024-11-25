

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char word[1000];
    int count = 0, ll = 0;
    int inWord = 0; 
    while (count < 999 && (word[count] = getchar()) != '\n') 
    {
        if (isalpha(word[count])|| isalpha(word[count]))
        {
            
            if (inWord == 0)
            {
                ll++;
                inWord = 1; 
            }
        }
        else
        {
            
            inWord = 0;
        }

        count++;
    }
    word[count] = '\0'; 
    printf("%d\n", ll);
    return 0;
}
