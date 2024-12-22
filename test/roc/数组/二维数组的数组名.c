#include <stdio.h>

int main()
{
    int arr[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
    printf("%d\n", sizeof(arr)/sizeof(arr[0]));//计算二维数组的行数
    pritnf("%d\n", sizeof(arr[0])/sizeof(arr[0][0]));//计算二维数组的列数
    // int sz=sizeof(arr);
    // printf("数组的大小为：%d\n",sz);
    printf("%p\n", arr);//二维数组的数组名表示第一行数组首元素的地址
    printf("%p\n", arr+1);//二维数组的数组名表示第二行数组首元素的地址
    return 0;
}