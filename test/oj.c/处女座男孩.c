#include <stdio.h>

int main() 
{
    int a;
    char ch=getchar();
    scanf("%d", &a);
    int b=a%10000;
    if(ch=='M')
    {
        if((b>=822 && b<=831) || (b>=901 && b<=922))
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}