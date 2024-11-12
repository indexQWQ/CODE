#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
int main ()
{
    char a[] = "hello world";
    char b[] = "###########";
    int left=0;
    int right= strlen(a)-1;
    while(left<=right)
    {
        b[left]=a[left];
        b[right]=a[right];
        system("cls");
        printf("%s\n",b);
        Sleep(1000);//延时100ms
        if(left<right)
        {
        //system("cls");//清屏
        }
        left++;
        right--;
    }
    
    return 0;
}
