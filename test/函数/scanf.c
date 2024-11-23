#include <stdio.h>

//scanf读取成功的时候，返回的是读取的数据的个数
//scanf在读取失败的时候，返回的是EOF

int main()
{
    int n=0;
    int a=scanf("%d",&n);
    printf("%d\n",a);
    return 0;
}