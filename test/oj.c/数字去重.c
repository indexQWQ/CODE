
// #include <stdio.h>
// #define arrr 100000
// int main() 
// {
//     int arr[arrr], n=0;
//     int hash[arrr] = {0};
//     while(EOF != scanf("%d", &arr[n]))
//     {
//         hash[arr[n]] =1;
//         n++;
//     }
    
//     for (int i = 0; i < arrr; i++) 
//     {
//         if(hash[i] == 1)
//         {
//             printf("%d ", i);
//         }
//     }
    
//     return 0;
// }


#include<stdio.h>
#define num 100000

int main()
{
	int count=0;
	int a=0;
	int arr[num];
    int arrr[num]={0};
	while (scanf("%d", &a)==1)
	{
        if(arrr[a]==0)
        {
            arr[count]=a;
            count++;
            arrr[a]++;
        }
    }
    int j=0;
    for(j=0;j<count;j++)
    {
        printf("%d ",arr[j]);
    }
	return 0;
}