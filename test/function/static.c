//static是C语言中的一个关键字，它用来修饰局部变量，使其只能在本文件中使用，不能被其他文件访问。
//修饰局部变量的作用是为了节省内存，因为局部变量在函数调用结束后会自动释放，而static修饰的局部变量在程序运行期间一直存在，直到程序结束才释放。
//修饰全局变量的作用是为了防止其他文件修改它，因为全局变量在程序运行期间一直存在，直到程序结束才释放。
//修饰函数的作用是为了隐藏函数的实现细节，使调用者只能看到函数的接口，而不能看到函数的内部实现。
#include <stdio.h>

void func() 
{
    static int i = 0;
    i++;
    printf("i = %d\n", i);
}
int main() 
{
    for (int i = 0; i < 5; i++) 
    {
        func();
    }
    return 0;
}