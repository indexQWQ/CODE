#include <stdio.h>
#define M 100000
int main() 
{
    int arr[M] = {0};
    int i=0;
    int arrr[M] = {0};
    while(EOF!= scanf("%d", &arr[i]))
    {
        arrr[arr[i]]+=1;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        if(arrr[j]!=0)
        {
            printf("%d %d\n", j, arrr[j]);
        }
    }
    return 0;
}