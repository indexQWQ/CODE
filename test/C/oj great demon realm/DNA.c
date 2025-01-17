#include <stdio.h>
int main()
{
    char ch;
    int i=0;
    char str[10000];
    while((str[i]=getchar())!='\n')
    {
        putchar(str[i]);
        i++;
    }
    putchar('\n');
    for(int j=0;j<i;j++)
    {
        putchar('|');
    }
    putchar('\n');
    int j=0;
    while((ch=str[j])!='\n')
    {
        switch(ch)
        {
            case 'A':
            case 'a':
                putchar('T');
                break;
            case 'T':
            case 't':
                putchar('A');
                break;
            case 'C':
            case 'c':
                putchar('G');
                break;
            case 'G':
            case 'g':
                putchar('C');
                break;
            default:
                putchar(ch);
                break;
        }
        j++;
    }
    return 0;
}