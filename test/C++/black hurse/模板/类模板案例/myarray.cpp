#include "myarray.hpp"

class person
{
public:
    person()
    {
        age=19;
        name="index";
    }
    int age;
    string name;
};

void test1()
{
    myarray<int> arr(5);
    for(int i=0;i<5;i++)
    {
        arr.Push_Back(i);
    }
    arr.myprint();
    arr.Pop_Back();
    arr.myprint();
}
int main()
{
    myarray<person> p(2);
    
    return 0;
}