#include <iostream>
#include <string>
using namespace std;
//1.创建一个学生的类型
struct stu
{
    string name;
    int age;
    float score;
};
int main()
{
    //在cpp中使用结构体的时候可以省略struct
    stu s1;
    struct stu s2={"index",12,88.8};
    cout<<s2.name<<s2.age<<s2.score<<endl;
    return 0;
}