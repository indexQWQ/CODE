#include <stdio.h>
void mung(int n)
{
    if(n==1)
    {
        
        return;
    }
    if(n%2==0)
    {
        printf("%d\n",n/2);
        return mung(n/2);
    }
    if(n%2==1)
    {
        printf("%d\n",3*n+1);
        return mung(3*n+1);
    }
}
int main ()
{
    int q;
    scanf("%d",&q);
    mung(q);
    return 0;
}