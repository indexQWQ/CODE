#include <stdio.h>
int dod()
{
    static int i=1;
    return ++i;
}
int main()
{
    int b=dod()-dod()*dod();
    printf("%d\n",b);
    return 0;
}