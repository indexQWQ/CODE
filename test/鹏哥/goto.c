#include <stdio.h>
int main ()
{
regain:
    printf("Hello, world!\n");
    goto regain;
    return 0;
}
