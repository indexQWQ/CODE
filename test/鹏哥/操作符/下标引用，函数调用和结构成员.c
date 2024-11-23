#include <stdio.h>
#include <string.h>
//下标引用操作符

// int main()
// {
//     int arr[10]={0};
//     arr[7]=8;//arr[7] --> *(arr+7)
//     //[]的操作数一个是arr一个是7
//     printf("%d\n",arr[7]);//8
//     7[arr]=9;//7[arr] --> *(arr+7)
//     printf("%d\n",arr[7]);//9
//     return 0;
// }

//函数调用操作符

// int add(int a,int b)
// {
//     return a+b;
// }
// int main()
// {
//     int a=1,b=3;
//     int c=add(a,b);//() -->函数调用操作符，操作数：add，a，b
//     //而sizeof后面的()可以去掉，所以sizeof不是函数
//     printf("%d\n",c);
//     return 0;
// }

//结构体成员操作符

typedef struct stu
{
    char name[10];
    int age;
    double score;
}stu;
void set_stu(stu *ss)
{
    strcpy(ss->name,"xiaoming");
    ss->age=18;//结构体指针->成员
    ss->score=100.0;
}
void print_stu(stu ss)
{
    printf("name:%s age:%d score:%lf",ss.name,ss.age,ss.score);//结构体对象.成员
}
int main()
{
    stu s={0};
    set_stu(&s);
    print_stu(s);
    return 0;
}