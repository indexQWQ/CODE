#include <stdio.h>

int main()
{
    int num=10;//num 的类型是 int 
    int arr[10];//arr 的类型是 int[10]
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(int[10]));
    return 0;
}
//输出：
//40
//40