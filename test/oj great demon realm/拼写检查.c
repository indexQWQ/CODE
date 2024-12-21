
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
    int l = 0;
    scanf("%d", &l) ;
    char word[1000][1000];
    getchar();
    for (int m = 0; m < l; m++) 
    {
        //fgets(word[m],sizeof(word[m]),stdin);
        gets(word[m]);
        int len=strlen(word[m]);
        if(len>0&&word[m][len-1]=='\n')
        {
            word[m][len-1]='\0';
        }
        for(int j=0;j<len;j++)
        {
            if(j==0 && islower(word[m][j]))
            {
                word[m][j]=toupper(word[m][j]);
            }
            else if(j>0&&(word[m][j]>='A'&&word[m][j]<='Z'))
            {
                word[m][j]=word[m][j]+32;
            }
        }
    }
    for (int p = 0; p < l; p++) 
    {
        printf("%s\n", word[p]);
    }
    return 0;
}

