#include <stdio.h>

//(1)?(2):(3)
//(1)为真返回(2)
//(1)为假返回(3)

int main()
{
    int a=0;
    scanf("%d",&a);
    int b=a>5?3:-3;
    printf("%d\n",b);
    return 0;
}