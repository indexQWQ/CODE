#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    int day;
    if(z==2)
    {
        if(x==11)
        {
            day=32+30-y;    
        }
        else if(x==12)
        {
            day=32-y;
        }
    }
    else if(z==1)
    {
        if(x==11)
        {
            day=31+30-y;
        }
        else if(x==12)
        {
            day=31-y;
        }
    }
    printf("%d", day);
    return 0;
}