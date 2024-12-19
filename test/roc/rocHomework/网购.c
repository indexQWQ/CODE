#include <stdio.h>

int main()
{
    int month=0,day=0,flag=0;
    float mo=0;
    scanf("%f%d%d%d",&mo,&month,&day,&flag);
    if(month==11 && day==11)
    {
        if(flag==1)
        {
            mo=mo*0.7-50;
        }
        else
        {
            mo=mo*0.7;
        }
    }
    else if(month==12 && day==12)
    {
        if(flag==1)
        {
            mo=mo*0.8-50;
        }
        else
        {
            mo=mo*0.8;
        }
    }
    if(mo<0)
    {
        printf("0.00\n");
    }
    else
    {
        printf("%.2f",mo);
    }
    return 0;
}