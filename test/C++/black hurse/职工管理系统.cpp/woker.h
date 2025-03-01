#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//职工抽象类
class Woker
{
public:
    //显示个人信息
    virtual void ShowInfo()=0;
    //获取岗位名称
    virtual string GetDeptName()=0;
    string name;
    int id;
    int depid;
    virtual~Woker(){};
};
