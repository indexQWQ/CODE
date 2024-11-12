#include <stdio.h>
#include <math.h>
#include <string.h>
int main() 
{
    char arr[55]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}  ;
    char str[100];
    int a=0;
    scanf("%d%s", &a, str);
    int b=strlen(str);
    int flag=0;
    for(int i=0;i<b;i++)
    {
        
        for(int j=0;j<16;j++)
        {
            if(str[i]==arr[j])
            {
                flag+=pow(a,b-i-1)*j;
                
            }
        }
        
    }
    printf("%d", flag);
    return 0;
}