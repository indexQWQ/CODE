#include <stdio.h>

void my_scanf(int (*arr)[8])
{
    int i=0;
    for(i=0;i<8;i++)
    {
        int j=0;
        for(j=0;j<8;j++)
        {
            scanf("%d",&(*(*(arr+i)+j)));
        }
    }
}
int main()
{
    int arr[8][8]={0};
    my_scanf(arr);
    return 0;
}