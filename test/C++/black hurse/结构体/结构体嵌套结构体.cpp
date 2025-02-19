#include <iostream>
#include <string>
using namespace std;

struct stu 
{
    string name;
    int age;
    int score;
};

struct teach
{
    string name;
    int id;
    struct stu s;
};
int main()
{
    
    return 0;
}