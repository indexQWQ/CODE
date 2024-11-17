#include <stdio.h>

//全局变量
int a=0;
int b=0;
void test()
{
    a=10;
    b=20;
}
int main()
{
    test();
    printf("%d %d\n", a, b);
    return 0;
}

//传递指针作为参数
// void test(int *arr)
// {
//     (*arr)=10;
//     (*(arr+1))=20;
// }
// int main()
// {
//     int arr[2] = {0};
//     test(arr);
//     printf("%d %d\n", arr[0], arr[1]);
//     return 0;
// }

//传递数组作为参数
// void test(int arr[])
// {
//     arr[0]=10;
//     arr[1]=20;
// }
// int main()
// {
//     int arr[2] = {0};
//     test(arr);
//     printf("%d %d\n", arr[0], arr[1]);
//     return 0;
// }