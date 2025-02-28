#include <iostream>
#include <fstream>
using namespace std;

//包含头文件<fstream>

//文件类型分为两种：
//文本文件——以ASCII码值形式存储在计算机中
//二进制文件——以二进制形式存储在计算机中

//操作文件的三大类：
//1.ofstream:写操作
//2.ifstream:读操作
//3.fstream:读写操作

//打开方式
//ios::in     打开文件用于读取。
//ios::out    打开文件用于写入。
//ios::ate    文件打开后定位到文件末尾。
//ios::app    追加模式。所有写入都追加到文件末尾。
//ios::trunc  如果该文件已经存在，其内容将在打开文件之前被截断，即把文件长度设为 0。
//ios::binary 二进制方式
//文件打开方式可以配合使用，利用|操作符
//列如 ios::binary|ios::out

//写文件步骤
//1.包含头文件 #include <fstream>
//2.创建流文件 ofstream ofs;
//3.打开文件   ofs.open(“文件路径”,打开方式);
//4.写数据     ofs<<"  "<<endl;
//5.关闭文件   ofs.close();


void test1()
{
    ofstream ofs;
    ofs.open("C:\\Users\\Lenovo\\OneDrive\\desktop\\555.txt",ios::out);
    ofs<<"index"<<endl;
    ofs.close();
}
int main()
{
    test1();
    return 0;
}