#include <stdio.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    int arr[50]={0};
    int i=0;
    int flag=0;
    int flag2=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
        if(i>0)
        {
             if(arr[i]>arr[i-1])
            {
                flag=1;
            }
            else if(arr[i<arr[i-1]])
            {
                flag2=1;
            }
            else
            {
                continue;
            }
        }
    }
    
    if(flag + flag2<=1)
        printf("sorted\n");
    else
        printf("unsorted\n");
    return 0;
}