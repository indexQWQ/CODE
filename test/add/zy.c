#include <stdio.h>

int main() 
{
    int duty=0;
    printf("Enter the income: ");
    scanf("%d", &duty);
    if(duty>10000)
    {
        printf("duty=%.0f", (duty-10000)*0.2+700);
    }
    else if(duty>5000)
    {
        printf("duty=%.0f", (duty-5000)*0.1+200);
    }
    else if(duty>1000)
    {
        printf("duty=%.0f", (duty-1000)*0.05);
    }
    else
    {
        printf("duty=%d", duty);
    }
    return 0;
}