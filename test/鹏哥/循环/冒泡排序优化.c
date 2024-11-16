#include <stdio.h>
int main() 
{
    int a[10]= {5,3,6,8,2,7,1,4,9,0};
    int se=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<se-1;i++)
    {
        int flag=1;
        for(int j=0;j<se-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=0;
            }
        }
        if(flag==1)
            break;
    }
    for(int i=0;i<se;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
