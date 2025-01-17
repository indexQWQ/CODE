//存放指针的数组就是指针数组
//可以用指针数组模拟一个二维数组
#include <stdio.h>

int main()
{
    // int a=10;
    // int b=20;
    // int c=30;
    
    // //int arr[10];

    // // int *pa=&a;
    // // int *pb=&b;
    // // int *pc=&c;

    // //parr就是存放指针的数组
    // //指针数组
    // int *parr[10]={&a,&b,&c};
    // int i=0;
    // for(i=0;i<3;i++)
    // {
    //     printf("%d ",*(parr[i]));
    // }

    // int arr[3][4]={1,2,3,4,2,3,4,5,3,4,5,6};
    // int i=0;
    // for(i=0;i<3;i++)
    // {
    //     int j=0;
    //     for(j=0;j<4;j++)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     putchar('\n');
    // }

    int arr1[4]={1,2,3,4};
    int arr2[4]={2,3,4,5};
    int arr3[4]={3,4,5,6};
    int i=0;
    int *parr[3]={arr1,arr2,arr3};
    for(i=0;i<3;i++)
    {
        int j=0;
        for(j=0;j<4;j++)
        {
            printf("%d ",parr[i][j]);
        }
        putchar('\n');
    }
    
    return 0;
}