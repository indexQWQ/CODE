// #include <stdio.h>
// #include <string.h>
// #include <windows.h>
// #include <stdlib.h>
// int main ()
// {
//     char a[] = "hello world";
//     char b[] = "###########";
//     int left=0;
//     int right= strlen(a)-1;
//     while(left<=right)
//     {
//         b[left]=a[left];
//         b[right]=a[right];
//         system("cls");
//         printf("%s\n",b);
//         Sleep(1000);//延时100ms
//         if(left<right)
//         {
//         //system("cls");//清屏
//         }
//         left++;
//         right--;
//     }
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main()
{
    char arr1[]="welcome to bit!!!!";
    char arr2[]="##################";
    int len=strlen(arr1);
    //int len=sizeof(arr1)/sizeof(arr1[0])-1;计算字符串的长度
    int left=0,right=len-1;
    while(left<=right)
    {
        
        printf("%s\n",arr2);
        Sleep(100);//休眠一秒  头文件Windows.h
        arr2[left]=arr1[left];
        arr2[right]=arr1[right];
        left++;
        right--;
        if(left<right)
        {
            system("cls");//清屏  头文件stdlib.h
        }
        
    }
    system("cls");
    printf("%s\n",arr2);
    return 0;
}