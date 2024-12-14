#include <stdio.h>

int main()
{

    return 0;
}
//  一维数组传参
// #include <stdio.h>
// void test(int arr[])
// {}
// void test(int arr[10])
// {}
// void test(int *arr)
// {}
// void test2(int *arr[20])
// {}
// void test2(int **arr)
// {}
// int main()
// {
//     int arr[10] = {0};
//     int *arr2[20] = {0};
//     test(arr);
//     test2(arr2);
// }

// 二维数组传参
// void test(int arr[3][5])
// {}
//  void test(int arr[][])//err
// {}
//  void test(int arr[][5])
// {}
// //总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
// //因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
// //这样才方便运算。
// void test(int *arr)//err
// {}
// void test(int* arr[5])//err
// {}
// void test(int (*arr)[5])
// {}
// void test(int **arr)//err
// {}
// int main()
// {
//     int arr[3][5] = {0};
//     test(arr);
// }

//  一级指针传参
// #include <stdio.h>
//  void print(int *p, int sz)
//  {
//  int i = 0;
//  for(i=0; i<sz; i++)
//  {
//  printf("%d\n", *(p+i));
//  }
//  }
//  int main()
//  {
//  int arr[10] = {1,2,3,4,5,6,7,8,9};
//  int *p = arr;
//  int sz = sizeof(arr)/sizeof(arr[0]);
//  //一级指针p，传给函数
// print(p, sz);
//  return 0;
//  }