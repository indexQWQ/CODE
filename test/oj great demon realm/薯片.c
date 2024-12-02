#include <stdio.h>

int main() 
{
    double m,sum=0.0;
    int count=0;
    scanf("%lf", &m);
    while(1)
    {
        sum+=m;
        m*=0.9;
        if(m<5)
            m=5;
        if(sum>100)
            break;
        count++;
    }
    printf("%d",count);
    return 0;
}