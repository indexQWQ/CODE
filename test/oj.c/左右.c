#include <stdio.h>

int main()
{
    int s,m;
    scanf("%d%d",&s,&m);
    if(((s/m)%2!=0 && s%m!=0) || (s%m==0 && s/m%2==0))
        printf("YES");
    else
        printf("NO");

    return 0;
}