#include <stdio.h>

int main() 
{
    int arr[100], n=0;
    while(EOF != scanf("%d", &arr[n]))
    {
        n++;
    }
    for(int j=n-1; j>=0; j--)
    {    
        printf("%d ", arr[j]);
        // if(j!=0)
        // {
        //     printf(" ");
        // }
    }
    printf("\n");
    return 0;
}

