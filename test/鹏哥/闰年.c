#include <stdio.h>
void isLeapYear(int n)
{
    if((n%4==0 && n%100!=0)||n%400==0)
    {
        printf("%d is a leap year.\n", n);
    }
    else
    {
        printf("%d is not a leap year.\n", n);
    }
}

int main ()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    isLeapYear(year);
    return 0;
        
}