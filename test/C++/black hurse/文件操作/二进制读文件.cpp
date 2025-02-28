#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//二进制读文件 主要利用流对象调用成员函数read
//函数原型：istream& read(char *buffer,int len);
//参数解释：字符指针buffer指向内存中一段存储空间，len是读写的字节数

class person
{
public:
    char m_name[64];//不建议使用string容易出错
    int age;
};

void test()
{
    ifstream ifs;
    ifs.open("C:\\Users\\Lenovo\\OneDrive\\desktop\\555.txt",ios::out|ios::binary);
    if(!ifs.is_open())
    {
        cout<<"err"<<endl;
        return;
    }
    person p;
    ifs.read((char*)&p,sizeof(person));
    cout<<p.age<<" "<<p.m_name<<endl;
    ifs.close();
}
int main()
{
    test();
    return 0;
}