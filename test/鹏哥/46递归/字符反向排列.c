// 递归

#include <stdio.h>
#include <string.h>
void asd(char *arr)
{
    char temp=*arr;
    int len=strlen(arr);
    *arr=*(arr+len-1);
    *(arr+len-1)='\0';
    if(strlen(arr+1)>1)
        asd(arr+1);
    *(arr+len-1)=temp;
}
int main()
{
    char arr[]="abcdef";
    int len=strlen(arr);
    asd(arr);
    int i=0;
    for(i=0;i<len;i++)
    {
        printf("%c",arr[i]);
    }
    return 0;
}


// #include <stdio.h>
// #include <string.h>
// void asd(char *arr)
// {
//     if(*arr!='\0')
//     {
//         asd(arr+1);
//         printf("%c",*arr);
//     }
    
// }
// int main()
// {
//     char arr[]="abcdef";
//     asd(arr);
//     return 0;
// }


// 非递归是循环

// #include <stdio.h>
// #include <string.h>
// void asd(char arr[],int len)
// {
//     int i=0;
//     for(i=0;i<len-1;i++)
//     {
//         int j=0;
//         for(j=0;j<len-i-1;j++)
//         {
//             char temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }
//     }
    
// }
// int main()
// {
//     char arr[]="abcdef";
//     int len=strlen(arr);
//     asd(arr,len);
//     int i=0;
//     for(i=0;i<len;i++)
//     {
//         printf("%c",arr[i]);
//     }
//     return 0;
// }

