// 描述
// KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”正方形图案。
// 输入描述：
// 多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“*”的数量。
// 输出描述：
// 针对每行输入，输出用“*”组成的“空心”正方形，每个“*”后面有一个空格。
#include <stdio.h>

int main() 
{
    int a;
    while (scanf("%d", &a) != EOF) 
    { 
        int i=0;
        for(i=0;i<a;i++)
        {
            int j=0;
            for(j=0;j<a;j++)
            {
                if(j==0 || j==a-1 || i==0 || i==a-1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}