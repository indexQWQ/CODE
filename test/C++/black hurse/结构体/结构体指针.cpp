#include <iostream>
#include <string>
using namespace std;

struct stu 
{
    string name;
    int age;
    int score;
};
int main()
{
    struct stu s1;
    struct stu *p=&s1;
    p->age=18;
    return 0;
}