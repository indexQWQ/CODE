#include <stdio.h>
int arr(int n)
{
    if(n==1||n==2)//递归出口
    {
        return 1;
    }
    else
    {
        return arr(n-1)+arr(n-2);//递归调用
    }
}

int main ()
{
    int a=0;
    int b=0;
    int c=0;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        scanf("%d",&b);
        c=arr(b);
        printf("%d\n",c);
        
    }
        
    
    return 0;
}
