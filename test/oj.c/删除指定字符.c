#include <stdio.h>
#include <string.h>
void delete_char( char a[], char c )
{
    int len=strlen(a);
    int i=0;
    for(i=0;i<len-1;i++)
    {
        if(c==a[i])
        {
            int j=0;
            for(j=i;j<len-1;j++)
            {
                a[j]=a[j+1];
            }
            len--;
            i--;
        }
    }
    if(c==a[len-1])
    {
        a[len-1]='\0';
    }
    a[len]='\0';
}
int main()
{
    char a[]="aabaacaa";
    char c='a';
    delete_char( a, c );
    printf("%s\n",a);
    return 0;
}