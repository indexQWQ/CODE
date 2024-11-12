#include <stdio.h>
#include <string.h>
int main ()
{
    int a=0;
    int b=0;
    scanf("%d",&a);
    char sum[100];
    sprintf(sum,"%d",a);//将整数a转换为字符串
    b=strlen(sum);//求字符串的长度
    int su=0;
    
    for(int i=1;i<=b;i++)
    {
        su+=a%10;//求各位之和
        a/=10;//去掉最后一位-
    }
    
    printf("%d",su);
    return 0;
}
    
    
