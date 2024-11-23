#include <stdio.h>

//&& 左边为假，右边不计算
//|| 左边为真，右边不计算
int main()
{
    int i=0,a=0,b=2,c=3,d=4;
    // i=a++ && ++b && d++;
    // printf("i=%d a=%d b=%d c=%d d=%d\n",i,a,b,c,d);
    //i=0 a=1 b=2 c=3 d=4
    i=a++ || ++b || d++;//短路
    printf("i=%d a=%d b=%d c=%d d=%d\n",i,a,b,c,d);
    //i=1 a=1 b=3 c=3 d=4
    return 0;
}