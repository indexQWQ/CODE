#include <iostream>
#include <string>
using namespace std;
//1.无参无返
void test1()
{
    cout<<"test1"<<endl;
}
//2.有参无返
void test2(string s)
{
    cout<<s<<endl;
}
//3.无参有返
string test3()
{
    return "test3";
}
//4.有参有返
string test4(string s)
{
    return s;
}
int main()
{
    test1();
    test2("test2");
    cout<<test3()<<endl;
    cout<<test4("test4")<<endl;
    return 0;
}