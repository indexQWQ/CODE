
        
#include<stdio.h>

int main()
{
    for(int i=101;i<1000;i++)
    {
        
        int b=0;
        int a=i%10;
        int c=(i/10)%10;
        int d=(i/100)%10;
        //for(int j=1;j<=3;j++)
        //{
            
            //b+=(i%10)*(i%10)*(i%10);
            //i/=10;
        //}
        b=a*a*a+c*c*c+d*d*d;
        if(b==i)
        {
            printf("%d\n",b);
        }
    }
    
    return 0;
}