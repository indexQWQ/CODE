#include <iostream>
using namespace std;

int main()
{
    int a=10,b=10;
    //const修饰指针的三种情况：
    //1.const修饰指针---常量指针
    const int *p=&a;
    //特点：指针的指向可以修改，指针指向是值不能修改
    //2.const修饰常量---指针常量
    int *const p=&b;
    //特点：指针的指向不能修改，指针指向是值可以修改
    //3.const既修饰指针，又修饰常量
    

    return 0;
}