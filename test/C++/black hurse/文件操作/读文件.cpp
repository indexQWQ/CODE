#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//写文件步骤
//1.包含头文件 #include <fstream>
//2.创建流文件 ifstream ifs;
//3.打开文件   ifs.open(“文件路径”,打开方式);
//4.写数据     四种方式读取
//5.关闭文件   ifs.close();

void test1()
{
    ifstream ifs;
    ifs.open("C:\\Users\\Lenovo\\OneDrive\\desktop\\555.txt",ios::out);
    if(!ifs.is_open())
    {
        cout<<"打开失败"<<endl;
        return;
    }
    //1.
    // char buf[1024]={0};
    // while(ifs>>buf)
    // {
    //     cout<<buf<<endl;
    // }
    //2.
    // char buf[1024]={0};
    // while(ifs.getline(buf,1024))
    // {
    //     cout<<buf<<endl;
    // }
    //3.
    // string buf;
    // while(getline(ifs,buf))
    // {
    //     cout<<buf<<endl;
    // }
    //4.
    char c;
    while((c=ifs.get())!=EOF)
    {
        cout<<c;
    }
    ifs.close();
}
int main()
{
    test1();
    return 0;
}