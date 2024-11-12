#include <stdio.h>
void arr(int* p)
{
    (*p)++;
}
int main ()
{
    int a=0;
    arr(&a);
    printf("%d\n", a);
    arr(&a);
    printf("%d\n", a);
    arr(&a);
    printf("%d\n", a);
    return 0;
}