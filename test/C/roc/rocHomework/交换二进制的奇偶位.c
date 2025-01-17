#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    // int left=n&1431655765;
    // int right=n&2863311530;
    printf("%d\n",(int)((n&1431655765)<<1)+((n&2863311530)>>1));
    return 0;
}