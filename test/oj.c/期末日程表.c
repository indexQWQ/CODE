#include <stdio.h>

int main() 
{
    int n, m, k,time=0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) 
    {
        scanf("%d %d", &m, &k);
        time +=m*60+k;
    }
    printf("%d", 24*60-time);
    return 0;
}