#include <stdio.h>

int main()
{
    int i=0;
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    for(i=0;i<=12;i++)
    {
        arr[i]=0;
        printf("hehe\n");
    }
    return 0;
}
// 1.栈区内存的使用习惯是先使用高地址的空间，再使用低地址的空间。
// 2.数组随着下标的增长地址是由低到高的
// 3.如果i和arr之间有适当的空间，利用数组的越界操作就可能会覆盖到i，就可能会导致死循环