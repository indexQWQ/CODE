#include <stdio.h>

int isLeapYear(int year)
{
    if((year%4==0 && year%100!=0) || (year%400==0))
        return 1;
    else
        return 0;
}
int main()
{
    for(int i=1000;i<=2000;i++)
    {
        if(isLeapYear(i))
            printf("%d ",i);
    }
    return 0;
}