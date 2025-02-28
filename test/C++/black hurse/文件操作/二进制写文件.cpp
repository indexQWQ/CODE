#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//二进制写文件 主要利用流对象调用成员函数write
//函数原型：ostream& write(const char *buffer,int len);
//参数解释：字符指针buffer指向内存中一段存储空间，len是读写的字节数

class person
{
public:
    char m_name[64];
    int age;
};

void test()
{
    ofstream ofs;
    ofs.open("C:\\Users\\Lenovo\\OneDrive\\desktop\\555.txt",ios::out|ios::binary);
    if(!ofs.is_open())
    {
        cout<<"err"<<endl;
        return;
    }
    person p={"index",18};
    ofs.write((const char*)&p,sizeof(person));
    ofs.close();
}
int main()
{
    test();
    return 0;
}