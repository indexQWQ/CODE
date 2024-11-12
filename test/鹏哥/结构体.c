// #include <stdio.h>
// struct student 
// {
//     char name[20];
//     int age;
//     float score;
// };//定义结构体

// int main() 
// {
//     struct student stu;
//     printf("请输入学生姓名：");
//     scanf("%s", stu.name);
//     printf("请输入学生年龄：");
//     scanf("%d", &stu.age);
//     printf("请输入学生成绩：");
//     scanf("%f", &stu.score);
//     printf("姓名：%s\n", stu.score);//输出结构体变量
//     printf("年龄：%d\n", stu.age);
//     printf("成绩：%.2f\n", stu.score);
//     return 0;
// }

#include <stdio.h>
struct student 
{
    char name[20];
    int age;
    float score;
};//定义结构体

int main()
{
    struct student *stu;
    printf("请输入学生姓名：");
    scanf("%s",&stu->name);
    printf("请输入学生年龄：");
    scanf("%d", &stu->age);
    printf("请输入学生成绩：");
    scanf("%f", &stu->score);
    printf("姓名：%s\n", stu->name);//输出结构体变量
    printf("年龄：%d\n", stu->age);
    printf("成绩：%.2f\n", stu->score);
    return 0;
}