#include <stdio.h>

int main() 
{
    double sum=0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        int age;
        scanf("%d", &age);
        if(age<=6)
        {
            sum+=0.0;
        }
        else if(age<=18 && age>=7)
        {
            sum+=80*0.8;
        }
        else if(age>=50)
        {
            sum+=80*0.6;
        }
        else
        {
            sum+=80;
        }
    }
    printf("%.0f", sum);
    return 0;
}