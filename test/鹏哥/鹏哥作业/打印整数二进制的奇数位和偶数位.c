#include <stdio.h>

int main()
{
    char arr[17]={0};
    char arr1[17]={0};
    int n=0;
    scanf("%d",&n);
    int i=0,count=0,count1=0;
    for(i=0;i<32;i++)
    {
        int a=n&(1<<i);
        if((i+1)%2==1)
        {
            if(a==0)
            {
                arr[count]='0';
                count++;
            }
            else
            {
                arr[count]='1';
                count++;
            }
        }
        else
        {
            if(a==0)
            {
                arr1[count1]='0';
                count1++;
            }
            else
            {
                arr1[count1]='1';
                count1++;
            }
        }
    }
    printf("%s\n",arr);
    printf("%s\n",arr1);
    return 0;
}