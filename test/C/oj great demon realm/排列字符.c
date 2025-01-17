// #include <stdio.h>
// #include <string.h>
// #define all 100
// void quiksort(char (*arr)[all],int low,int high)
// {
//     if(low<high)
//     {
//         char *povint=arr[high];
//         int i=0;
//         int j=low;
//         for(i=low;i<high;i++)
//         {
//             if(strcmp(povint,arr[i])>0)
//             {
//                 char temp[all];
//                 strcpy(temp,arr[i]);
//                 strcpy(arr[i],arr[j]);
//                 strcpy(arr[j],temp);
//                 j++;
//             }
//         }
//         char temp[all];
//         strcpy(temp,arr[high]);
//         strcpy(arr[high],arr[j]);
//         strcpy(arr[j],temp);
//         quiksort(arr,low,j-1);
//         quiksort(arr,j+1,high);
//     }
// }
// void sort(char (*arr1)[all],char *arr,int start,int end,int *count)
// {
//     if(start==end)
//     {
//         printf("%s\n",arr);
//         //strcpy(arr1[(*count)++],arr);
//     }
//     else
//     {
//         int i=0;
//         for(i=start;i<=end;i++)
//         {
//             char temp=arr[i];
//             arr[i]=arr[start];
//             arr[start]=temp;
//             sort(arr1,arr,start+1,end,count);
//             temp=arr[i];
//             arr[i]=arr[start];
//             arr[start]=temp;
//         }
//     }
// }
// int main()
// {
//     char arr[all]={0};
//     char arr1[all][all]={0};
//     int count=0;
//     scanf("%s",arr);
//     int len=strlen(arr);
//     sort(arr1,arr,0,len-1,&count);
//     //quiksort(arr1,0,count-1);
//     // int i=0;
//     // for(i=0;i<count;i++)
//     // {
//     //     printf("%s\n",arr1[i]);
//     // }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define all 100

void swap(char *a, char *b) 
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char *start, char *end) 
{
    while (start < end) 
    {
        swap(start, end);
        start++;
        end--;
    }
}

int sort(char *arr, int n) 
{
    int i=n-2,j=n-1;
    while(i>=0 && arr[i]>=arr[i+1])i--;
    if(i<0)return 0;
    while(arr[j]<=arr[i])j--;
    swap(&arr[i],&arr[j]);
    reverse(arr+i+1,arr+n-1);
    return 1;
}

int main() 
{
    char arr[all] = {0};
    scanf("%s", arr);
    int len = strlen(arr);
    printf("%s\n", arr);
    while (sort(arr, len)) 
    {
        printf("%s\n", arr);
    }
    return 0;
}











// int next_permutation(char *arr, int n) 
// {
//     int i = n - 2;
//     while (i >= 0 && arr[i] >= arr[i + 1])
//         i--;
//     if (i < 0)
//         return 0;
//     int j = n - 1;
//     while (arr[j] <= arr[i])
//         j--;
//     swap(&arr[i], &arr[j]);
//     reverse(arr + i + 1, arr + n - 1);
//     return 1;
// }