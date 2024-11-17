// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// void menu()
// {
//     printf("猜数字游戏\n");
//     printf("1. 开始游戏\n");
//     printf("0. 退出游戏\n");
// }
// void game()
// {
//     int count=0;
//     int num, guess;
//     num=rand()%100+1;//生成1-100之间的随机数
//     //printf("%d\n", num);
//     while(1)
//     {
//         printf("请输入你猜的数字：");
//         scanf("%d", &guess);
//         if(guess==num)
//         {
//             system("cls");
//             printf("恭喜你猜对了！\n");
//             break;
//         }
//         else if(guess>num)
//         {
//             printf("猜的数字大了\n");
//         }
//         else
//         {
//             printf("猜的数字小了\n");
//         }
//         printf("你还有%d次机会\n", 6-count);
//         count++;
//         if(count==7)
//         {
//             system("cls");
//             printf("你已经猜错了7次，游戏结束！\n");
//             printf("正确答案是%d\n", num);
//             break;
//         }
//     }
// }
// int main ()
// {
//     int choice;
//     srand((unsigned int)time(NULL));//随机数种子 时间戳=当前计算机的时间-1970-01-01 00:00:00=（秒）
//     do
//     {
//         menu();
        
//         printf("请输入你的选择：");
//         scanf("%d", &choice);
//         switch (choice)
//         {
//         case 1:
//             printf("游戏开始\n");
//             game();
//             break;
//         case 0:
//             printf("游戏退出\n");
//             break;
//         default:
//             printf("哥们你输错了\n");
//             break;
//         }
//     }while(choice);
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>//包含标准输入输出函数库 
#include <time.h>

void menu()
{
    printf("猜数字游戏\n");
    printf("1. 开始游戏\n");
    printf("0. 退出游戏\n");
}

void game()
{
    int guess = 0;
    //srand((unsigned int)time(NULL));//随机数种子 时间戳=当前计算机的时间-1970-01-01 00:00:00=（秒）
    //srand((unsigned int)time(NULL));//不是每次start都要重新生成随机数种子，而是只在第一次生成随机数种子
    int num = rand() % 100 + 1; // 生成1-100之间的随机数
    //加1使 0-99 -> 1-100
    //int num1 = rand();
    while(1)
    {
        printf("你要猜的数字是;");
        scanf("%d", &guess);
        if(guess == num)
        {
            system("cls");//清屏
            printf("恭喜你猜对了！\n");
            break;
        }
        else if(guess > num)
        {
            printf("猜的数字大了\n");
        }
        else
        {
            printf("猜的数字小了\n");
        }
    }
    
}
//指针变量的声明和初始化
//int *p = NULL; //声明指针变量p，并初始化为NULL
//NULL是一个宏定义，它的值为0，表示一个空指针。
//int a = 0; //声明整型变量a，并初始化为0
//两者的区别：
//1. 指针变量的声明和初始化
//指针变量的声明和初始化可以分为两步：声明变量和初始化指针变量。
//声明变量：int *p;
//初始化指针变量：p = NULL;
//2. NULL是一个宏定义，它的值为0，表示一个空指针。
//指针变量的声明和初始化后，如果不对指针变量进行初始化，则默认值是NULL。
//3. 指针变量的声明和初始化的顺序：
//声明变量和指针变量：int *p;
//初始化指针变量：p = &a; //a是整型变量，&a表示a的地址，即a的存储地址。
//4. 指针变量的使用
//指针变量的使用可以分为两步：解引用和间接访问。
//解引用：*p = 10; //将指针变量p所指向的地址中的值设置为10。
//间接访问：p = &a; //将指针变量p指向a的存储地址。
//5. 指针变量的运算
//指针变量的运算可以分为三步：取地址、间接访问、指针运算。
//取地址：int *p = &a; //将指针变量p指向a的存储地址。
//间接访问：int b = *p; //将指针变量p所指向的地址中的值赋值给整型变量b。
//指针运算：int *q = p + 1; //将指针变量q指向p所指向的地址的下一个地址。
int main()
{
    srand((unsigned int)time(NULL));//不是每次start都要重新生成随机数种子，而是只在第一次生成随机数种子
    int choice=0;
    do
    {
        menu();
        printf("请输入你的选择：");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("游戏开始\n");
            game();
            break;
        case 0:
            printf("游戏退出\n");
            break;
        default:
            printf("哥们你输错了\n");
            break;
        }
    } while (choice);
    
    return 0;
}