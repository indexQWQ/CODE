#include <stdio.h>
int main()
{
    // 整型指针--指向整型的指针
    // 字符指针--指向字符的指针
    // 数组指针--指向数组的指针,存放数组的地址
    // int *p[10]//指针数组
    // int (*p)[10]//数组指针 p指向一个数组，数组有10个元素，每个元素是int类型
    // // &arr整个数组的地址
    //int arr[10]={0};
    //int *p=arr;
    //int (*pi)=&arr;// 这就是数组指针
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int (*p)[10]=&arr;
    int i=0;
    for(i=0;i<10;i++)
    {
        //printf("%d ",(*p)[i]);
        printf("%d ",*((*p)+i));
    }

    return 0;
}

