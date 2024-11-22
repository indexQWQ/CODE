#include <stdio.h>

int main()
{
    int a=0;//初始化
    a=3;//赋值
    printf("a=%d\n",a);
    int x=0;
    int y=20;
    a=x=y+1;//连续赋值//不建议这样写
    printf("a=%d,x=%d",a,x);
    return 0;
}
//结果
// a=3
// a=21,x=21
