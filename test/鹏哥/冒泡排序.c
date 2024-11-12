#include <stdio.h>
int main ()
{
    int a[5]= {5,3,1,4,2};
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if (a[j]<a[j+1])
            {
                int b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
