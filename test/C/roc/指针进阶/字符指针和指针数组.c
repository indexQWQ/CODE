#include <stdio.h>

int main()
{
    // const char *p="asdfg";// 把字符串首字符的地址，赋值给p 
    // const char *a="asdfg";
    // // 上面的"asdfg"是一个常量，不能被修改，但是因为* p，就有可能被修改
    // printf("%s\n",p);
    // printf("%c\n",*(p));
    // printf("%p %p",p,a);// 两个指针地址相同

    // 指针数组
    int arr[]={1,2,3,4,5};
    int arr1[]={2,3,4,5,6};
    int arr2[]={3,4,5,6,7};
    int *parr[]={arr,arr1,arr2};
    int i=0;
    for(i=0;i<3;i++)
    {
        int j=0;
        for(j=0;j<5;j++)
        {
            // *(p+i)-->p[i]
            // printf("%d",*(parr[i]+j));
            printf("%d",parr[i][j]);
        }
        printf("\n");
    }
    return 0;
}